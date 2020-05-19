#include <iostream>

using std::cout;
using std::cin;
using std::endl;
void one();
void twoBtwo();
void block();
void blockBtwo();
void blockBtwoBtwo();
void blockBlock();

int main(){

    system( "clear" );
    int choice {0};
//    int theMultiDArray[2][2][2][2][2][2]

    bool menuFlag = true;
    while( menuFlag ){
        cout << "\tPlease choose array:" << endl;
        cout << "\t1. 1x1" << endl;
        cout << "\t2. 2x2" << endl;
        cout << "\t3. 2x2x2" << endl;
        cout << "\t4. 2x2x2 x2" << endl;
        cout << "\t5. 2x2x2 x2x2" << endl;
        cout << "\t6. 2x2x2 x2x2x2" << endl;
        cout << "\t> "; 
        cin >> choice;
        switch( choice ){
            case 1:
                system( "clear" );
                one();
                break;
            case 2:
                system( "clear" );
                twoBtwo();
                break;
            case 3:
                system( "clear" );
                block();
                break;
            case 4:
                system( "clear" );
                blockBtwo();
                break;
            case 5:
                system( "clear" );
                blockBtwoBtwo();
                break;
            case 6:
                system( "clear" );
                blockBlock();
                break;
            default:
                cout << "Bad choice. Quitting." << endl;
                menuFlag = false;
                break;
        }
    }

    cin.get();
}

void one(){
    cout << "     +--------+   " << endl;
    cout << "    /        /|   " << endl;
    cout << "   /        / |   " << endl;
    cout << "  +--------+  |   " << endl;
    cout << "  |        |  |   " << endl;    
    cout << "  |        |  +   " << endl;
    cout << "  |        | /    " << endl;
    cout << "  |        |/     " << endl;
    cout << "  +--------+      " << endl;
}

void twoBtwo(){
    cout << "     +--------+--------+     " << endl;
    cout << "    /        /        /|     " << endl;
    cout << "   /        /        / |     " << endl;
    cout << "  +--------+--------+  |     " << endl;
    cout << "  |        |        |  |     " << endl;
    cout << "  |        |        |  +     " << endl;
    cout << "  |        |        | /|     " << endl;
    cout << "  |        |        |/ |     " << endl;
    cout << "  +--------+--------+  |     " << endl;
    cout << "  |        |        |  |     " << endl;
    cout << "  |        |        |  +     " << endl;
    cout << "  |        |        | /      " << endl;
    cout << "  |        |        |/       " << endl;
    cout << "  +--------+--------+        " << endl;
}

void block(){
    cout << "        +--------+--------+     " << endl;
    cout << "       /        /        /|     " << endl;
    cout << "      /        /        / |     " << endl;
    cout << "     +--------+--------+  |     " << endl;
    cout << "    /        /        /|  |     " << endl;
    cout << "   /        /        / |  +     " << endl;
    cout << "  +--------+--------+  | /|     " << endl;
    cout << "  |        |        |  |/ |     " << endl;
    cout << "  |        |        |  +  |     " << endl;
    cout << "  |        |        | /|  |     " << endl;
    cout << "  |        |        |/ |  +     " << endl;
    cout << "  +--------+--------+  | /      " << endl;
    cout << "  |        |        |  |/       " << endl;
    cout << "  |        |        |  +        " << endl;
    cout << "  |        |        | /         " << endl;
    cout << "  |        |        |/          " << endl;
    cout << "  +--------+--------+           " << endl;
}

void blockBtwo(){
    cout << "        +--------+--------+          +--------+--------+     " << endl;
    cout << "       /        /        /|         /        /        /|     " << endl;
    cout << "      /        /        / |        /        /        / |     " << endl;
    cout << "     +--------+--------+  |       +--------+--------+  |     " << endl;
    cout << "    /        /        /|  |      /        /        /|  |     " << endl;
    cout << "   /        /        / |  +     /        /        / |  +     " << endl;
    cout << "  +--------+--------+  | /|    +--------+--------+  | /|     " << endl;
    cout << "  |        |        |  |/ |    |        |        |  |/ |     " << endl;
    cout << "  |        |        |  +  |    |        |        |  +  |     " << endl;
    cout << "  |        |        | /|  |    |        |        | /|  |     " << endl;
    cout << "  |        |        |/ |  +    |        |        |/ |  +     " << endl;
    cout << "  +--------+--------+  | /     +--------+--------+  | /      " << endl;
    cout << "  |        |        |  |/      |        |        |  |/       " << endl;
    cout << "  |        |        |  +       |        |        |  +        " << endl;
    cout << "  |        |        | /        |        |        | /         " << endl;
    cout << "  |        |        |/         |        |        |/          " << endl;
    cout << "  +--------+--------+          +--------+--------+           " << endl;
}

void blockBtwoBtwo(){
    cout << "        +--------+--------+          +--------+--------+     " << endl;
    cout << "       /        /        /|         /        /        /|     " << endl;
    cout << "      /        /        / |        /        /        / |     " << endl;
    cout << "     +--------+--------+  |       +--------+--------+  |     " << endl;
    cout << "    /        /        /|  |      /        /        /|  |     " << endl;
    cout << "   /        /        / |  +     /        /        / |  +     " << endl;
    cout << "  +--------+--------+  | /|    +--------+--------+  | /|     " << endl;
    cout << "  |        |        |  |/ |    |        |        |  |/ |     " << endl;
    cout << "  |        |        |  +  |    |        |        |  +  |     " << endl;
    cout << "  |        |        | /|  |    |        |        | /|  |     " << endl;
    cout << "  |        |        |/ |  +    |        |        |/ |  +     " << endl;
    cout << "  +--------+--------+  | /+    +--------+--------+  | /+     " << endl;
    cout << "  |        |        |  |//|    |        |        |  |//|     " << endl;
    cout << "  |        |        |  +/ |    |        |        |  +/ |     " << endl;
    cout << "  |        |        | /+  |    |        |        | /+  |     " << endl;
    cout << "  |        |        |//|  |    |        |        |//|  |     " << endl;
    cout << "  +--------+--------+/ |  +    +--------+--------+/ |  +     " << endl;
    cout << "  +--------+--------+  | /|    +--------+--------+  | /|     " << endl;
    cout << "  |        |        |  |/ |    |        |        |  |/ |     " << endl;
    cout << "  |        |        |  +  |    |        |        |  +  |     " << endl;
    cout << "  |        |        | /|  |    |        |        | /|  |     " << endl;
    cout << "  |        |        |/ |  +    |        |        |/ |  +     " << endl;
    cout << "  +--------+--------+  | /     +--------+--------+  | /      " << endl;
    cout << "  |        |        |  |/      |        |        |  |/       " << endl;
    cout << "  |        |        |  +       |        |        |  +        " << endl;
    cout << "  |        |        | /        |        |        | /         " << endl;
    cout << "  |        |        |/         |        |        |/          " << endl;
    cout << "  +--------+--------+          +--------+--------+           " << endl;
}

void blockBlock(){

    cout << "               +--------+--------++--------+--------+   " << endl;
    cout << "              /        /        //        /        /|   " << endl;
    cout << "             /        /        //        /        / |   " << endl;
    cout << "            +--------+--------++--------+--------+  |   " << endl;
    cout << "           /        /        //        /        /|  |   " << endl;
    cout << "          /        /        //        /        / |  +   " << endl;
    cout << "         +--------+--------++--------+--------+  | /|   " << endl;
    cout << "        +--------+--------++--------+--------+|  |/ |   " << endl;
    cout << "       /        /        //        /        /||  +  |   " << endl;
    cout << "      /        /        //        /        / || /|  |   " << endl;
    cout << "     +--------+--------++--------+--------+  ||/ |  +   " << endl;
    cout << "    /        /        //        /        /|  |+  | /+   " << endl;
    cout << "   /        /        //        /        / |  +|  |//|   " << endl;
    cout << "  +--------+--------++--------+--------+  | /||  +/ |   " << endl;
    cout << "  |        |        ||        |        |  |/ || /+  |   " << endl;
    cout << "  |        |        ||        |        |  +  ||//|  |   " << endl;
    cout << "  |        |        ||        |        | /|  |+/ |  +   " << endl;
    cout << "  |        |        ||        |        |/ |  ++  | /|   " << endl;
    cout << "  +--------+--------++--------+--------+  | /+|  |/ |   " << endl;
    cout << "  |        |        ||        |        |  |//||  +  |   " << endl;
    cout << "  |        |        ||        |        |  +/ || /|  |   " << endl;
    cout << "  |        |        ||        |        | /+  ||/ |  +   " << endl;
    cout << "  |        |        ||        |        |//|  |+  | /    " << endl;
    cout << "  +--------+--------++--------+--------+/ |  +|  |/     " << endl;
    cout << "  +--------+--------++--------+--------+  | /||  +      " << endl;
    cout << "  |        |        ||        |        |  |/ || /       " << endl;
    cout << "  |        |        ||        |        |  +  ||/        " << endl;
    cout << "  |        |        ||        |        | /|  |+         " << endl;
    cout << "  |        |        ||        |        |/ |  +          " << endl;
    cout << "  +--------+--------++--------+--------+  | /           " << endl;
    cout << "  |        |        ||        |        |  |/            " << endl;
    cout << "  |        |        ||        |        |  +             " << endl;
    cout << "  |        |        ||        |        | /              " << endl;
    cout << "  |        |        ||        |        |/               " << endl;
    cout << "  +--------+--------++--------+--------+                " << endl;
}

