#include <iostream>
#include <string>

using namespace std;

void gameOver(const string& reden) {
    cout << "\n" << reden << endl;
    cout << "Game over... Je redt het niet 😢" << endl;
}

void youWin() {
    cout << "\nBOEM! Je schiet net op tijd weg in de capsule terwijl het station achter je explodeert!" << endl;
    cout << "Je leeft nog! Nice! 😎" << endl;
    cout << "Je hebt gewonnen!" << endl;
}

int main() {
    int keuze1, keuze2, keuze3;

    cout << "=== 🚀 Ontsnap uit het Ruimtestation ===\n\n";
    cout << "Je bent een techneut op een ruimtestation ergens bij Saturnus.\n";
    cout << "Opeens... een enorme knal! Alles trilt, lampen knipperen, en alarmen loeien.\n";
    cout << "Wat doe je?\n";
    cout << "1. Snel naar de controlekamer kijken wat er aan de hand is.\n";
    cout << "2. Rennen als een gek naar de ontsnappingscapsules.\n";
    cout << "Jouw keuze (1 of 2): ";
    cin >> keuze1;

    if (keuze1 == 1) {
        cout << "\nJe komt hijgend aan in de controlekamer. Alles is chaos.\n";
        cout << "De kern staat op instorten. Je hebt maar even tijd.\n";
        cout << "1. Proberen die gekke kern te fixen.\n";
        cout << "2. Snel het evacuatiealarm aanzetten!\n";
        cout << "Wat kies je (1 of 2): ";
        cin >> keuze2;

        if (keuze2 == 1) {
            gameOver("Je sleutelt als een gek... maar BOEM. Te laat.");
        }
        else if (keuze2 == 2) {
            cout << "\nJe ramt op de knop! Overal gaan deuren open. Tijd om weg te wezen.\n";
            cout << "Je rent naar de ontsnappingscapsules.\n";
            cout << "1. Gewoon meteen in de eerste capsule springen.\n";
            cout << "2. Even snel zoeken naar een overlevingspakket (je weet maar nooit).\n";
            cout << "Wat doe je? (1 of 2): ";
            cin >> keuze3;

            if (keuze3 == 1) {
                youWin();
            }
            else {
                gameOver("Je vindt niks nuttigs... en het station ontploft. Ai.");
            }
        }

    }
    else if (keuze1 == 2) {
        cout << "\nJe sprint richting de capsules... maar shit! De deur zit op slot!\n";
        cout << "Noodprotocol... tuurlijk.\n";
        cout << "1. Terminal hacken als een pro.\n";
        cout << "2. Toch maar terug naar de controlekamer...\n";
        cout << "Wat kies je (1 of 2): ";
        cin >> keuze2;

        if (keuze2 == 1) {
            gameOver("Je typt en typt... maar nee. Te traag. Alles vliegt de lucht in.");
        }
        else {
            cout << "\nJe bent terug in de controlekamer, vol rook nu. Niet ideaal.\n";
            cout << "1. Snel evacuatieprocedure aanzetten!\n";
            cout << "2. Proberen het vuur uit te krijgen met een brandblusser.\n";
            cout << "Jouw keuze? (1 of 2): ";
            cin >> keuze3;

            if (keuze3 == 1) {
                cout << "\nYES! Alles opent en je sprint naar de capsule.\n";
                youWin();
            }
            else {
                gameOver("Je probeert het vuur te blussen... maar je wordt overmand door de rook.");
            }
        }
    }

    return 0;
}
