# Localytics Module

## Description

This module provides access to the Localytics SDK in Titanium.

## Accessing the localytics Module

To access this module from JavaScript, you would do the following:

	var localytics = require("pw.localytics");

The localytics variable is a reference to the Module object.	

Your tiapp.xml file should include the following:

	<android xmlns:android="http://schemas.android.com/apk/res/android"> 
        <manifest android:versionCode="1" android:versionName="0.1">
            
            <permission android:name="<YOUR PACKAGE NAME>.permission.C2D_MESSAGE" android:protectionLevel="signature" />
			<uses-permission android:name="<YOUR PACKAGE NAME>.permission.C2D_MESSAGE" />
            
            <application>
                
                <receiver android:name="com.localytics.android.PushReceiver" android:permission="com.google.android.c2dm.permission.SEND" >
    				<intent-filter>
        				<action android:name="com.google.android.c2dm.intent.REGISTRATION" />
        				<action android:name="com.google.android.c2dm.intent.RECEIVE" />               
        				<category android:name="<YOUR PACKAGE NAME>" />
    				</intent-filter>
				</receiver>
                
                <meta-data android:name="LOCALYTICS_APP_KEY" android:value="<APP KEY>"/>
                
            </application>
        </manifest>
    </android>
	

Where   

* `<YOUR PACKAGE NAME>` is the app id already specified in tiapp.xml.
* `<APP KEY>` is the application key from localytics
  


## Reference

The following methods are available

### initSession( String appKey )  

Required before using any of the following methods. Used to setup the localytics session.

* appKey: The App Key associated with the Localytics Account.

### pauseSession()  
Pause a session when the app is backgrounded.

### resumeSession()
Resume a session after the app is focused.

### registerForPush( String projNumber )

Initialise a localytics session and register for push notifications. 
 
* projNumber: The project number obtained after registering for [Google Cloud Messaging](http://developer.android.com/google/gcm/gs.html).

### logEvent( String eventName, Object paramDictionary )

Log an event on localytics.  

* eventName: Name of the event to log  
* paramDictionary (optional): A key/value dictionary of extra content to log.

### logScreen ( String screenName )  

Log a visit to a screen to create a screen map.  

* screenName: Name of the screen visited.

## Usage

	// Require the Module
	var localytics = require("pw.localytics");
	
	// Init Session
	localytics.initSession();
	
	// Register for push
	localytics.registerForPush("670330094152");
	
	// Log a visit to the Home Screen
	localytics.logScreen("Home");
	
	// Log an App Started event with some additional information
	localytics.logEvent("App Started", {foo: "bar"});

## Author

Michael Browne  
ProductWorld (2014)  
m.browne@productworld.com

## License

TODO: Enter your license/legal information here.
