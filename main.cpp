#include <iostream>
#include<conio.h>
#include<windows.h>
#include <fstream>
using namespace std;
void VISITGALLERY();
void number1101();
void number1110();
void number1111();
void number1116();
void number1123();
void FORBUY();
int main();
void codenumber11();
void codenumber12();
void codenumber13();
void codenumber14();
void codenumber15();
class museum{
private:
    string contents;
    string openingdate;
public:                                   //me
    museum(string n){
        if (n=="y"){
            contents=" Our small museum contains five artists.\n "
                     " \tEach artist displays all his information\n"
                     " \this life, his works,and the details of each work\n";
            openingdate="\tOur museum will be officially opened in\n"
                        " \tthe fourth quarter of 2022(:(:\n";
            cout<<"\t\t\xb2\xb2WELCOME TO OUR LITTLE MUSEUM\xb2\xb2\t"<<contents<<openingdate;
        }
        else
            return ;
    };
};//--------------------------------------------------------
class Artist                              //amr
{
public:
    string name;
    string Born;
    string Awards;
    string leonardo();
    string leonardoBiography();
    string leonardoArt();
};Artist r;

class Biography:public Artist
{
public:
    string birthdate;
    string deathdate;
    string nationality;
    string edu;
    string occu;
    void addArtistInfo();
};
void addArtistInfo(string s)
{
    Biography b;
    b.name=s;
    cout<<"Enter artist's birth date : ";
    cin>>b.birthdate;
    cout<<"Enter artist's death date : ";
    cin>>b.deathdate;
    cout<<"Enter artist's nationality :";
    cin>>b.nationality;
    cout<<"Enter artist's edu :";
    cin>>b.edu;
    cout<<"Enter artist's occu :";
    cin>>b.occu;
    cout<<"Enter artist's awards :";
    cin>>b.Awards;
    cout<<"here is the information you entered:"<<b.name<<endl<<b.birthdate<<endl<<b.deathdate<<endl<<b.nationality<<endl<<b.edu<<endl<<b.occu;
    return;
}
void admin()
{
    cout<<"Do you want to add artist info?"<<endl;
    cout<<"Insert your option (Y/N) : ";
    char n;
    cin>>n;
    if(n=='Y' || n=='y')
    {string s;
        cout<<"enter artist name";
        cin>>s;
        addArtistInfo(s);
        cout<<"add artist successfully";
        VISITGALLERY();

    }
    else
    {
        cout<<"Press enter to go back."<<endl;
        cin.get();
    }
}//---------------------------------------------------
void BuyArt()                         //me
{
    cout<<"(1)leonardo da vinci \n";
    cout<<"(2)Vincent van gogh\n";
    cout<<"(3)Rembrandt \n";
    cout<<"(4)Michelangelo \n";
    cout<<"(5)Pablo Picasso \n";

    while(1)
    {
        cout<<"(6)Previous Page\n";
        cout<<"(0) EXIT\n";
        cout<<"Enter Your code:";
        int ch;
        cin>>ch;
        while(1)
            switch(ch)
            {
                case 1:
                    cout<<"(1)leonardo da vinci\n";
                    codenumber11();
                    break;
                case 2:
                    cout<<"(2)Vincent van gogh\n";
                    codenumber12();
                    break;
                case 3:
                    cout<<"(3)Rembrandt\n";
                    codenumber13();
                    break;
                case 4:
                    cout<<"(4)Michelangelo\n";
                    codenumber14();
                    break;
                case 5:
                    cout<<"(5)Pablo Picasso\n";
                    codenumber15();
                    break;
                case 6:
                    cout<<"Previous Page\n";
                    FORBUY();
                    break;
                case 0:
                    cout<<"Exit\n";
                    FORBUY();
                    break;
                default :
                    cout<<"Uploading...\n";
            }
    }
    getche();
}
void FORBUY()
{
    cout<<"(1)Buy Art\n";
    cout<<"(2)Previous Page \n";
    cout<<"(0) EXIT\n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"(1)Buy Art \n";
            BuyArt();
            break;

        case 2:
            cout<<"(2)Previous Page \n";
            main();
            break;
        case 0:
            cout<<"(0) EXIT";
            main();
            break;

        default :
            cout<<"Uploading...\n";
    }
}
//---------------------------------------------------------
void codenumber11()                        //abdullah
{   cout<<"(1) mona lisa code number-1101 (you can buy this art!!)";
    cout<<"(2)The last supper code number-1102\n";
    cout<<"(3)The virgin and the child code number-1103\n";
    cout<<"(4)Vitruvian man code number-1104\n";
    cout<<"(5)Portrait of man in red chalk code number-1105\n";
    cout<<"(0)Previous Page \n";
    cout<<"Enter Your Choice:";
    string a="start https://cdn.pixabay.com/photo/2020/04/03/03/31/last-supper-4997322__480.png";
    string b=" start https://e7.pngegg.com/pngimages/774/839/png-clipart-monalisa-isleworth-mona-lisa-musee-du-louvre-renaissance-painting-mona-lisa-painting-renaissance-thumbnail.png";
    string c="start https://uploads5.wikiart.org/00296/images/sandro-botticelli/the-virgin-and-the-child-1490.jpg!Large.jpg";
    string d="start https://media.overstockart.com/optimized/cache/data/product_images/LDV7278-1000x1000.jpg";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"(1)mona lisa code number-1101\n";
            system(b.c_str());
            number1101();
            break;
        case 2:
            cout<<"(2)The last supper code number-1102\n";
            system(a.c_str());
            break;
        case 3:
            cout<<"(3)The virgin and the child code number-1103\n";
            system(c.c_str());
            break;
        case 4:
            cout<<"(4)Vitruvian man code number-1104\n";
            break;
        case 5:
            cout<<"(5)Portrait of man in red chalk  code number-1105\n";
            system(d.c_str());
            break;
        case 0:
            cout<<"(0)Previous Page \n\n";
            BuyArt();
            break;
        default :
            cout<<"Uploading...\n";
    }
}
void number1101(){
    cout<<"this is the most famous and best painting by\n"
          "leonardo da vinci\n ";
    cout<<"price :30000$\n";
    cout<<"do you want to buy Mona lisa???\n ";
    cout<<"(1)yes\n ";
    cout<<"(2)no\n";
    cout<<"(3)Previous Page\n";
    cout<<"(0) EXIT\n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    while(1)
        switch(ch)
        {
            case 1:
                cout<<"(1)yes\n";
                cout<<"Thank You! for your bought the Art\n";

                cout<<" (1)Previous Page\n";
                cout<<" (0) EXIT\n";
                cout<<" Enter Your Choice:";
                {
                    int ch;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            cout<<"(1)Previous Page\n";
                            number1101();

                        case 0:
                            cout<<"Exit\n";
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    break;
                    case 2:
                        cout<<"(2)No\n";
                    cout<<"Thank You!!!\n";
                    cout<<"(1)Previous Page\n";
                    cout<<"(0) EXIT\n";
                    cout<<"Enter Your Choice:";
                    {
                        int ch;
                        cin>>ch;
                        switch(ch)
                        {
                            case 1:
                                cout<<"(1)Previous Page\n";
                                number1101();
                            case 0:
                                cout<<"Exit\n";
                                break;
                            default :
                                cout<<"Uploading...\n";
                        }
                        break;
                        case 3:
                            cout<<"(3)Previous Page \n";
                        codenumber11();
                        break;
                        case 0:
                            cout<<"(0) EXIT\n";
                        break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    getche();
                }
        }
}
void codenumber12()
{   cout<<"(1) the potato eaters number-1106\n";
    cout<<"(2) sun flowers code number-1107\n";
    cout<<"(3) bedroom in arles code number-1108\n";
    cout<<"(4) the starry night code number-1109\n";
    cout<<"(5) portrait of dr. gache code number-1110(you can by this art!!!)\n";
    cout<<"(0)Previous Page \n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    string a="start https://i.pinimg.com/originals/d0/87/7d/d0877d879b02ae08ce14c028dc13d81d.jpg";
    string b="start https://uploads8.wikiart.org/images/vincent-van-gogh/still-life-vase-with-twelve-sunflowers.jpg!Large.jpg";
    string c="start https://cdn.cnn.com/cnnnext/dam/assets/160211140722-01-van-gogh-bedroom-vangoghbedroom-hero-full-169.jpg";
    string d="start https://cdn.shopify.com/s/files/1/0518/5958/7227/files/comp_d5e34704-1d8d-465c-a077-469b15f7c744_x600.png?v=1625005651";
    string e="start https://cdn.sanity.io/images/cxgd3urn/production/0adb4e128d8578057910edc4e63a834cb27d57ee-960x1155.jpg?rect=60,73,840,504&w=1200&h=720&q=85&fit=crop&auto=format";

    switch(ch)
    {
        case 1:
            cout<<"(1)the potato eaters number-1106\n";
            system(a.c_str());
            break;
        case 2:
            cout<<"(2) flowers code number-1107\n";
            system(b.c_str());
            break;
        case 3:
            cout<<"(3) bedroom in arles code number-1108\n";
            system(c.c_str());
            break;
        case 4:
            cout<<"(4)the starry night code number-1109\n";
            system(d.c_str());
            break;
        case 5:
            cout<<"(5) portrait of dr. gachet code number-1110\n";
            system(e.c_str());
            number1110();
            break;
        case 0:
            cout<<"(0)Previous Page \n\n";
            BuyArt();
            break;
        default :
            cout<<"Uploading...\n";
    }
}
void number1110(){
    cout<<"this is the most famous and best painting by\n"
          "vincent van goh \n";
    cout<<"price :23000$\n";
    cout<<"do you want to buy portrait of dr. gachet???\n ";
    cout<<"(1)yes\n ";
    cout<<"(2)no\n";
    cout<<"(3)Previous Page\n";
    cout<<"(0) EXIT\n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    while(1)
        switch(ch)
        {
            case 1:
                cout<<"(1)yes\n";
                cout<<"Thank You! for your bought the Art\n";
                cout<<" (1)Previous Page\n";
                cout<<" (0) EXIT\n";
                cout<<" Enter Your Choice:";
                {
                    int ch;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            cout<<"(1)Previous Page\n";
                            number1110();

                        case 0:
                            cout<<"Exit\n";
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    break;
                    case 2:
                        cout<<"(2)No\n";
                    cout<<"Thank You!!!\n";
                    cout<<"(1)Previous Page\n";
                    cout<<"(0) EXIT\n";
                    cout<<"Enter Your Choice:\n";
                    {
                        int ch;
                        cin>>ch;
                        switch(ch)
                        {
                            case 1:
                                cout<<"(1)Previous Page\n";
                                number1110();
                            case 0:
                                cout<<"Exit\n";
                                break;
                            default :
                                cout<<"Uploading...\n";
                        }
                        break;
                        case 3:
                            cout<<"(3)Previous Page \n";
                        codenumber12();
                        break;
                        case 0:
                            cout<<"(0) EXIT\n";
                        break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    getche();
                }
        }
}
void codenumber13()
{   cout<<"(1) The Anatomy Lesson of Dr. Nicolaes Tulp code number-1111(you can by this art!!!)\n";
    cout<<"(2) belshazzar's feast code number-1112\n";
    cout<<"(3) the night watch code number-1113\n";
    cout<<"(4) syndics of the drapers guild code number-1114\n";
    cout<<"(5) the hundred guilder print code number-1115\n";
    cout<<"(0)Previous Page \n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    string a="start https://news.artnet.com/app/news-upload/2019/03/image00022-1024x715.png";
    string b="start https://media.mutualart.com/Images/2022_08/03/05/055430498/rembrandt-van-rijn-balthazar-s-feast-B1IDE-570.Jpeg";
    string c="start https://www.vangoghstudio.com//Files/6/102000/102147/ProductPhotos/620/1737498701.jpg";
    string d="start https://ih1.redbubble.net/image.1439816861.1506/fposter,small,wall_texture,product,750x1000.jpg";
    string e="start https://www.artic.edu/iiif/2/309b0537-f67b-5d08-5a7b-bb0d0947a2a0/full/843,/0/default.jpg";
    switch(ch)
    {
        case 1:
            cout<<"(1)The Anatomy Lesson of Dr. Nicolaes Tulp code number-1111\n";
            system(a.c_str());
            number1111();
            break;
        case 2:
            cout<<"(2) belshazzar's feast code number-1112\n";
            system(b.c_str());
            break;
        case 3:
            cout<<"(3)the night watch code number-1113\n";
            system(c.c_str());
            break;
        case 4:
            cout<<"(4) syndics of the drapers guild code number-1114\n";
            system(d.c_str());
            break;
        case 5:
            cout<<"(5)  the hundred guilder print code number-1115\n";
            system(e.c_str());
            break;
        case 0:
            cout<<"(0)Previous Page \n\n";
            BuyArt();
            break;
        default :
            cout<<"Uploading...\n";
    }
}
void number1111(){
    cout<<"this is the most famous and best painting by\n"
          "Rembrandt \n";
    cout<<"price :27000$\n";
    cout<<"do you want to buy The Anatomy Lesson of Dr. Nicolaes Tulp???\n ";
    cout<<"(1)yes\n ";
    cout<<"(2)no\n";
    cout<<"(3)Previous Page\n";
    cout<<"(0) EXIT\n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    while(1)
        switch(ch)
        {
            case 1:
                cout<<"(1)yes\n";
                cout<<"Thank You! for your bought the Art\n";

                cout<<" (1)Previous Page\n";
                cout<<" (0) EXIT\n";
                cout<<" Enter Your Choice:";
                {
                    int ch;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            cout<<"(1)Previous Page\n";
                            number1111();

                        case 0:
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    break;
                    case 2:
                        cout<<"(2)No\n";
                    cout<<"Thank You!!!(:\n";
                    cout<<"(1)Previous Page\n";
                    cout<<"(0) EXIT\n";
                    cout<<"Enter Your Choice:\n";
                    {
                        int ch;
                        cin>>ch;
                        switch(ch)
                        {
                            case 1:
                                cout<<"(1)Previous Page\n";
                                number1111();
                            case 0:
                                cout<<"Exit\n";
                                break;
                            default :
                                cout<<"Uploading...\n";
                        }
                        break;
                        case 3:
                            cout<<"(3)Previous Page \n";
                        codenumber13();
                        break;
                        case 0:
                            cout<<"(0) EXIT\n";
                        break;
                        default :
                            cout<<"\n\t\tUploading...\n";
                    }
                    getche();
                }
        }
}
void codenumber14()
{   cout<<"(1)  pieta code number-1116(you can by this art!!!)\n";
    cout<<"(2) david code number-1117\n";
    cout<<"(3) sistine chapel ceiling code number-1118\n";
    cout<<"(4) moses code number-1119\n";
    cout<<"(5) the last judgment code number-1120\n";
    cout<<"(0)Previous Page \n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    string a="start https://cdn.britannica.com/42/9642-050-B04B8F89/Pieta-Michelangelo-Vatican-City-St-Peters-Basilica.jpg?utm_source=pj-affiliate&utm_medium=pj&utm_campaign=kids-pj&clickId=4235534281";
    string b="start https://www.thoughtco.com/thmb/N7k01W6uAAjRaOOQu43Md5E0WHI=/1500x0/filters:no_upscale():max_bytes(150000):strip_icc()/SistineChapel-57ffd66e5f9b5805c2ac4916.jpg";
    string c="start https://artincontext.org/wp-content/uploads/2022/04/Moses-Michelangelo.jpg";
    switch(ch)
    {
        case 1:
            cout<<"(1)pieta eaters number-1116\n";
            system(a.c_str());
            number1116();
            break;
        case 2:
            cout<<"(2) david code number-1117\n";
            break;
        case 3:
            cout<<"(3)sistine chapel ceiling code number-1118\n";
            system(b.c_str());
            break;
        case 4:
            cout<<"(4)moses code number-1119\n";
            system(c.c_str());
            break;
        case 5:
            cout<<"(5) the last judgment code number-1120\n";
            break;
        case 0:
            cout<<"(0)Previous Page \n\n";
            BuyArt();
            break;
        default :
            cout<<"Uploading...\n";
    }
}
void number1116(){
    cout<<"this is the most famous and best painting by\n"
          "michel anglo \n";
    cout<<"price :22000$\n";
    cout<<"do you want to buy pieta???\n ";
    cout<<"(1)yes\n ";
    cout<<"(2)no\n";
    cout<<"(3)Previous Page\n";
    cout<<"(0) EXIT\n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    while(1)
        switch(ch)
        {
            case 1:
                cout<<"(1)yes\n";
                cout<<"Thank You! for your bought the Art\n";

                cout<<" (1)Previous Page\n";
                cout<<" (0) EXIT\n";
                cout<<" Enter Your Choice:\n";
                {
                    int ch;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            cout<<"(1)Previous Page\n";
                            number1116();
                        case 0:
                            cout<<"Exit\n";
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    break;
                    case 2:
                        cout<<"(2)No\n";
                    cout<<"Thank You!!!\n";
                    cout<<"(1)Previous Page\n";
                    cout<<"(0) EXIT\n";
                    cout<<"Enter Your Choice:\n";
                    {
                        int ch;
                        cin>>ch;
                        switch(ch)
                        {
                            case 1:
                                cout<<"(1)Previous Page\n";
                                number1116();
                            case 0:
                                break;
                            default :
                                cout<<"Uploading...\n";
                        }
                        break;
                        case 3:
                            cout<<"(3)Previous Page \n";
                        codenumber14();
                        break;
                        case 0:
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    getche();
                }
        }
}
void codenumber15()
{   cout<<"(1)  la via code number-1121\n";
    cout<<"(2) family of saltimbanques code number-1122\n";
    cout<<"(3) les demoiselles d'avignon code number-1123(you can by this art!!!)\n";
    cout<<"(4) portrait of daniel-henry kahnweiler code number-1124\n";
    cout<<"(5) girl before a mirror code number-1125\n";
    cout<<"(0)Previous Page \n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    string a="start https://az334033.vo.msecnd.net/images-5/family-of-saltimbanques-pablo-picasso-1905-cd92fd38.jpg";
    string b="start https://media.mutualart.com/Images/2020_01/27/13/134158474/d7e85422-84d8-405a-b0ea-08d1d4a73cbd_570.Jpeg";
    string c="start https://cdn.kastatic.org/ka-perseus-images/b1e82292b1be1850191e8a6b9df50e95cbd46528.jpg";
    string d="start https://www.pablopicasso.net/images/Girl%20before%20a%20Mirror%20Pablo%20Picasso.jpg?ezimgfmt=rs:357x442/rscb5/ngcb5/notWebP";
    switch(ch)
    {
        case 1:
            cout<<"(1)la via number-1121\n";
            break;
        case 2:
            cout<<"(2) family of saltimbanques code number-1122";
            system(a.c_str());
            break;
        case 3:
            cout<<"(3) les demoiselles d'avignon code number-1123\n";
            system(b.c_str());
            number1123();
            break;
        case 4:
            cout<<"(4) portrait of daniel-henry kahnweiler code number-1124\n";
            system(c.c_str());
            break;
        case 5:
            cout<<"(5)girl before a mirror code number-1125\n";
            system(d.c_str());
            break;
        case 0:
            cout<<"(0)Previous Page \n\n";
            BuyArt();
            break;
        default :
            cout<<"Uploading...\n";
    }
}
void number1123(){
    cout<<"this is the most famous and best painting by\n"
          "paplo picasso \n";
    cout<<"price :24000$\n";
    cout<<"do you want to buy les demoiselles d'avignon???\n ";
    cout<<"(1)yes\n ";
    cout<<"(2)no\n";
    cout<<"(3)Previous Page\n";
    cout<<"(0) EXIT\n";
    cout<<"Enter Your Choice:";
    int ch;
    cin>>ch;
    while(1)
        switch(ch)
        {
            case 1:
                cout<<"(1)yes\n";
                cout<<"Thank You! for your bought the Art\n";

                cout<<" (1)Previous Page\n";
                cout<<" (0) EXIT\n";
                cout<<" Enter Your Choice:\n";
                {
                    int ch;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            cout<<"(1)Previous Page\n";
                            number1123();

                        case 0:
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    break;
                    case 2:
                        cout<<"(2)No\n";
                    cout<<"Thank You!!!\n";
                    cout<<"(1)Previous Page\n";
                    cout<<"(0) EXIT\n";
                    cout<<"Enter Your Choice:\n";
                    {
                        int ch;
                        cin>>ch;
                        switch(ch)
                        {
                            case 1:
                                cout<<"(1)Previous Page\n";
                                number1123();
                            case 0:
                                cout<<"Exit\n";
                                break;
                            default :
                                cout<<"Uploading...\n";
                        }
                        break;
                        case 3:
                            cout<<"(3)Previous Page \n";
                        codenumber15();
                        break;
                        case 0:
                            break;
                        default :
                            cout<<"Uploading...\n";
                    }
                    getche();
                }
        }
}//----------------------------------------------------------
void leonardo();                        //omar
void leonardo( string image);
void leonardoBiography();
void leonardoArt();
void van_gogh(string image);
void van_gogh();
void van_goghBiography();
void van_goghArt();
void rembrandt(string image);
void rembrandt();
void rembrandtBiography();
void rembrandtArt();
void Michelanglo(string image);
void Michelanglo();
void MichelangloBiography();
void MichelangloArt();
void PabloPicasso(string image);
void PabloPicasso();
void PabloPicassoBiography();
void PabloPicassoArt();
int main();//------------------------------------------------------------
void VISITGALLERY() {               //mohammed ashraf and arts functions
    cout << "list\n";
    cout << " (1)leonardo da vinci\n";
    cout << " (2)Vincent van gogh\n";
    cout << " (3)Rembrandt\n";
    cout << " (4)Michelangelo\n";
    cout << " (5)Pablo Picasso\n";
    cout << " (0)EXIT";
    cout << " Enter Your Choice:";
    int ch;
    string a="start https://i.natgeofe.com/n/37c3c776-b8cb-4be1-988a-cf593c776b88/01-leonardo-da-vinci-book-talk_2x3.jpg";
    string b="start https://cdn.britannica.com/36/69636-050-81A93193/Self-Portrait-artist-panel-board-Vincent-van-Gogh-1887.jpg";
    string c="start https://www.sarova-rembrandthotel.com/wp-content/uploads/X-07FOIA.jpeg";
    string d="start https://cdn.britannica.com/46/75046-050-0973B0E8/Michelangelo.jpg";
    string e="start https://uploads4.wikiart.org/00115/images/pablo-picasso/iuyqtex0.jpeg!Portrait.jpeg";
    cin >> ch;
    while (1)
        switch (ch) {
            case 1:
                cout << "leonardo da vinci\n";
                leonardo(a);
                leonardo();
                break;
            case 2:
                cout << "vincent van gogh\n";
                van_gogh(b);
                van_gogh();
                break;
            case 3:
                cout << "rembrandt\n";
                rembrandt(c);
                rembrandt();
                break;
            case 4:
                cout << "Michelanglo\n";
                Michelanglo(d);
                Michelanglo();
                break;
            case 5:
                cout << "Pablo Picasso\n";
                PabloPicasso(e);
                PabloPicasso();
                break;
            case 0:
                main();
                break;
            default :
                cout << "Uploading...\n";
        }
}//----------------------------------------------------------
void leonardo(string image){
    system(image.c_str());
    cout<<"This is Leonardo Da vinci!!\n";
}
void leonardo() {                            //omar
    cout << "(1)leonardo BIOGRAPHY\n";
    cout << "(2)leonardo ART\n ";
    cout << "(3)Previous Page \n";
    cout << "(4) EXIT\n";
    cout << "Enter Your Choice:\n";
    int ch;
    cin>>ch;
    switch (ch) {
        case 1:
            cout << "leonardo Biography\n";
            leonardoBiography();
            break;
        case 2:
            cout << "leonardo  Art\n";
            leonardoArt();
            break;
        case 3:
            cout << "(3)Previous Page \n\n";
            VISITGALLERY();
            break;
        case 4:
            main();
            break;
        default :
            cout << "Uploading...\n";
    }
}
void leonardoBiography() {
    cout << "Native name  : Leonardo da vinci\n\n";
    cout << "Born :Vinci , Republic of florance ,Italy\n\n";
    cout << "Died :2 may 1519\n\n";
    cout << "Nationality  :italy\n\n";
    cout << "Education	:Studio of Andrea del Verrocchio\n\n";
    cout << "Occupation:\t\nPainting , tdrawing , engineering , science , sculpture , architecture\n\n";
    cout<<" work: mona lisa\nThe last supper\nThe virgin and the child\nVitruvian man\nPortrait of man in red chalk";
    int ch;
    while (cin>>ch) {
        cout << "Enter Your Choice:\n";
        switch (ch) {

            case 1:
                cout << "(1)Previous Page \n\n";
                leonardo();
                break;
            case 0:
                cout << "(0) EXIT";
                VISITGALLERY();
                break;

            default :
                cout << "Uploading...\n";

        }
        getche();
    }
}
void leonardoArt()
{
    cout<<"(1) mona lisa\n";
    cout<<"(2)The last supper\n";
    cout<<"(3)The virgin and the child\n";
    cout<<"(4)Vitruvian man\n";
    cout<<"(5)Portrait of man in red chalk\n";
    int ch;
    string a="start https://cdn.pixabay.com/photo/2020/04/03/03/31/last-supper-4997322__480.png";
    string b=" start https://e7.pngegg.com/pngimages/774/839/png-clipart-monalisa-isleworth-mona-lisa-musee-du-louvre-renaissance-painting-mona-lisa-painting-renaissance-thumbnail.png";
    string c="start https://uploads5.wikiart.org/00296/images/sandro-botticelli/the-virgin-and-the-child-1490.jpg!Large.jpg";
    string d="start https://media.overstockart.com/optimized/cache/data/product_images/LDV7278-1000x1000.jpg";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"mona lisa\n";
            system(b.c_str());
            break;
        case 2:
            cout<<"The last supper\n";
            system(a.c_str());
            break;
        case 3:
            cout<<"The virgin and the child\n";
            system(c.c_str());
            break;
        case 4:
            cout<<"Vitruvian man\n";
            cout<<"paint 4";
            break;
        case 5:
            cout<<"Portrait of man in red chalk\n";
            system(d.c_str());
            break;
        case 0:
            cout<<"\n\n\tPrevious Page \n\n";
            leonardo();
            break;

        default :
            cout<<"\n\tUploading...\n";
    }
}
void van_gogh(string image){
    system(image.c_str());
    cout<<"This is vincit van goh!!!\n";
}
void van_gogh(){
    cout << "(1)van gogh BIOGRAPHY\n";
    cout << "(2)van gogh ART\n ";
    cout << "(3)Previous Page \n\n";
    cout << "(4) EXIT\n";
    cout << "Enter Your Choice:\n";
    int ch;
    cin>>ch;
    switch (ch) {
        case 1:
            cout << "vincent Biography\n";
            van_goghBiography();
            break;
        case 2:
            cout << "vincent  Art\n";
            van_goghArt();
            break;
        case 3:
            cout << "(3)Previous Page \n\n";
            VISITGALLERY();
            break;
        case 4:
            main();
            break;
        default :
            cout << "Uploading...\n";
    }
}
void van_goghBiography(){
    cout << "Native name  : vincent van gogh\n\n";
    cout << "Born :30 March 1853\n\n";
    cout << "Died: 29 July 1890\n\n";
    cout << "Nationality  : Netherlands\n\n";
    cout << "Education	:\n"
            "Royal Academy of Fine Arts\n"
            "Academie Royale des Beaux-Arts\n"
            "\n\n";
    cout << "Occupation:\t\nPainting, drawing still life, portraits and landscapes\n\n";
    cout<<" work: \t\n" "The Potato Eaters\n\tSunflowers\n\tBedroom in Arles \n\tThe Starry Night \n\tPortrait of Dr. Gache";
    int ch;
    while (cin>>ch) {
        cout << "Enter Your Choice:\n";
        switch (ch) {

            case 1:
                cout << "(1)Previous Page \n\n";
                van_gogh();
                break;
            case 0:
                cout << "(0) EXIT";
                VISITGALLERY();
                break;

            default :
                cout << "Uploading...\n";
        }
        getche();
    }
}
void van_goghArt(){
    cout<<"(1) The Potato Eaters\n";
    cout<<"(2)Sunflowers\n";
    cout<<"(3)Bedroom in Arles\n";
    cout<<"(4)The Starry Night\n";
    cout<<"(5)Portrait of Dr. Gache\n";
    int ch;
    string a="start https://i.pinimg.com/originals/d0/87/7d/d0877d879b02ae08ce14c028dc13d81d.jpg";
    string b="start https://uploads8.wikiart.org/images/vincent-van-gogh/still-life-vase-with-twelve-sunflowers.jpg!Large.jpg";
    string c="start https://cdn.cnn.com/cnnnext/dam/assets/160211140722-01-van-gogh-bedroom-vangoghbedroom-hero-full-169.jpg";
    string d="start https://cdn.shopify.com/s/files/1/0518/5958/7227/files/comp_d5e34704-1d8d-465c-a077-469b15f7c744_x600.png?v=1625005651";
    string e="start https://cdn.sanity.io/images/cxgd3urn/production/0adb4e128d8578057910edc4e63a834cb27d57ee-960x1155.jpg?rect=60,73,840,504&w=1200&h=720&q=85&fit=crop&auto=format";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"The Potato Eaters\n";
            system(a.c_str());
            break;
        case 2:
            cout<<"Sunflowers\n";
            system(b.c_str());
            break;
        case 3:
            cout<<"Bedroom in Arles\n";
            system(c.c_str());
            break;
        case 4:
            cout<<"The Starry Night\n";
            system(d.c_str());
            break;
        case 5:
            cout<<"Portrait of Dr. Gache\n";
            system(e.c_str());
            break;
        case 0:
            cout<<"\n\nPrevious Page \n\n";
            van_gogh();
            break;

        default :
            cout<<"\n\tUploading...\n";
    }
}
void rembrandt(string image){
    system(image.c_str());
    cout<<"This is rembrandt!!!\n";
}
void rembrandt(){
    cout << "(1)rembrandt BIOGRAPHY\n";
    cout << "(2) rembrandt ART\n ";
    cout << "(3)Previous Page \n\n";
    cout << "(4) EXIT\n";
    cout << "Enter Your Choice:\n";
    int ch;
    cin>>ch;
    switch (ch) {
        case 1:
            cout << "rembrandt Biography\n";
            rembrandtBiography();
            break;
        case 2:
            cout << "rembrandt  Art\n";
            rembrandtArt();
            break;
        case 3:
            cout << "(3)Previous Page \n\n";
            VISITGALLERY();
            break;
        case 4:
            main();
            break;
        default :
            cout << "Uploading...\n";
    }
}
void rembrandtBiography(){
    cout << "Native name  : Rembrandt \n\n";
    cout << "Born :15 July 1606\n\n";
    cout << "Died: 4 October 1669\n\n";
    cout << "Nationality  : Netherlands\n\n";
    cout << "Education	:\n"
            "Jacob van Swanenburg\n"
            "Pieter Lastman\n"
            "\n\n";
    cout << "Occupation:\t\n\n""Painting, printmaking, drawing\n\n";
    cout<<" work: \t\n" "The Anatomy Lesson of Dr. Nicolaes Tulp \n\tBelshazzar's Feast \n\tThe Night Watch \n\tSyndics of the Drapers' Guild  \n\tThe Hundred Guilder Print";
    int ch;
    while (cin>>ch) {
        cout << "Enter Your Choice:\n";
        switch (ch) {

            case 1:
                cout << "(1)Previous Page \n\n";
                rembrandt();
                break;
            case 0:
                cout << "(0) EXIT";
                VISITGALLERY();
                break;

            default :
                cout << "Uploading...\n";

        }
        getche();
    }

}
void rembrandtArt(){
    cout<<"(1) The Anatomy Lesson of Dr. Nicolaes Tulp\n";
    cout<<"(2)Belshazzar's Feast\n";
    cout<<"(3)The Night Watch\n";
    cout<<"(4)Syndics of the Drapers' Guild\n";
    cout<<"(5)The Hundred Guilder Print\n";
    int ch;
    string a=" start https://news.artnet.com/app/news-upload/2019/03/image00022-1024x715.png";
    string b="start https://media.mutualart.com/Images/2022_08/03/05/055430498/rembrandt-van-rijn-balthazar-s-feast-B1IDE-570.Jpeg";
    string c=" start https://www.vangoghstudio.com//Files/6/102000/102147/ProductPhotos/620/1737498701.jpg";
    string d="start https://ih1.redbubble.net/image.1439816861.1506/fposter,small,wall_texture,product,750x1000.jpg";
    string e="start https://www.artic.edu/iiif/2/309b0537-f67b-5d08-5a7b-bb0d0947a2a0/full/843,/0/default.jpg";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"The Anatomy Lesson of Dr. Nicolaes Tulp\n";
            system(a.c_str());
            break;
        case 2:
            cout<<"Belshazzar's Feast\n";
            system(b.c_str());
            break;
        case 3:
            cout<<"The Night Watch\n";
            system(c.c_str());
            break;
        case 4:
            cout<<"Syndics of the Drapers' Guild\n";
            system(d.c_str());
            break;
        case 5:
            cout<<"The Hundred Guilder Print\n";
            system(e.c_str());
            break;
        case 0:
            cout<<"\n\nPrevious Page \n\n";
            rembrandt();
            break;

        default :
            cout<<"\n\tUploading...\n";
    }
}
void Michelanglo(string image){
    system(image.c_str());
    cout<<"This is michel anglo!!!\n";
}
void Michelanglo(){
    cout << "(1)Michelanglo BIOGRAPHY\n";
    cout << "(2)Michelanglo ART\n ";
    cout << "(3)Previous Page \n";
    cout << "(4) EXIT\n";
    cout << "Enter Your Choice:\n";
    int ch;
    cin>>ch;
    switch (ch) {
        case 1:
            cout << "Michelanglo Biography\n";
            MichelangloBiography();
            break;
        case 2:
            cout << "Michelanglo Art\n";
            MichelangloArt();
            break;
        case 3:
            cout << "(3)Previous Page \n\n";
            VISITGALLERY();
            break;
        case 4:
            main();
            break;
        default :
            cout << "Uploading...\n";
    }

}
void MichelangloBiography(){
    cout << "Native name  : Michelangelo \n\n";
    cout << "Born :6 March 1475\n\n";
    cout << "Died: 18 February 1564\n\n";
    cout << "Nationality  : italy\n\n";
    cout << "Education	:\n"
            "University of Florence\n"
            "\n\n";
    cout << "Occupation:\nSculpture, painting, architecture, and poetry\n\n";
    cout<<" work: \t\n" "pieta \n\tDavid \n\t\t  \n\tSistine Chapel ceiling\t Moses  \n\t\tThe Last Judgment ";
    int ch;
    while (cin>>ch) {
        cout << "Enter Your Choice:\n";
        switch (ch) {

            case 1:
                cout << "(1)Previous Page \n\n";
                Michelanglo();
                break;
            case 0:
                cout << "(0) EXIT";
                VISITGALLERY();
                break;

            default :
                cout << "Uploading...\n";

        }
        getche();
    }
}
void MichelangloArt(){
    cout<<"(1) pieta\n";
    cout<<"(2)David\n";
    cout<<"(3)sistine chapel ceiling\n";
    cout<<"(4)moses\n";
    cout<<"(5)The Last Judgment\n";
    int ch;
    string a="start https://cdn.britannica.com/42/9642-050-B04B8F89/Pieta-Michelangelo-Vatican-City-St-Peters-Basilica.jpg?utm_source=pj-affiliate&utm_medium=pj&utm_campaign=kids-pj&clickId=4235534281";
    string b="start https://www.thoughtco.com/thmb/N7k01W6uAAjRaOOQu43Md5E0WHI=/1500x0/filters:no_upscale():max_bytes(150000):strip_icc()/SistineChapel-57ffd66e5f9b5805c2ac4916.jpg";
    string c="start https://artincontext.org/wp-content/uploads/2022/04/Moses-Michelangelo.jpg";
    cin>>ch;
    while(cin>>ch)
        switch(ch)
        {
            case 1:
                cout<<"pieta\n";
                system(a.c_str());
                break;
            case 2:
                cout<<"David\n";
                cout<<"paint 2";
                break;
            case 3:
                cout<<"sistine chapel ceiling\n";
                system(b.c_str());
                break;
            case 4:
                cout<<"moses\n";
                system(c.c_str());
                break;
            case 5:
                cout<<"the last judgment\n";
                cout<<"paint 5";
                break;
            case 0:
                cout<<"\n\nPrevious Page \n\n";
                Michelanglo();
                break;

            default :
                cout<<"\n\tUploading...\n";
        }
}
void PabloPicasso(string image){
    system(image.c_str());
    cout<<"This is pablo picasso!!!\n";
}
void PabloPicasso(){
    cout << "(1)PabloPicasso BIOGRAPHY\n";
    cout << "(2)PabloPicasso ART\n ";
    cout << "(3)Previous Page \n\n";
    cout << "(4) EXIT\n";
    cout << "Enter Your Choice:\n";
    int ch;
    cin>>ch;
    switch (ch) {
        case 1:
            cout << "PabloPicasso Biography\n";
            PabloPicassoBiography();
            break;
        case 2:
            cout << "PabloPicasso Art\n";
            PabloPicassoArt();
            break;
        case 3:
            cout << "(3)Previous Page \n\n";
            VISITGALLERY();
            break;
        case 4:
            main();
            break;
        default :
            cout << "Uploading...\n";
    }
}
void PabloPicassoBiography(){
    cout << "Native name  : Pablo Picasso \n\n";
    cout << "Born :25 October 1881 \n\n";
    cout << "Died: 8 April 1973\n\n";
    cout << "Nationality  : spain\n\n";
    cout << "Education	:\n"
            "\tReal Academia de Bellas Artes de San Fernando\n"
            "\n\n";
    cout << "Occupation:\t\n\n""\n""Painting, drawing, sculpture, printmaking, ceramics, stage design, writing\n\n";
    cout<<" work: \t\n" " la vie \n\t\tFamily of Saltimbanques \n\t\t  \n\t\tLes Demoiselles d'Avignon\t \tPortrait of Daniel-Henry Kahnweiler  \n\t\t\tGirl before a Mirror ";
    int ch;
    while (cin>>ch) {
        cout << "Enter Your Choice:\n";
        switch (ch) {

            case 1:
                cout << "(1)Previous Page \n\n";
                PabloPicasso();
                break;
            case 0:
                cout << "(0) EXIT";
                VISITGALLERY();
                break;

            default :
                cout << "Uploading...\n";

        }
        getche();
    }
}
void PabloPicassoArt(){
    cout<<"(1) la vie\n";
    cout<<"(2) Family of Saltimbanques\n";
    cout<<"(3) Les Demoiselles d'Avignon\n";
    cout<<"(4) Portrait of Daniel-Henry Kahnweiler\n";
    cout<<"(5) Girl before a Mirror\n";
    int ch;
    string a="start https://az334033.vo.msecnd.net/images-5/family-of-saltimbanques-pablo-picasso-1905-cd92fd38.jpg";
    string b="start https://media.mutualart.com/Images/2020_01/27/13/134158474/d7e85422-84d8-405a-b0ea-08d1d4a73cbd_570.Jpeg";
    string c="start https://cdn.kastatic.org/ka-perseus-images/b1e82292b1be1850191e8a6b9df50e95cbd46528.jpg";
    string d="start https://www.pablopicasso.net/images/Girl%20before%20a%20Mirror%20Pablo%20Picasso.jpg?ezimgfmt=rs:357x442/rscb5/ngcb5/notWebP";
    cin>>ch;
    while(cin>>ch)
        switch(ch)
        {
            case 1:
                cout<<"la vie\n";
                cout<<"paint 1";
                break;
            case 2:
                cout<<"Family of Saltimbanques\n";
                system(a.c_str());
                break;
            case 3:
                cout<<"Les Demoiselles d'Avignon \n";
                system(b.c_str());
                break;
            case 4:
                cout<<"Portrait of Daniel-Henry Kahnweiler \n";
                system(c.c_str());
                break;
            case 5:
                cout<<"Girl before a Mirror\n";
                system(d.c_str());
                break;
            case 0:
                cout<<"Previous Page \n\n";
                PabloPicasso();
                break;
            default :
                cout<<"\n\t\tUploading...\n";
        }
}
//-------------------------------------------------------------------------
int main() {                           //me
    ifstream file("C:\\Users\\20112\\CLionProjects\\untitled13\\intro.txt");
    string x;
    while (getline(file, x)) {
        cout << x << endl;
    }
    cout << "\t\tdo you want to know more  information about the museum?(y/n)";
    string n;
    cin >> n;
    museum m1(n);
    cout << "\n\t...::::\xB2\xB2  WELCOME TO ART GALLERY \xB2\xB2:::::....\n\n\n";
    cout << "MAIN MENU\n\n";

    cout << "(1)VISIT GALLERY\n";
    cout << "(2)FOR BUY\n";
    cout << "(3) add artist info\n";
    cout << "(4) EXIT\n";

    cout << "Enter Your Choice:";

    int ch;
    cin >> ch;
    string s;

    switch (ch) {
        case 1:
            VISITGALLERY();
            break;
        case 2:
            FORBUY();
            break;
        case 3:
            admin();
            break;
        case 4:
            main();
            break;
        default :
            cout << "Uploading...\n";
    }
    return 0;
}