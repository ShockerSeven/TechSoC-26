#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;
int win;
int no1, no2;
int neo1, neo2;
void update(int no1, int no2);
void damage(int no1,int no2);
class bender
{
public:
    int move, damage;
    string name;
    string type;
    int speed, health, defense, attack;
    int a = 0, b = 0, c = 0, d = 0;

    void status(string ability);
    void basestat(void);
    void water(void);
    void fire(void);
    void air(void);
    void earth(void);

    void moves(void);
};

void bender::status(string ability)
{
    cout << " HEALTH : " << health << endl;
    cout << " DEFENSE : " << defense << endl;
    cout << " ATTACk : " << attack << endl;
    cout << " SPEED : " << speed << endl;
    cout << " TYPE : " << type << endl;

    cout << " AVAILABLE MOVES : " << endl;
    if (ability == "water")
    {
        water();
    }
    else if (ability == "fire")
    {
        fire();
    }
    else if (ability == "earth")
    {
        earth();
    }
    else if (ability == "air")
    {
        air();
    }
}

void bender::basestat(void)
{
    cout << "TOTAL STATS NEED TO ADD UP TO 500\n"
         << endl;
    do
    {
        cout << "ENTER YOUR HEALTH STAT : " << endl;
        cin >> health;
    } while (health <= 0 || health >= 500);
    do
    {
        cout << "LEFT POINTS  : " << 500 - health << endl;
        cout << "ENTER YOUR DEFENSE STAT : " << endl;
        cin >> defense;
    } while (defense <= 0 || defense >= 500 - health);
    do
    {
        cout << "LEFT POINTS  : " << 500 - health - defense << endl;
        cout << "ENTER YOUR ATTACK STAT : " << endl;
        cin >> attack;
    } while (attack <= 0 || attack >= 500 - health - defense);
    do
    {
        cout << "LEFT POINTS  : " << 500 - health - defense - attack << endl;
        cout << "ENTER YOUR SPEED STAT : " << endl;
        cout << " PRO TIP = INVEST ALL " << endl;
        cin >> speed;
    } while (speed <= 0 || speed > 500 - health - defense - attack);

    cout << "\n\n"
         << endl;
    cout << "CHOOSE YOUR TYPE : water,earth,fire,air" << endl;
    cin >> type;
}

void bender::water(void)
{
    cout << "\n\nYOUR MOVES :" << endl;
    cout << "1:WATER BUBBLE = 50    ";
    if (a == 0 || (a + b + c + d) % 2 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 2 - ((a + b + c + d) % 2) << " MOVES COOLDOWN" << endl;
    }
    cout << "2.SHELL = 0 || +60     ";
    if (b == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "3.WATER RINGS = 40     ";
    if (c == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "4,WATER BLAST = 80     ";
    if (d == 0 || (a + b + c + d) % 1 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
}

void bender::fire(void)
{
    cout << "YOUR MOVES : " << endl;
    cout << "1.FIRE BURST = 45      ";
    if (a == 0 || (a + b + c + d) % 2 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 2 - ((a + b + c + d) % 2) << " MOVES COOLDOWN" << endl;
    }
    cout << "2.FIRE MORPH = +80     ";
    if (b == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "3.FIRE CYCLONE = 90        ";
    if (c == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "4.FIRE BALL = 30       ";
    if (d == 0 || (a + b + c + d) % 1 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
}

void bender::earth(void)
{
    cout << "YOUR MOVES : " << endl;
    cout << "1.EARTH WAUKE = 50     ";
    if (a == 0 || (a + b + c + d) % 2 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 2 - ((a + b + c + d) % 2) << " MOVES COOLDOWN" << endl;
    }
    cout << "2.EARTH HARI ALI = +100        ";
    if (b == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "3.EARTH BUGS = 85       ";
    if (c == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "4.EARTH SUN = 35       ";
    if (d == 0 || (a + b + c + d) % 1 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
}

void bender::air(void)
{
    cout << "YOUR MOVES : " << endl;
    cout << "1.AIR SPIKES = 55      ";
    if (a == 0 || (a + b + c + d) % 2 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 2 - ((a + b + c + d) % 2) << " MOVES COOLDOWN" << endl;
    }
    cout << "2.AIR FLOW = +80       ";
    if (b == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "3.AIR CYCLONE = 80     ";
    if (c == 0 || (a + b + c + d) % 4 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
    cout << "AIR WHOOO = 40     ";
    if (d == 0 || (a + b + c + d) % 1 == 0)
    {
        cout << "READY" << endl;
    }
    else
    {
        cout << 4 - ((a + b + c + d) % 4) << " MOVES COOLDOWN" << endl;
    }
}

vector<bender> player;
void bender::moves(void)
{
restart:
    cout << "\n\nENTER INDEX NUMBER FOR YOUR MOVE";
    cin >> move;

    if (type == "water")
    {
        switch (move)
        {
        case 1:
            if (a == 0 || (a + b + c + d) % 2 == 0)
            {
                damage = 50;
                a++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 2:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = -60;
                b++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 3:
            if (b == 0 || (a + b + c + d) % 1 == 0)
            {
                damage = 40;
                c++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 4:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = 80;
                d++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }
        }
    }

    else if (type == "fire")
    {
        switch (move)
        {
        case 1:
            if (a == 0 || (a + b + c + d) % 2 == 0)
            {
                damage = 45;
                a++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 2:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = -80;
                b++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 3:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = 90;
                c++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 4:
            if (b == 0 || (a + b + c + d) % 1 == 0)
            {
                damage = 30;
                d++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }
        }
    }

    else if (type == "earth")
    {
        switch (move)
        {
        case 1:
            if (a == 0 || (a + b + c + d) % 2 == 0)
            {
                damage = 50;
                a++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 2:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = -100;
                b++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 3:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = 85;
                c++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 4:
            if (b == 0 || (a + b + c + d) % 1 == 0)
            {
                damage = 35;
                d++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }
        }
    }

    if (type == "air")
    {
        switch (move)
        {
        case 1:
            if (a == 0 || (a + b + c + d) % 2 == 0)
            {
                damage = 55;
                a++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 2:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = -80;
                b++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 3:
            if (b == 0 || (a + b + c + d) % 4 == 0)
            {
                damage = 80;
                c++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }

        case 4:
            if (b == 0 || (a + b + c + d) % 1 == 0)
            {
                damage = 40;
                d++;
                break;
            }
            else
            {
                cout << "COOLDOWN" << endl;
                goto restart;
            }
        }
    }
}

void update(int no1, int no2)
{

    while (player[no1 - 1].health > 0 && player[no2 - 1].health > 0)
    {
        if (player[no1 - 1].speed >= player[no2 - 1].speed)
        {
            player[no1 - 1].status(player[no1 - 1].type);
            player[no2 - 1].status(player[no2 - 1].type);
            player[no1 - 1].moves();
            player[no2 - 1].moves();

            if (player[no1 - 1].damage < 0)
            {
                player[no1 - 1].health += (-player[no1 - 1].damage);
            }
            else
            {
                neo1 = -player[no1 - 1].damage + (-player[no1 - 1].attack + player[no2 - 1].defense);

                if (neo1 <= 0)
                {
                    damage(no1, no2);
                    player[no2 - 1].health += neo1;
                    cout << "DAMAGE INFLICTED = " << neo1 << endl;
                }
                if (player[no2 - 1].health <= 0)
                {
                    cout << "\n\n\nFAINTED";
                    cout << "PLAYER " << no1 << " WINS ";
                    win = no1;
                }
            }

            if (player[no2 - 1].damage < 0)
            {
                player[no2 - 1].health += (-player[no2 - 1].damage);
            }
            else
            {
                neo2 = -player[no2 - 1].damage + (-player[no2 - 1].attack + player[no1 - 1].defense);
                if (neo2 <= 0)
                {
                    damage(no1, no2);
                    player[no1 - 1].health += neo2;
                    cout << "DAMAGE INFLICTED = " << neo2 << endl;
                }
                if (player[no1 - 1].health <= 0)
                {
                    cout << "\n\n\nFAINTED";
                    cout << "\n PLAYER " << no2 << " WINS ";
                    win = no2;
                }
            }
        }

        if (player[no2 - 1].speed > player[no1 - 1].speed)
        {
            player[no2 - 1].status(player[no2 - 1].type);
            player[no1 - 1].status(player[no1 - 1].type);
            player[no2 - 1].moves();
            player[no1 - 1].moves();
            if (player[no2 - 1].damage < 0)
            {
                player[no2 - 1].health += (-player[no2 - 1].damage);
            }
            else
            {
                neo2 = -player[no2 - 1].damage + (-player[no2 - 1].attack + player[no1 - 1].defense);
                if (neo2 <= 0)
                {
                    damage(no1, no2);
                    player[no1 - 1].health += neo2;
                    cout << "DAMAGE INFLICTED = " << neo2 << endl;
                }
                if (player[no1 - 1].health <= 0)
                {
                    cout << "\n\n\nFAINTED";
                    cout << "PLAYER " << no2 << " WINS ";
                    win = no2;
                }
            }

            if (player[no1 - 1].damage < 0)
            {
                player[no1 - 1].health += (-player[no1 - 1].damage);
            }
            else
            {
                neo1 = -player[no1 - 1].damage + (-player[no1 - 1].attack + player[no2 - 1].defense);
                if (neo1 <= 0)
                {
                    damage(no1, no2);
                    player[no2 - 1].health += neo1;
                    cout << "DAMAGE INFLICTED = " << neo1 << endl;
                }
                if (player[no2 - 1].health <= 0)
                {
                    cout << "\n\n\nFAINTED  ";
                    cout << "\n PLAYER " << no1 << " WINS ";
                    win = no1;
                }
            }
        }
    }
}

void damage(int no1, int no2)
{
    int i;
    int num = 1 + (rand() % 100);
    if (num <= 10)
    {
        i = 1.5;
    }
    else
    {
        i = 1;
    }

    if ((player[no1 - 1].type == "fire" && player[no2 - 1].type == "water") || (player[no1 - 1].type == "air" && player[no2 - 1].type == "fire") || (player[no1 - 1].type == "water" && player[no2 - 1].type == "earth") || (player[no1 - 1].type == "earth" && player[no2 - 1].type == "air"))
    {

        neo1 *= 0.5 * i;
        neo2 *= 2 * i;
        cout << "\nDAMAGE MODIFIED" << endl;
    }
    else if ((player[no2 - 1].type == "fire" && player[no1 - 1].type == "water") || (player[no2 - 1].type == "air" && player[no1 - 1].type == "fire") || (player[no2 - 1].type == "water" && player[no1 - 1].type == "earth") || (player[no2 - 1].type == "earth" && player[no1 - 1].type == "air"))
    {
        neo1 *= 2 * i;
        neo2 *= 0.5 * i;
        cout << "\nDAMAGE MODIFIED" << endl;
    }
}

void tournament(void)
{
    int no;
    vector<int> remain;
    cout << "ENTER NUMBER OF PLAYERS TO PLAY IN THE TOURNAMENT  : ";
    cin >> no;
    if (no % 2 != 0 && no > player.size())
    {
        cout << "INVALID";
        exit(1);
    }
    cout << "\n BY DEFAULT THE BRACETS WILL BE MADE ORDER WISE " << endl;
    for (int i = 0; i < no; ++i)
    {
        remain.push_back(i);
    }
    while (remain.size() > 1)
    {
        no = remain.size();
        vector<int> next_round;
        for (int k = no; k > 0; k = k - 2)
        {
            cout << "MATCH START BETWEEN PLAYERS : " << k + 1 << k + 2 << endl;
            player[k - 1].status(player[k - 1].type);
            cout << "\n\n";
            player[k - 2].status(player[k - 2].type);

            cout << "\n\n";
            update(k, k - 1);
            next_round.push_back(win - 1);
        }
        remain = next_round;
    }
    cout << "WINNER IS " << remain[0];
}

int main()
{
    char ask;

    do
    {
        string name;
        cout << "ENTER YOUR NAME : ";
        cin >> name;
        cout << "\n DO YOU WISH TO CONTINUE TYPE n || N  tO END ";
        cin >> ask;

        player.push_back(bender());
        player.back().name = name;
    } while (ask != 'n' && ask != 'N');

    for (int i = 0; i < player.size(); i++)
    {
        cout << "ENTER DETAILS FOR : " << i + 1 << " PLAYER " << endl;
        player[i].basestat();
        cout << "\n\n";
    }
    do
    {
        cout << "\nSELECT TWO PLAYERS TO PLAY WITH : (ENTER THEIR INDEX NUMBERS) : " << endl;
        cin >> no1 >> no2;
    } while (no1 == no2 || no1 > player.size() || no2 > player.size() || no1 < 1 || no2 < 1);

    player[no1 - 1].status(player[no1 - 1].type);
    cout << "\n\n";
    player[no2 - 1].status(player[no2 - 1].type);

    cout << "\n\n";
    update(no1, no2);
    return 0;
}