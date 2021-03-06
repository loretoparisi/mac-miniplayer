#import "_DSYAlbum.h"

/**
 The DSYAlbum, a subclass of the _DSYAlbum (a private NSManagedObject subclass generated by Mogenerator using the Model.xcdatamodeld - See the 'Run Mogenerator' target), provides a Core Data class that represents an album from the Beats Music API. This class contains class methods to directly import the JSON parsed NSDictionary and NSArray representations of an album directly from the API.
*/
@interface DSYAlbum : _DSYAlbum

#pragma mark - Properties
///-----------------------------------------------------------
/// @name Properties
///-----------------------------------------------------------

/**
 A BOOL indicating whether this is a group type of DSYAlbum. You can manually set this to YES if you'd like to create a DSYAlbum to serve as a group cell in an NSTableView.
 */
@property (nonatomic,assign) BOOL isGroup;

#pragma mark - Class Initializers
///-----------------------------------------------------------
/// @name Class Initializers
///-----------------------------------------------------------

/**
 Creates a DSYAlbum using an NSDictionary representation of the album. Will try to parse the dictionary for keys = artist_display_name, canonical, duration, edited_version, essential, id, parental_advisory, popularity, rating, release_date, release_format, streamable, title, total_companion_albums, total_tracks, and type. This method will first load the DSYAlbum if it already exists in the Core Data store and will only update the key-value information if a local album with the same id is present.
 @param dictionary An NSDictionary with the following keys: artist_display_name, canonical, duration, edited_version, essential, id, parental_advisory, popularity, rating, release_date, release_format, streamable, title, total_companion_albums, total_tracks, and type.
 @return A DSYAlbum created using the input NSDictionary.
 */
+(DSYAlbum *)albumWithDictionary:(NSDictionary *)dictionary;

/**
 Creates an NSArray of DSYAlbum objects using an NSArray containing NSDictionary objects. For each NSDictionary this will try to parse for keys = artist_display_name, canonical, duration, edited_version, essential, id, parental_advisory, popularity, rating, release_date, release_format, streamable, title, total_companion_albums, total_tracks, and type. For each album, this method will first load the DSYAlbum if it already exists in the Core Data store and will only update the key-value information if a local album with the same id is present.
 @param dictionaries An NSArray containing the NSDictionary objects, each containing the keys: artist_display_name, canonical, duration, edited_version, essential, id, parental_advisory, popularity, rating, release_date, release_format, streamable, title, total_companion_albums, total_tracks, and type.
 @return An NSArray of DSYAlbum objects created using the input NSArray of NSDictionary objects.
 */
+(NSArray *)albumsWithDictionaries:(NSArray *)dictionaries;

/**
 Creates an NSArray of DSYAlbum objects using an NSArray containing NSDictionary objects specifically from a search response. For each NSDictionary this will try to parse for keys = id, display (mapped to `title` property), detail (mapped to `artistDisplayName` property). For each album, this method will first load the DSYAlbum if it already exists in the Core Data store and will only update the key-value information if a local album with the same id is present.
 @param searchDictionaries An NSArray containing the NSDictionary objects. each containing the keys: id, display, and detail.
 @return An NSArray of DSYAlbum objects created using the input NSArray of NSDictionary objects.
 */
+(NSArray *)albumsWithSearchDictionaries:(NSArray *)searchDictionaries;

@end
