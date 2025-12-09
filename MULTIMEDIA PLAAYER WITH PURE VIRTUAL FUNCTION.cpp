//MULTIMEDIA PLAAYER WITH PURE VIRTUAL FUNCTION

#include <iostream>
using namespace std;

class MediaFile {
public:
    virtual void play() = 0;  
    virtual ~MediaFile() {}    
};

class Audio : public MediaFile {
public:
    void play() {
        cout << "Playing audio file..." << endl;
    }
};

class Video : public MediaFile {
public:
    void play() {
        cout << "Playing video file..." << endl;
    }
};

class Image : public MediaFile {
public:
    void play() {
        cout << "Displaying image file..." << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of media files: ";
    cin >> n;

    MediaFile* files[50];   

    for (int i = 0; i < n; i++) {
        int choice;
        cout << "\nSelect media type for file " << (i + 1) << ":\n";
        cout << "1. Audio\n2. Video\n3. Image\n";
        cin >> choice;

        switch (choice) {
            case 1:
                files[i] = new Audio();
                break;

            case 2:
                files[i] = new Video();
                break;

            case 3:
                files[i] = new Image();
                break;

            default:
                cout << "Invalid choice, try again!\n";
                i--;        
        }
    }

    cout << "\n----- Playing All Media Files -----\n";
    for (int i = 0; i < n; i++) {
        files[i]->play();   
        delete files[i];    
    }

    return 0;
}

