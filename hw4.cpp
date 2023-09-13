
#include <iostream>
using namespace std;

class Human {
public:

    int HairLength = 40; //сантиметри 
    int ArmFingers = 10;
    string EyeColor = "green";
    string HairColor = "red";
    string Name;
    string Gender;

private:
    int Hunger;
    int Health;
    double Happiness;
    int Fatigue; //втомленність 
    int Hotness;
    double Skill;

public:
    void SetHunger(int h)
    {
        if (h > 0 && h <= 50)
        {
            Hunger = h;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень голоду (1 - 50)";
        }
    }
    int GetHunger() const
    {
        return Hunger;
    }

    void SetHealth(int heal)
    {
        if (heal > 0 && heal <= 100)
        {
            Health = heal;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень здоров'я (1 - 100)";
        }
    }
    int GetHealth() const
    {
        return Health;
    }

    void SetHappiness(double hap)
    {
        if (hap > 0 && hap <= 100)
        {
            Happiness = hap;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень радості (1 - 100)";
        }
    }
    double GetHappiness() const
    {
        return Happiness;
    }

    void SetFatigue(int f)
    {
        if (f > 0 && f <= 60)
        {
            Fatigue = f;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень втомленності (1 - 60)";
        }
    }
    int GetFatigue() const
    {
        return Fatigue;
    }

    void SetHotness(int hot)
    {
        if (hot > 0 && hot <= 100)
        {
            Hotness = hot;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень жаркості (1 - 100)";
        }
    }
    int GetHotness() const
    {
        return Hotness;
    }

    void SetSkill(double s)
    {
        if (s > 0 && s <= 1000)
        {
            Skill = s;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень досвіду (1 - 1000)";
        }
    }
    int GetSkill() const
    {
        return Skill;
    }

public:
    void Talk(string phrase) {
        if (Fatigue < 80 && Happiness >= 5) {
            cout << phrase;
            Happiness++;
            Fatigue++;
        }
        if (Fatigue >= 80 && Happiness < 5) {
            cout << Name << " не бажає говорити";
        }
    }
    void PlayGuitar(Guitar& what) {
        if (Fatigue < 25 && Health >= 10) {
            what.playGuitar();
            Skill++;
            Happiness++;
            Fatigue++;
        }
        if (Fatigue >= 15 && Health < 10)
        {
            cout << Name << " занадто втомлені";
        }
    }
    void Eat(string meal) {
        if (Hunger < 10) {
            cout << Name << " з'їв " << meal;
            Hunger--;
            Happiness++;
            Health++;
        }
        if (Hunger >= 10)
        {
            cout << Name << " ситий";
        }
    }
    void Read(Book& what) {
        if (Fatigue < 40) {
            what.ReadBook();
            Happiness++;
            Fatigue--;
        }
        if (Fatigue > 40) {
            cout << Name << " занадто втомлені";
        }
    }
    void OpenWindow(Room& what) {
        cout << "Дуже спекотно ";
        what.WindowOpen();
        Hotness--;
    }
    void PetCat(Cat& who) {
        cout << "Яка чудова кішка! ";
        who.Mrrr();
        Health++;
        Happiness++;
        Fatigue--;
    }
};


class Room {
public:

    int Length = 10; //метри 
    int Width = 7;
    string WallColor = "pink";
    int Height = 4;
    string DoorColor = "white";
    int DustLevel;

private:
    double Illumination;
    int Freshness;
    int Comfort;
    double Noisiness;
    string Name;

public:

    void SetName(string n)
    {
        if (n != "Ім'я людини")
        {
            Name = n;
        }
        else
        {
            cout << "Ви не можете встановити таке ім'я для кімнати";
        }
    }
    string GetName() const
    {
        return Name;
    }

    void SetIllumination(double i)
    {
        if (i > 0 && i <= 200)
        {
            Illumination = i;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень освітлення (1 - 200)";
        }
    }
    double GetIllumination() const
    {
        return Illumination;
    }

    void SetFreshness(int f)
    {
        if (f > 0 && f <= 500)
        {
            Freshness = f;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень свіжості (1 - 500)";
        }
    }
    int GetFreshness() const
    {
        return Freshness;
    }

    void SetComfort(int c)
    {
        if (c > 0 && c <= 100)
        {
            Comfort = c;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень комфорту (1 - 100)";
        }
    }
    int GetComfort() const
    {
        return Comfort;
    }

    void SetNoisiness(double n)
    {
        if (n >= 0 && n <= 10)
        {
            Noisiness = n;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень шуму (0 - 10)";
        }
    }
    double GetNoisiness() const
    {
        return Noisiness;
    }

public:
    void DoorOpen() {
        cout << "Двері відкриті";
        DustLevel++;
        Freshness++;
        Comfort--;
    }
    void WindowOpen() {
        cout << "Вікна відкрито";
        Illumination++;
        Freshness++;
        Noisiness++;
    }
    void LightOn() {
        if (Illumination <= 10) {
            cout << "Світло ввімкнено";
            Illumination++;
            Comfort++;
        }
        if (Illumination > 10)
        {
            cout << "В кімнаті достатньо світла";
        }
    }
    void CurtainClosed() {
        if (Illumination > 30) {
            cout << "Штори закрито";
            Comfort++;
            Illumination--;
        }
        if (Illumination <= 30)
        {
            cout << "Занадто темно для закритих штор";
        }
    }
    void TV() {
        cout << "Телевізор увімкнено";
        Comfort++;
        Illumination++;
        Noisiness++;
    }
};


class Cat {
public:

    int Hunger;
    int Health;
    int LegAmount = 4;
    int EarsAmount = 2;
    string SecondColor = "black";
    string Name;

private:
    string Gender;
    string Color;
    int Happiness;
    int Fatigue; //втомленність 
    int Irritability; //роздратування

public:

    void SetGender(string g)
    {
        if (g == "киця" || g == "кіт")
        {
            Gender = g;
        }
        else
        {
            cout << "Ви не можете встановити таку стать (киця або кіт)";
        }
    }
    string GetGender() const
    {
        return Gender;
    }

    void SetColor(string c)
    {
        if (c == "білий" || c == "чорний" || c == "сірий" || c == "коричневий" || c == "пісочний" || c == "плямистий")
        {
            Color = c;
        }
        else
        {
            cout << "Ви не можете встановити такий колір (або білий, або чорний, або сірий, або коричневий, або пісочний, або плямистий)";
        }
    }
    string GetColor() const
    {
        return Color;
    }

    void SetHappiness(int h)
    {
        if (h > 0 && h <= 100)
        {
            Happiness = h;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень радості (1 - 100)";
        }
    }
    int GetHappiness() const
    {
        return Happiness;
    }

    void SetFatigue(int f)
    {
        if (f > 0 && f <= 60)
        {
            Fatigue = f;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень втомленності (1 - 60)";
        }
    }
    int GetFatigue() const
    {
        return Fatigue;
    }

    void SetIrritability(int i)
    {
        if (i > 0 && i <= 40)
        {
            Irritability = i;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень роздратування (1 - 40)";
        }
    }
    int GetIrritability() const
    {
        return Irritability;
    }

public:
    void Mrrr() {
        if (Happiness >= 30) {
            cout << Name << "Кіт мурчить";
            Happiness++;
            Health++;
            Fatigue--;
            Irritability--;
        }
        if (Happiness < 30)
        {
            cout << Name << " занадто сумний";
        }
    }
    void Eat(string meal) {
        if (Hunger < 10) {
            cout << "Кіт їсть " << meal;
            Health++;
            Fatigue++;
            Irritability--;
            Happiness++;
            Hunger--;
        }
        if (Hunger >= 10)
        {
            cout << Name << " ситий";
        }
    }
    void Stretch() {
        cout << Name << " потягнувся";
        Fatigue++;
        Irritability--;
    }
    void OpenDoor(Room& what) {
        if (Fatigue < 30) {
            what.DoorOpen();
            Fatigue++;
        }
        if (Fatigue >= 30)
        {
            cout << Name << " занадто втомленний";
        }
    }
    void Hiss() {
        if (Irritability >= 30 && Happiness < 10) {
            cout << Name << " шипить";
            Fatigue++;
            Irritability++;
            Happiness--;
        }
        if (Irritability < 30 && Happiness >= 10) {
            cout << Name << " занадто задоволений щоб шипіти";
        }
    }
};


class Book {
public:

    int PagesAmount = 250;
    string BookName = "Тарантула";
    string Author = "Боб Ділан";
    string PublishingHouse = "Macmillan & Scribner";

private:
    int Year;
    int Wearness;
    int Interestingness;
    int Health;
    int Waiting;

public:
    void SetYear(int y)
    {
        if (y > 0 && y <= 2023)
        {
            Year = y;
        }
        else
        {
            cout << "Ви не можете встановити такий рік (від 1 до 2023)";
        }
    }
    int GetYear() const
    {
        return Year;
    }

    void SetHealth(int heal)
    {
        if (heal > 0 && heal <= 1000)
        {
            Health = heal;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень здоров'я (1 - 1000)";
        }
    }
    int GetHealth() const
    {
        return Health;
    }

    void SetWearness(int w)
    {
        if (w >= 0 && w <= 100)
        {
            Wearness = w;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень використонності (0 - 100)";
        }
    }
    int GetWearness() const
    {
        return Wearness;
    }

    void SetInterestingness(int i)
    {
        if (i >= 0 && i <= 1000)
        {
            Interestingness = i;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень зацікавленності (0 - 1000)";
        }
    }
    int GetInterestingness() const
    {
        return Interestingness;
    }

    void SetWaiting(int w)
    {
        if (w > 0 && w <= 70)
        {
            Waiting = w;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень очікування (1 - 70)";
        }
    }
    int GetWaiting() const
    {
        return Waiting;
    }

public:
    void ReadBook() {
        if (Interestingness >= 50) {
            cout << "Ви прочли книгу";
            Interestingness++;
        }
        if (Interestingness < 50) {
            cout << "Вам не вистачає зацікавленності";
        }
    }
    void PutBookmark(string num_page) {
        cout << "Ви встановили закладку на " << num_page << " сторінці";
        Interestingness++;
        Waiting++;
    }
    void CoffeeSpot() {
        cout << "Ви пролили на книгу кофе";
        Health--;
        Wearness++;
    }
    void Wipe() {
        if (Health <= 980) {
            cout << "Книгу протерто";
            Health++;
        }
        if (Health > 980)
        {
            cout << "Книжку непотрібно протирати";
        }
    }
    void MakeNote(string note) {
        cout << "Ви залишили замітку: " << note;
        Interestingness++;
        Wearness++;
    }
};


class Guitar {
public:

    int StringAmount = 6;
    int FretAmount = 15;
    int BeltAmount = 1;
    string GuitarColor;
    string CompanyName;

private:
    int Wearness;
    double Interestingness;
    int Health;
    double Skill;
    int Noisiness;

public:

    void SetWearness(int w)
    {
        if (w >= 0 && w <= 100)
        {
            Wearness = w;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень використонності (0 - 100)";
        }
    }
    int GetWearness() const
    {
        return Wearness;
    }

    void SetInterestingness(double i)
    {
        if (i >= 0 && i <= 1000)
        {
            Interestingness = i;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень зацікавленності (0 - 1000)";
        }
    }
    double GetInterestingness() const
    {
        return Interestingness;
    }

    void SetHealth(int heal)
    {
        if (heal > 0 && heal <= 1000)
        {
            Health = heal;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень здоров'я (1 - 1000)";
        }
    }
    int GetHealth() const
    {
        return Health;
    }

    void SetSkill(double s)
    {
        if (s > 0 && s <= 1000)
        {
            Skill = s;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень досвіду (1 - 1000)";
        }
    }
    int GetSkill() const
    {
        return Skill;
    }

    void SetNoisiness(double n)
    {
        if (n >= 0 && n <= 10)
        {
            Noisiness = n;
        }
        else
        {
            cout << "Ви не можете встановити такий рівень шуму (0 - 10)";
        }
    }
    double GetNoisiness() const
    {
        return Noisiness;
    }

public:
    void TuneGuitar() {
        cout << "Гітару налаштовано";
        Health++;
        Interestingness++;
    }
    void playGuitar() {
        if (Skill > 20) {
            cout << "Гітара грає";
            Wearness++;
            Interestingness++;
            Skill++;
            Noisiness++;
        }
        if (Skill <= 20)
        {
            cout << "Вам не вистачає вміння грати";
        }
    }
    void ChangeString(string number_of_string) {
        if (Wearness > 60) {
            cout << number_of_string << " замінено";
            Health++;
            Wearness--;
        }
        if (Wearness <= 60) {
            cout << "Міняти струни непотрібно, спробуйте Налаштувати гітару";
        }
    }
    void PracticeGuitar() {
        cout << "Приктика на гітарі";
        Interestingness++;
        Skill++;
        Noisiness++;
    }
    void PutCapo(string number_of_fret) {
        cout << "Капо встановлено на " << number_of_fret << "лад";
        Skill++;
    }
    void PutInCase() {
        cout << "Гітара в чохлі";
        Wearness--;
        Health++;
    }
};

int main()
{
    Human h;
    h.Gender = "non-binary";
    h.Name = "Nick";
    h.SetHunger(10);
    h.SetHealth(20);
    h.SetHappiness(10);
    h.SetFatigue(10);
    h.SetHotness(100);
    h.SetSkill(0);

    Human v;
    h.Gender = "Female";
    v.Name = "Martha";
    h.SetHunger(10);
    h.SetHealth(20);
    h.SetHappiness(30);
    h.SetFatigue(5);
    h.SetHotness(-10);
    h.SetSkill(100);

    Cat c;
    c.SetGender("киця");
    c.SetColor("коричневий");
    c.Name = "Sima";
    c.Hunger = 10;
    c.Health = 20;
    c.SetHappiness(5);
    c.SetFatigue(0);
    c.SetIrritability(10);

    Room r;
    r.SetName("Bedroom");
    r.SetIllumination(150);
    r.SetFreshness(-10);
    r.SetComfort(5);
    r.SetNoisiness(0);
    r.DustLevel = 23;


    Guitar g;
    g.GuitarColor = "yellow";
    g.CompanyName = "Gibson";
    g.SetWearness(0);
    g.SetInterestingness(100);
    g.SetHealth(1000);
    g.SetSkill(0);
    g.SetNoisiness(0);

    Book b;
    b.SetWearness(0);
    b.SetInterestingness(1000);
    b.SetHealth(1000);
    b.SetWaiting(10);

    h.PetCat(c);
    h.Read(b);
    h.PlayGuitar(g);
    h.Eat("котлети");
    h.OpenWindow(r);
    h.Talk("Привіт!");

    c.OpenDoor(r);
    c.Eat("риба");
    c.Hiss();
    c.Stretch();
    c.Mrrr();

    r.CurtainClosed();
    r.DoorOpen();
    r.LightOn();
    r.TV();
    r.WindowOpen();
}