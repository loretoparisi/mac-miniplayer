# Music MiniPlayer for Beats Music™
[![Build Status](https://travis-ci.org/bjtitus/mac-miniplayer.svg?branch=master)](https://travis-ci.org/bjtitus/mac-miniplayer)

## About
The Music MiniPlayer for Beats Music™ is an example application demonstrating how developers can utilitze the new Beats Music API to perform various tasks. These tasks include sign in, search, fetching images, performing API requests using AFNetworking, and caching results into a Core Data store with MagicalRecord.

## Features

### Sign In
The sign in flow is done using a webview to go through the oAuth 2.0 flow and extract the auth token for your application to use for making authorized API requests.

![alt text](https://s3.amazonaws.com/beatsmusic-miniplayer/BMsignInView.png "MiniPlayer-SignInView")

### Search
The DSYSearchViewController demonstrates how you could implement a search-as-you-type feature for albums and populate a tableview with the results.

![alt text](https://s3.amazonaws.com/beatsmusic-miniplayer/BMsearchView.png "MiniPlayer-SearchView")

### Images
The DSYAPIClient demonstrates how to load images from the Beats Music API's various image endpoints. These images are used to display playlist, album, and track art covers. 

#### Playlists
![alt text](https://s3.amazonaws.com/beatsmusic-miniplayer/BMplaylistsView.png "MiniPlayer-PlaylistsView")

#### Playlist Detail
![alt text](https://s3.amazonaws.com/beatsmusic-miniplayer/BMplaylistDetailView.png "MiniPlayer-PlaylistDetailView")

#### Album Detail
![alt text](https://s3.amazonaws.com/beatsmusic-miniplayer/BMalbumDetailView.png "MiniPlayer-AlbumDetailView")

### Fullscreen Mode
The DSYFullScreenViewController demonstrates how to provide an alternate full screen mode for the currently selected track. It displays the track artist's cover photo, the track's album cover, and track's title and artist name.

![alt text](https://s3.amazonaws.com/beatsmusic-miniplayer/BMfullscreenView.png "MiniPlayer-FullScreenView")

### AFNetworking
Since AFNetworking is one of the most widely used networking frameworks around for iOS and Mac we've utilized it to build the DSYAPIClient class to communicate with the Beats Music API. The DSYAPIClient subclasses the AFHTTPRequestOperationManager and provides an asynchronous, block-based class to perform authorized requests with the Beats Music API.

## Building The Project
To build the project there are a few things you need to get it running on your machine.

### Cocoapods
To build this project you must first install [Cocoapods](http://cocoapods.org/). Cocoapods is a dependency manager similar to npm for node that helps developers quickly integrate third party libraries and frameworks into their projects.

If you don't want to use Cocoapods then please note you will have to resolve the following dependencies yourself:

**MiniPlayer**

- AFNetworking
- MagicalRecord

**MiniPlayerTests**

- AFNetworking
- MagicalRecord
- Expecta
- Specta


#### Installing Cocoapods
To install Cocoapods, first make sure you have Ruby installed on your machine (on OSX Ruby will be installed by default), and then run the following commands:<br>
```sudo gem install cocoapods```

Once Cocoapods is installed you can install the required third party frameworks by running the following commands within the project's directory:<br>
```pod install```

## Configuring The Project
You will need to put your own API Key and Secret into the Keys.plist file. You can request an API key from [developer.beatsmusic.com](https://developer.beatsmusic.com). The API Key is the Client ID and the Secret is the Client Secret.

## Documentation
Documentation is provided for the project using appledoc.  The project contains a `Generate Documentation` target that will install the docset into Xcode.

### Installing Appledoc
To install appledoc run the following commands:<br>

1. Clone the appledoc repo <br>
```git clone git://github.com/tomaz/appledoc.git```
2. Navigate to the cloned appledoc directory<br>
```cd appledoc/```
3. Run the installation script<br>
```sudo sh install-appledoc.sh```

## License

See the LICENSE file for license rights and limitations (BSD-3-Clause).

Enjoy!
