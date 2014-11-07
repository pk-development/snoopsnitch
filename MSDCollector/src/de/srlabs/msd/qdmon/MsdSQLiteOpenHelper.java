package de.srlabs.msd.qdmon;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

public class MsdSQLiteOpenHelper extends SQLiteOpenHelper {
	private static final String DATABASE_NAME = "msd.db";
	private static final int DATABASE_VERSION = 7;
	private Context context;
	public MsdSQLiteOpenHelper(Context context) {
		super(context, DATABASE_NAME, null, DATABASE_VERSION);
		this.context = context;
	}

	public void readSQLAsset(SQLiteDatabase db, String file) {
		Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.onCreate() called");
		try {
			InputStream sqlInputStream = context.getAssets().open(file);
			ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
			int i;
			try {
				i = sqlInputStream.read();
				while (i != -1)
				{
					byteArrayOutputStream.write(i);
					i = sqlInputStream.read();
				}
				sqlInputStream.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
			String sql = byteArrayOutputStream.toString();
			Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + "): " + sql);
			for(String statement:sql.split(";")){
				if(statement.trim().length() > 0 && !statement.startsWith("/*!")){
					Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + "): statement=" + statement);
					db.execSQL(statement);
				}
			}
		} catch (IOException e) {
			e.printStackTrace();
		}

	}

	@Override
	public void onCreate(SQLiteDatabase db) {
		Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.onCreate() called");
		readSQLAsset(db, "si.sql");
		readSQLAsset(db, "cell_info.sql");
		readSQLAsset(db, "sms.sql");
		readSQLAsset(db, "local.sqlx");
	}

	@Override
	public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
		// The si.sql statement already contains a "DROP TABLE IF EXISTS" statement
		// Upgrading the database will delete all data
		//db.execSQL("DROP TABLE IF EXISTS session_info;");
		onCreate(db);
	}

}
