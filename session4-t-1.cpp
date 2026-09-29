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

int main()
{
    SocialMediaUser user;

    cout << "Enter username: ";
    cin >> user.username;

    cout << "Enter followers: ";
    cin >> user.followers;

    user.displayProfile();

}
