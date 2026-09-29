#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username: " << username;
        cout << "Followers: " << followers;
    }
};

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title << " uploaded to " << channelName;
    }
};

int main()
{
    YouTuber y;

    cout << "Enter username: ";
    cin >> y.username;

    cout << "Enter followers: ";
    cin >> y.followers;

    cout << "Enter channel name: ";
    cin >> y.channelName;

    y.displayProfile();

    y.uploadVideo("My First Video");

}

