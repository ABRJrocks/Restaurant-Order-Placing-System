#include <iostream>
#include <string>
using namespace std;
int quant, din_size,din_total, bir_total, gst, your_total, total,t1=0,t2=0,t3=0,t4=0,t5=0;
void biryani();
void bill();
int main()
{
    system("CLS");
    string name;
    char choice;
    int cat;
    // breakfast variables
    int brk_cat, brk_total, egg_type, egg_total, para_type, para_total, hp, hal, cha_type, cha_total;
    // Lunch variables
    int luc_cat, luc_total, sand_type, sand_total, sam_type, sam_total, roll_type, roll_total, db_size, db_total, cc_size, cc_total, sal_type, sal_total;
    // dinner variables
    int din_cat;
    // fast food variables
    int fast_cat, pizza_fl, pizza_total, p_size, b_type, bur_total, s_type, sha_total, f_size, fri_total, fast_total;
    // beverges
    int bvg_cat, bvg_total, sft_type, sft_total, htd_type, htd_total, mks_type, mks_total;

    cout << "\t\t\t\t--------||||||||||Welcome To Valorant Resturant||||||||||--------" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t Enter Your Name: ";
    getline(cin, name);
    system("CLS");
    cout << "\t\t\t\t--------||||||||||Welcome To Valorant Resturant||||||||||--------" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t Hi, " << name << endl;
    cout << endl;
    // Catagories
    begining:
    cout << "\t\t\t\t\t------||||||||-----MENU-----||||||||------" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t  1) Breakfast" << endl;
    cout << "\t\t\t\t\t\t  2) Lunch" << endl;
    cout << "\t\t\t\t\t\t  3) Dinner" << endl;
    cout << "\t\t\t\t\t\t  4) Fast Food" << endl;
    cout << "\t\t\t\t\t\t  5) Bevrages" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t  Please Chose your Category: ";
    cin >> cat;
    switch (cat)
    {
        // Breakfast Menu
    case 1:
        system("CLS");
        cout << endl;
        cout << "\t\t\t\t\t------||||||||-----MENU-----||||||||------" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  1) Egg" << endl;
        cout << "\t\t\t\t\t\t  2) Paratha" << endl;
        cout << "\t\t\t\t\t\t  3) Halwa Poori" << endl;
        cout << "\t\t\t\t\t\t  4) halwa" << endl;
        cout << "\t\t\t\t\t\t  5) Channy" << endl;
        cout << "\t\t\t\t\t\t  6) Naan" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  Please Chose your Meal: ";
        cin >> brk_cat;
        switch (brk_cat)
        {
        case 1: // Egg
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Fry Egg\t\t 30 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Omlette\t\t 35 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> egg_type;
            switch (egg_type)
            {
            case 1:
                egg_total = 30;
                break;
            case 2:
                egg_total = 35;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            brk_total = quant * egg_total;
            cout << endl;

            break;

        case 2: // Paratha
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Plain Paratha\t\t 40 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Desi Ghee Paratha\t\t 60 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> para_type;
            switch (para_type)
            {
            case 1:
                para_total = 40;
                break;
            case 2:
                para_total = 60;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            brk_total = quant * para_total;
            cout << endl;

            break;
        case 3: // halwa poori
            cout << endl;
            cout << "\t\t\t\t\t\t  Halwa Poori\t\t 30 Rs" << endl;
            hp = 30;
            cout << "\t\t\t\t\t\t  Please Enter Quantity: ";
            cin >> quant;
            brk_total = quant * hp;
            cout << endl;

            break;

        case 4: // halwa
            cout << endl;
            cout << "\t\t\t\t\t\t  Halwa Per Plate\t\t 40 Rs" << endl;
            hal = 40;
            cout << "\t\t\t\t\t\t  Please Enter Quantity: ";
            cin >> quant;
            brk_total = quant * hal;
            cout << endl;

            break;

        case 5: // Channy
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Anda Channy\t\t 90 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Kofta Channy\t\t 110 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> cha_type;
            switch (cha_type)
            {
            case 1:
                cha_total = 90;
                break;
            case 2:
                cha_total = 110;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            brk_total = quant * cha_total;
            cout << endl;

            break;
        case 6: // Naan
            cout << endl;
            cout << "\t\t\t\t\t\t  Per Naan 12 Rs" << endl;
            din_total = 12;
            cout << "\t\t\t\t\t\t  Please Enter Quantity: ";
            cin >> quant;
            brk_total = quant * din_total;
            cout << endl;
            break;
        default:
            cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
            break;
        
        }
        t1 = brk_total;
        bill();
        cout << "\t\t\t\t\t\t  Would you like to order anything else? Y / N:";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            goto begining;
        }
        break;

        // Lunch Menu
    case 2:
        system("CLS");
        cout << endl;
        cout << "\t\t\t\t\t------||||||||-----MENU-----||||||||------" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  1) Biryani" << endl;
        cout << "\t\t\t\t\t\t  2) Sandwich" << endl;
        cout << "\t\t\t\t\t\t  3) Roll" << endl;
        cout << "\t\t\t\t\t\t  4) Samosa" << endl;
        cout << "\t\t\t\t\t\t  5) Dahi Bhally" << endl;
        cout << "\t\t\t\t\t\t  6) Cream Chaat" << endl;
        cout << "\t\t\t\t\t\t  7) Salad" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  Please Chose your Meal: ";
        cin >> luc_cat;
        switch (luc_cat)
        {
        case 1:
            biryani();
            break;

        case 2: // Sandwich
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Sandwich\t\t 120 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Sandwich with salad\t\t 180 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> sand_type;
            switch (sand_type)
            {
            case 1:
                sand_total = 120;
                break;
            case 2:
                sand_total = 180;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            luc_total = quant * sand_total;
            cout << endl;

            break;

        case 3: // roll
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Chicken Roll\t\t 50 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Vegetable roll\t\t 35 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> roll_type;
            switch (roll_type)
            {
            case 1:
                roll_total = 50;
                break;
            case 2:
                roll_total = 35;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            luc_total = quant * roll_total;
            cout << endl;

            break;

        case 4: // samosa
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Alu Samosa\t\t 30 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Chicken Samosa\t\t 50 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> sam_type;
            switch (sam_type)
            {
            case 1:
                sam_total = 30;
                break;
            case 2:
                sam_total = 50;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            luc_total = quant * sam_total;
            cout << endl;

            break;

        case 5: // Dahi Bhally
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Half Plate\t\t 50 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Full Plate\t\t 80 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> db_size;
            switch (db_size)
            {
            case 1:
                db_total = 50;
                break;
            case 2:
                db_total = 80;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            luc_total = quant * db_total;
            cout << endl;

            break;

        case 6: // Cream Chaat
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Half Plate\t\t 60 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Full Plate\t\t 90 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> cc_size;
            switch (cc_size)
            {
            case 1:
                cc_total = 60;
                break;
            case 2:
                cc_total = 90;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            luc_total = quant * cc_total;
            cout << endl;

            break;

        case 7: // Salad
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Russian Salad\t\t 80 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Fresh Salad\t\t 50 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> sal_type;
            switch (sal_type)
            {
            case 1:
                sal_total = 80;
                break;
            case 2:
                sal_total = 50;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            luc_total = quant * sal_total;
            cout << endl;

            break;
        default:
            cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
            ;
            break;
        }
        t2 = luc_total;
        bill();
        cout << "\t\t\t\t\t\t  Would you like to order anything else? Y / N:";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            goto begining;
        }

        break;

    // Dinner Menu
    case 3:
        system("CLS");
        cout << endl;
        cout << "\t\t\t\t\t------||||||||-----MENU-----||||||||------" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  1) Biryani" << endl;
        cout << "\t\t\t\t\t\t  2) Chicken Karhai" << endl;
        cout << "\t\t\t\t\t\t  3) Mutton" << endl;
        cout << "\t\t\t\t\t\t  4) Tawa Chicken" << endl;
        cout << "\t\t\t\t\t\t  5) Malai Boti" << endl;
        cout << "\t\t\t\t\t\t  6) Roti" << endl;
        cout << "\t\t\t\t\t\t  7) Naan" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  Please Chose your Meal: ";
        cin >> din_cat;
        switch (din_cat)
        {
        case 1: //Biryani Options
            biryani();
            break;
        case 2: // Karhai Options
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Half Karhai\t\t 750 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Full Karhai\t\t 1200 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> din_size;
            switch (din_size)
            {
            case 1:
                din_total = 750;
                break;
            case 2:
                din_total = 1200;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            din_total = quant * din_total;
            cout << endl;
            cout << "\t\t\t\t\t\t  Total: " << din_total;
            break;
        case 3: // Mutton Options
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Half\t\t 900 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Full\t\t 1800 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> din_size;
            switch (din_size)
            {
            case 1:
                din_total = 900;
                break;
            case 2:
                din_total = 1800;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            din_total = quant * din_total;
            cout << endl;
            cout << "\t\t\t\t\t\t  Total: " << din_total;
            break;
        case 4: // Tawa Chicken
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Half\t\t 500 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Full\t\t 950 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> din_size;
            switch (din_size)
            {
            case 1:
                din_total = 500;
                break;
            case 2:
                din_total = 950;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            din_total = quant * din_total;
            cout << endl;
            cout << "\t\t\t\t\t\t  Total: " << din_total;
            break;
        case 5: // Malai Boti
            cout << endl;
            cout << "\t\t\t\t\t\t  Per Seikh 250 Rs " << endl;
            din_total = 250;
            cout << "\t\t\t\t\t\t  Please Enter Quantity: ";
            cin >> quant;
            din_total = quant * din_total;
            cout << endl;
            cout << "\t\t\t\t\t\t  Total: " << din_total;
            break;
        case 6: // Roti
            cout << endl;
            cout << "\t\t\t\t\t\t  Per Roti 8 Rs" << endl;
            din_total = 8;
            cout << "\t\t\t\t\t\t  Please Enter Quantity: ";
            cin >> quant;
            din_total = quant * din_total;
            cout << endl;
            cout << "\t\t\t\t\t\t  Total: " << din_total;
            break;
        case 7: // Naan
            cout << endl;
            cout << "\t\t\t\t\t\t  Per Naan 12 Rs" << endl;
            din_total = 12;
            cout << "\t\t\t\t\t\t  Please Enter Quantity: ";
            cin >> quant;
            din_total = quant * din_total;
            cout << endl;
            cout << "\t\t\t\t\t\t  Total: " << din_total;
            break;
        default:
            cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
            ;
            break;
        }
        t3 = din_total;
        bill();
        cout << "\t\t\t\t\t\t  Would you like to order anything else? Y / N:";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            goto begining;
        }
        
        break;
        
        // Fast Food Catagories
    case 4:
        system("CLS");
        cout << endl;
        cout << "\t\t\t\t\t------||||||||-----MENU-----||||||||------" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  1) Pizza" << endl;
        cout << "\t\t\t\t\t\t  2) Burger" << endl;
        cout << "\t\t\t\t\t\t  3) Shwarma" << endl;
        cout << "\t\t\t\t\t\t  4) Fries" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  Please Chose your Meal: ";
        cin >> fast_cat;
        switch (fast_cat)
        {
        case 1: //Pizza Options
            cout << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Chicken Fajita" << endl;
            cout << "\t\t\t\t\t\t  2) Chicken Tikka" << endl;
            cout << "\t\t\t\t\t\t  3) BBQ Buzz" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t  Please Chose a Flavour: ";
            cin >> pizza_fl;
            if (pizza_fl == 1 || pizza_fl == 2 || pizza_fl == 3)
            {
                cout << "\t\t\t\t\t\t  1) Small\t\t 480 Rs" << endl;
                cout << "\t\t\t\t\t\t  2) Medium\t\t 990 Rs" << endl;
                cout << "\t\t\t\t\t\t  3) Large\t\t 1650 Rs" << endl;
                cout << endl;
                cout << "\t\t\t\t\t\t  Enter Size: ";
                cin >> p_size;
                switch (p_size)
                {
                case 1:
                    pizza_total = 480;
                    break;
                case 2:
                    pizza_total = 990;
                    break;
                case 3:
                    pizza_total = 1650;
                    break;
                default:
                    cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                    break;
                }
                cout << "\t\t\t\t\t\t  Enter Quantity: ";
                cin >> quant;
                fast_total = quant * pizza_total;
                cout << endl;
            }
            else
            {
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
            }
            break;
        case 2: // Burger Options
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Chicken Burger\t\t 160 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Zinger Burger\t\t 250 Rs" << endl;
            cout << "\t\t\t\t\t\t  3) Grilled Burger\t\t 280 Rs" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t  Please Chose a Burger: ";
            cin >> b_type;
            switch (b_type)
            {
            case 1:
                bur_total = 160;
                break;
            case 2:
                bur_total = 250;
                break;
            case 3:
                bur_total = 280;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            fast_total = quant * bur_total;
            cout << endl;
            break;
        case 3: // Shwarma Options
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Chicken Shwarma\t\t 80 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Zinger Shwarma\t\t 190 Rs" << endl;
            cout << "\t\t\t\t\t\t  3) Grilled Shwarma\t\t 220 Rs" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t  Please Chose a Shwarma: ";
            cin >> s_type;
            switch (s_type)
            {
            case 1:
                sha_total = 80;
                break;
            case 2:
                sha_total = 190;
                break;
            case 3:
                sha_total = 220;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            fast_total = quant * sha_total;
            cout << endl;
            break;
        case 4: // Fries
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Regular\t\t 80 Rs" << endl;
            cout << "\t\t\t\t\t\t  3) Large\t\t 120 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose a Size: ";
            cin >> f_size;
            switch (f_size)
            {
            case 1:
                fri_total = 80;
                break;
            case 2:
                fri_total = 120;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            fast_total = quant * fri_total;
            cout << endl;
            break;
        default:
            cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
            break;
        }
        t4 = fast_total;
        bill();
        cout << "\t\t\t\t\t\t  Would you like to order anything else? Y / N:";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            goto begining;
        }
        
        break;

    case 5: // bevrages
        system("CLS");
        cout << endl;
        cout << "\t\t\t\t\t------||||||||-----MENU-----||||||||------" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  1) Soft Drinks " << endl;
        cout << "\t\t\t\t\t\t  2) Hot Drinks" << endl;
        cout << "\t\t\t\t\t\t  3) Milkshakes" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t  Please Chose your Meal: ";
        cin >> bvg_cat;
        switch (bvg_cat)
        {
        case 1: // Soft drinks
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Cola(1.5 litre)\t\t 100 Rs" << endl;
            cout << "\t\t\t\t\t\t  2) Sprite(1.5 litre)\t\t 100 Rs" << endl;
            cout << "\t\t\t\t\t\t  3) Mirinda(1.5 litre)\t\t 100 Rs" << endl;
            cout << "\t\t\t\t\t\t  4) Sting\t\t 65 Rs" << endl;
            cout << "\t\t\t\t\t\t  5) Lemon Soda\t\t 75 Rs" << endl;
            cout << "\t\t\t\t\t\t  6) Minral Water\t\t 35 Rs" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> sft_type;
            switch (sft_type)
            {
            case 1:
                sft_total = 100;
                break;
            case 2:
                sft_total = 100;
                break;
            case 3:
                sft_total = 100;
                break;
            case 4:
                sft_total = 65;
                break;
            case 5:
                sft_total = 75;
                break;
            case 6:
                sft_total = 35;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            bvg_total = quant * sft_total;
            cout << endl;
            break;

        case 2: // Hot drinks
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Fresh Mint Tea\t\t Rs.45 only" << endl;
            cout << "\t\t\t\t\t\t  2) Kashmiri Tea\t\t Rs.50 only" << endl;
            cout << "\t\t\t\t\t\t  3) Hot Chocolate\t\t Rs.230 only" << endl;
            cout << "\t\t\t\t\t\t  4) Green Tea\t\t Rs.50 only" << endl;
            cout << "\t\t\t\t\t\t  5) Cappuccino\t\t Rs.250 only" << endl;
            cout << "\t\t\t\t\t\t  6) Tandoori Chai\t\t Rs.80 only" << endl;
            cout << "\t\t\t\t\t\t  7) Honey Lemon Water\t\t Rs.80 only" << endl;
            cout << "\t\t\t\t\t\t  8) Chicken Yakhni\t\t Rs.130 only" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> htd_type;
            switch (htd_type)
            {
            case 1:
                htd_total = 45;
                break;
            case 2:
                htd_total = 50;
                break;
            case 3:
                htd_total = 230;
                break;
            case 4:
                htd_total = 50;
                break;
            case 5:
                htd_total = 250;
                break;
            case 6:
                htd_total = 80;
                break;
            case 7:
                htd_total = 80;
                break;
            case 8:
                htd_total = 130;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            bvg_total = quant * htd_total;
            cout << endl;
            break;

        case 3: // Milkshakes
            cout << endl;
            cout << "\t\t\t\t\t\t  1) Mango Milkshake\t\t Rs.120 only" << endl;
            cout << "\t\t\t\t\t\t  2) Oreo Milkshake\t\t Rs.100 only" << endl;
            cout << "\t\t\t\t\t\t  3) Banana Milkshake\t\t Rs.120 only" << endl;
            cout << "\t\t\t\t\t\t  4) Strawberry Milkshake\t\t Rs.120 only" << endl;
            cout << "\t\t\t\t\t\t  5) Chocolate Milkshake\t\t Rs.100 only" << endl;
            cout << "\t\t\t\t\t\t  6) Cookies Milkshake\t\t Rs.100 only" << endl;
            cout << "\t\t\t\t\t\t  Please Chose: ";
            cin >> mks_type;
            switch (mks_type)
            {
            case 1:
                mks_total = 120;
                break;
            case 2:
                mks_total = 100;
                break;
            case 3:
                mks_total = 120;
                break;
            case 4:
                mks_total = 120;
                break;
            case 5:
                mks_total = 120;
                break;
            case 6:
                mks_total = 100;
                break;
            case 7:
                mks_total = 100;
                break;
            default:
                cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
                break;
            }
            cout << "\t\t\t\t\t\t  Enter Quantity: ";
            cin >> quant;
            bvg_total = quant * mks_total;
            cout << endl;
        }
        t5 = bvg_total;
        bill();
        cout << "\t\t\t\t\t\t  Would you like to order anything else? Y / N:";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            goto begining;
        }
        
    }
}
void biryani()
{
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t  1) Half Plate\t\t 80 Rs" << endl;
    cout << "\t\t\t\t\t\t  2) Full Plate\t\t 150 Rs" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t  Please Chose: ";
    cin >> din_size;
    switch (din_size)
    {
    case 1:
        bir_total = 80;
        break;
    case 2:
        bir_total = 150;
        break;
    default:
        cout << "\t\t\t\t\t\t  Please Enter a Valid Menu number" << endl;
        break;
    }

    cout << "\t\t\t\t\t\t  Enter Quantity: ";
    cin >> quant;
    din_total = quant * bir_total;
    cout << endl;
    cout << "\t\t\t\t\t\t  Total: " << din_total;
}
void bill()
{
    system("CLS");
    total =t1 + t2 +t3 +t4 +t5; 
    cout << "\t\t\t\t\t\t---------- Your Total ----------" << endl;
    cout << endl;
    gst = 0.17 * total;
    cout << "\t\t\t\t\t\t   ---------- Bill ----------" << endl;
    your_total = gst + total;
    cout << endl;
    cout << "\t\t\t\t\t\t **************************************" << endl;
    cout << "\t\t\t\t\t\t Your Total Bill is: " << total << " Rs/-" << endl;
    cout << "\t\t\t\t\t\t **************************************" << endl;;
    cout << endl;
    cout << "\t\t\t\t\t\t **************************************" << endl;
    cout << "\t\t\t\t\t\t Your Total Bill after GST is: " << your_total << " Rs/-" << endl;
    cout << "\t\t\t\t\t\t **************************************" << endl;;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t Thanks For ordering from our resturant " << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t  Have a Good & Healthy Day!" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t  Plese Visit Us Again" << endl;
    cout << endl;
}