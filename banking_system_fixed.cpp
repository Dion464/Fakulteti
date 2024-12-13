#include <iostream>
#include <fstream> // libraria 
using namespace std;

int main() {
    double bilanci = 0.0;  // Variabla bilancit 
    int opsion;             // Opcione qe useri zgjedh 

    // libraria per me lexu bilancin 
    ifstream inputFile("balance.txt");
    if (inputFile.is_open()) {
        // Nëse skedari ekziston, e lexojmë bilancin nga ai
        inputFile >> bilanci;
        inputFile.close();
    }

    // e fusim ne loop qe te mos perfundoj deria useri zgjedh dalje vet 
    while (true) {
        // Shfaqja e menusë
        cout << "-- Menyja e Llogarise Bankare --" << endl;
        cout << "1. Depozitoni para" << endl;
        cout << "2. Tërhiqni para" << endl;
        cout << "3. Shihni bilancin" << endl;
        cout << "4. Dalje" << endl;
        cout << "Zgjidhni nje opsion (1-4): ";
        cin >> opsion;

        // kushti se cilin useri ka zgjedhur 
        if (opsion == 1) {
            // depoziata 
            double shuma;
            cout << "Shkruani shumën që dëshironi të depozitoni (Limiti i depozitës është 2000 euro): ";
            cin >> shuma;

            if (shuma < 0) {
                cout << "Gabim: Shuma nuk mund të jetë negative!" << endl;
            } else if (shuma > 2000) {
                cout << "Gabim: Limiti i depozitës është 2000 euro!" << endl;
            } else {
                // e bojm update bilancin 
                bilanci += shuma;
                cout << "Depozita u krye me sukses. Bilanci i ri është: " << bilanci << endl;
            }
        } else if (opsion == 2) {
            // terhekja e oparave 
            double shuma;
            cout << "Shkruani shumën që dëshironi të tërhiqni (Limiti i tërheqjes është 1000 euro): ";
            cin >> shuma;

            if (shuma < 0) {
                cout << "Gabim: Shuma nuk mund të jetë negative!" << endl;
            } else if (shuma > 1000) {
                cout << "Gabim: Limiti i tërheqjes është 1000 euro!" << endl;
            } else if (shuma > bilanci) {
                cout << "Nuk keni mjaftueshëm fonde për këtë tërheqje. Bilanci juaj është: " << bilanci << endl;
            } else {
                // update bilancin -
                bilanci -= shuma;
                cout << "Tërheqja u krye me sukses. Bilanci i ri është: " << bilanci << endl;
            }
        } else if (opsion == 3) {
            // bilanci 
            cout << "Bilanci aktual i llogarisë është: " << bilanci << endl;
        } else if (opsion == 4) {
            //dalja nga programi 
            cout << "Faleminderit që përdorët sistemin bankar!" << endl;
            break; // perfundimi i programit 
        } else {
            // nese zgjedh nje opsion qe nuk osht ne programin tone 
            cout << "Opsion i pavlefshëm. Ju lutemi, zgjidhni një opsion nga 1 deri në 4!" << endl;
        }

        // e rruajm bilancin ne librari 
        ofstream outputFile("balance.txt");
        if (outputFile.is_open()) {
            outputFile << bilanci;  
            outputFile.close();
        } else {
            cout << "Gabim: Nuk mund të hapet skedari për të ruajtur bilancin!" << endl;
        }
    }

    return 0; // Përfundimi i programit
}
