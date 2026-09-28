#include <iostream>
#include <string>
using namespace std;

void showLine(const string &text) {
    cout << text << endl;
    cin.get();
}

int main() {
    string email, password, username = "Kirby";

    cout << "===============================================" << endl;
    cout << "\t MC ( JF Fruits Disciple)" << endl;
    cout << "===============================================" << endl;
    cout << "Version# 1" << endl;
    cout << "Email Add: ";
    getline(cin, email);
    cout << "Password: ";
    getline(cin, password);

    cout << "\tLoading............." << endl;

    cout << "================================" << endl;
    cout << "\tWelcome " << username << endl;
    cout << "================================" << endl;
    cout << "\tUsers Online: " << endl;
    cout << "A.) Sayno" << endl;
    cout << "B.) Sarah" << endl;

    cout << "================================" << endl;
    cout << "\tUsers Offline " << endl;
    cout << "================================" << endl;
    cout << "1. Richann" << endl;
    cout << "2. Jannuel" << endl;


    string choice;
    bool chatting = false;

    while (!chatting) {
        cout << "Please Select your Chatmate: ";
        getline(cin, choice);
        cout << "\n";
        cout << "================================" << endl;

        if (choice == "1" || choice == "2") {
            string offlineName = (choice == "1") ? "Richann" : "Jannuel";
            cout << "Sorry " << offlineName << " is not online as of the moment..." << endl;

            string again;
            cout << "Do you want to chat someone else??: ";
            getline(cin, again);
            cout << "\n";

            if (!(again == "Yes" || again == "yes" || again == "Y" || again == "y")) {
                cout << "Goodbye!" << endl;
                return 0;
            }

        }
        else if (choice == "a" || choice == "A" || choice == "b" || choice == "B") {
            chatting = true;
            string chatmate = (choice == "a" || choice == "A") ? "Sayno" : "Sarah";

            cout << "(Press Enter after each line to continue the chat)\n" << endl;

            showLine(username + ": Hi guys, i was thinking that we should buy realms");
            showLine(username + ": kay para biskan ano nlng na oras maka open ta sa world ni Sayno");

            if (chatmate == "Sayno")
                showLine(chatmate + ": Gane noh sige2, ako ma collect ka cash ta");
            else
                showLine(chatmate + ": chakto kada kerb");

            showLine(username + ": nc wan send lng gcash no. mo para ma tunga2 tadi nga apat");
            showLine(username + ": mag online sila ni richann kag jannuel makita ni nila");
            showLine(chatmate + ": cgecge ari no. ko 0927-236-7700");

            cout << "================================" << endl;
            cout << "\tTapik Tapik sos ah" << endl;
            cout << "================================" << endl;
            cout << "1.) MC" << endl;
            cout << "2.) hulton mag online ang duwa" << endl;
            cout << "3.) ma hampang liwat asta mag 3am" << endl;

            string topic;
            cout << "Please select " << chatmate << "?: ";
            getline(cin, topic);
            cout << "-------------------------------------" << endl;
            cout << "\n";

            if (topic == "3") {
                showLine(username + ": boi tungod to gapun bala way ko ka sulod sa 7:30am ko nga klase");
                showLine(chatmate + ": HSAHHSHAHSHAHSAHHSHASH balda kada");
                showLine(username + ": pru mayo lang way pa nag sugod ang klase gid ang grades verif lng");
                showLine(username + ": himos ko anay ah, lakat ko ma gym pako karon");
                showLine(chatmate + ": okayy");

            }
            else if (topic == "1") {
                showLine(username + ": mc da inv ");
                showLine(chatmate + ": ara na sulod na");
                showLine(username + ": nc wan mga toi my respawn trap monster na gale maka exp farm na tane");
                showLine(chatmate + ": oo si jannuel na nakakita ka respawn trap");
            }
            else if (topic == "2") {
                showLine(username + ": nc wan online na liwat si richann kag jannuel");
                showLine(chatmate + ": gane ta mga tunga ay na ta sang 389 para sa realms");
                showLine(username + ": gane 389/4 = 96 per person ta");
                showLine(chatmate + ": sakon gcash lng e send kay akon world daan ako ma bayad");
            }
            else {
                cout << "Invalid topic selected." << endl;
                cout << "-------------------------------------" << endl;
            }
        }
        else {
            cout << "Invalid selection. Please try again. " << endl;
        }
    }

    cout << "\n--- End of chat simulation ---\n" << endl;
    cout << "--------------------------------------------------" << endl;
    return 0;
}
