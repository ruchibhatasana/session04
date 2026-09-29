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

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName;
    }
};

int main()
{
    Podcaster p;

    cout << "Enter username: ";
    cin >> p.username;

    cout << "Enter followers: ";
    cin >> p.followers;

    cout << "Enter podcast name: ";
    cin >> p.podcastName;

    p.displayProfile();

    p.publishEpisode("Episode1");

}

