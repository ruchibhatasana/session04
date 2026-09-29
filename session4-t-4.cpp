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
        cout << "Video " << title
             << " uploaded to " << channelName;
    }
};

class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName;
    }
};

int main()
{
    GamingYouTuber g;

    cout << "Enter username: ";
    cin >> g.username;

    cout << "Enter followers: ";
    cin >> g.followers;

    cout << "Enter channel name: ";
    cin >> g.channelName;

    cout << endl;

    g.displayProfile();
    g.uploadVideo("Gaming Video");
    g.streamGame("Minecraft");
}

