// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel({text: "Localytics"});
win.add(label);
win.open();

var localytics = require('pw.localytics');
Ti.API.info("module is => " + localytics);

// Initialise Module
localytics.initSession( "73751065ccb7f4d7d24443e-0668acde-eb25-11e3-9e52-009c5fda0a25" );

// Register for push
localytics.registerForPush("907397882644");

// Log a visit to the Home Screen
localytics.logScreen("Home");

// Log an App Started event with some additional information
localytics.logEvent("App Started", {foo: "bar"});