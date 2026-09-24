#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Base Class
class Media {
protected:
    string title;
    string fileType;

public:

    // Constructor
    Media(string t, string f) {
        title = t;
        fileType = f;
    }


    // Play media
    virtual void play() {
        cout << "Playing media..." << endl;
    }


    // Pause media
    virtual void pause() {
        cout << "Media paused." << endl;
    }


    // Stop media
    virtual void stop() {
        cout << "Media stopped." << endl;
    }


    // Display media details
    virtual void showDetails() const {
        cout << "Title: " << title << endl;
        cout << "Type: " << fileType << endl;
    }


    // Virtual destructor
    virtual ~Media() {
    }
};


// Audio Class
class Audio : public Media {
private:
    string artist;

public:

    Audio(string t, string a)
        : Media(t, "Audio") {
        artist = a;
    }


    virtual void play() {
        cout << "Playing audio: " << title << endl;
    }


    virtual void pause() {
        cout << "Audio paused." << endl;
    }


    virtual void stop() {
        cout << "Audio stopped." << endl;
    }


    virtual void showDetails() const {
        cout << "Audio: " << title << endl;
        cout << "Artist: " << artist << endl;
    }
};


// Video Class
class Video : public Media {
private:
    string quality;

public:

    Video(string t, string q)
        : Media(t, "Video") {
        quality = q;
    }


    virtual void play() {
        cout << "Playing video: " << title << endl;
    }


    virtual void pause() {
        cout << "Video paused." << endl;
    }


    virtual void stop() {
        cout << "Video stopped." << endl;
    }


    virtual void showDetails() const {
        cout << "Video: " << title << endl;
        cout << "Quality: " << quality << endl;
    }
};


// Image Class
class Image : public Media {
private:
    string resolution;

public:

    Image(string t, string r)
        : Media(t, "Image") {
        resolution = r;
    }


    virtual void play() {
        cout << "Displaying image: " << title << endl;
    }


    virtual void pause() {
        cout << "Image viewing paused." << endl;
    }


    virtual void stop() {
        cout << "Image viewing stopped." << endl;
    }


    virtual void showDetails() const {
        cout << "Image: " << title << endl;
        cout << "Resolution: " << resolution << endl;
    }
};


int main() {

    // Create vector of Media pointers
    vector<Media*> mediaList;


    // Add Audio
    mediaList.push_back(
        new Audio("Shape of You", "Ed Sheeran")
    );


    // Add Video
    mediaList.push_back(
        new Video("Avengers Endgame", "4K")
    );


    // Add Image
    mediaList.push_back(
        new Image("Sunset Landscape", "2560x1440")
    );


    cout << "===== MEDIA PLAYER =====" << endl;


    // C++98 compatible iterator
    vector<Media*>::iterator media;


    for (media = mediaList.begin();
         media != mediaList.end();
         ++media) {

        cout << "\n------------------------" << endl;

        (*media)->showDetails();

        (*media)->play();

        (*media)->pause();

        (*media)->stop();
    }


    // Delete dynamically allocated objects
    for (media = mediaList.begin();
         media != mediaList.end();
         ++media) {

        delete *media;
    }


    return 0;
}
