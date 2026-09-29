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
};

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "<< storyTitle;
    }
};

int main()
{
    InstagramInfluencer i;

    cout << "Enter username: ";
    cin >> i.username;

    cout << "Enter followers: ";
    cin >> i.followers;

    i.displayProfile();

    i.postStory("My New Day");
}