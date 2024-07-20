/*************************************************
* ADS Praktikum 3
* main.cpp
*
*************************************************/
#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "Tree.h"
#include "catch.h"
#include "TreeNode.h"
using namespace std;

// Hilfsmethoden fÃ¼rs MenÃ¼ hier:
void print_menu()
{
    
    cout << "====================================" << endl
        << " ADS-Rot-Schwarz-Baum Praktikum" << endl
        << "====================================" << endl
        << "1) Datensatz einfuegen, manuell" << endl
        << "2) Datensatz einfuegen, CSV Datei" << endl
        << "3) Suchen" << endl
        << "4) Ausgabe in Preorder" << endl
        << "5) Ausgabe in Levelorder" << endl
        << "6) Ausgabe in Levelorder (mit Niveauauswahl)" << endl
        << "7) Beenden" << endl;
        //<< "?> ";
}



/***************************
 ** Vorgegebene  Funktion **
 ***************************
   "mainscreen_addTreeCSV" 
 
Importiert CSV Datei in bestehenden Baum.
Bei Aufruf in der main() Methode, muss der Pointer auf den Anker des Baums, als Parameter Ã¼bergeben werden.
Es wird die im gleichen Verzeichnis liegende Datei "ExportZielanalyse.csv" geladen.
****************************/
void mainscreen_addTreeCSV(Tree*& ref) {
    char j;
    cout << "+ Moechten Sie die Daten aus der Datei ExportZielanalyse.csv "
            "importieren(j / n) ? >";
    cin >> j;
    if (j == 'j')
    {
        ifstream csvread;
        csvread.open("ExportZielanalyse.csv", ios::in);
        if (!csvread.is_open())
            cout << "Fehler beim Lesen!" << endl;
        else
        {
            string name, age, postcode, income;

            while (!csvread.eof())
            {
                getline(csvread, name, ';');
                getline(csvread, age, ';');
                getline(csvread, income, ';');
                getline(csvread, postcode, '\n');
                ref->addNode(name, stoi(age), stod(income), stoi(postcode));
            }
            csvread.close();
        }
        cout << "+ Daten wurden dem Baum hinzugefuegt." << endl;
    }
}
//
///////////////////////////////////////

int main() {

	int result = Catch::Session().run();

	///////////////////////////////////////
	// Ihr Code hier:
	int auswahl=0, alter=0,plz=0;
    string name="";
    double einkommen = 0.0;
    int niveau=0;

    Tree* baum= new Tree;
    

    print_menu();
    do
    {
        //print_menu();
        cout<< "Auswahl ?> ";
        cin>>auswahl;

    if (auswahl==1)
    {
        cout<<"+ Bitte geben Sie die den Datensatz ein:\n ";
        cout<<"Name ?>"; cin>>name;
        cout<<"Alter ?>"; cin>>alter;
        cout<<"Einkommen ?>"; cin>>einkommen;
        cout<<"PLZ ?>"; cin>>plz;
        baum->addNode(name,alter, einkommen,plz);
    }
    else if (auswahl==2)
    {
        mainscreen_addTreeCSV(baum);
    }
    else if (auswahl==3)
    {
        
        cout<<"+ Bitte geben Sie den zu suchenden Datensatz an\n ";
        cout<<"Name ?>"; cin>>name;
        baum->searchNode(name);
    }

    else if (auswahl==4)
    {
        cout << "Ausgabe in Preorder als binaerer Suchbaum: " << endl;
        cout << "ID  | Name               | Alter    | Einkommen | Pos | Red  " << endl;
        cout << "----+--------------------+----------+-----------+-----+------" << endl;
        baum->printAll_preOrder();
    }    
    else if (auswahl==5)
    {
        cout << "Ausgabe in Levelorder als binaerer Suchbaum: " << endl << endl;
			//cout << "LevelOrder Traversieren:" << endl;
        cout << "ID  | Name               | Alter    | Einkommen | Pos | Red  " << endl;
        cout << "----+--------------------+----------+-----------+-----+------" << endl;
        baum->printAll();
		cout << endl;
		cout << "Ausgabe in Levelorder als 234-Baum: " << endl;
		baum->printLevelOrder();

    }
    else if (auswahl==6)
    {   
        cout << "Bitte geben Sie das Niveau ein" << endl << "?> ";
		cin >> niveau;
		cout << endl;
		baum->printLevelOrder(niveau);
            
    }
    else if (auswahl==7)
    {
        return 0;
    }

} while (true);

	///////////////////////////////////////
	system("PAUSE");

	return result;
}
