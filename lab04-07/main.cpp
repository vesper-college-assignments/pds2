#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	long long int a, d;
	
	while(cin >> a >> d && a != 0 && d != 0) {

        vector<long long int> defensores;
        vector<long long int> atacantes;

        long long int aux;
        for (int i = 0; i < a; i++) {
            cin >> aux;
            atacantes.push_back(aux);
        }
        for (int i = 0; i < d; i++) {
            cin >> aux;
            defensores.push_back(aux);
        }

        sort(defensores.begin(), defensores.end());

        bool impedido = false;
        for (int i = 0; i < a; i++) {
            if (atacantes[i] < defensores[1])
                impedido = true;
        }

        if (impedido) {
            cout << 'S' << endl;
        } else
            cout << 'N' << endl;
    }
    return 0;
}