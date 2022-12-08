#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
class Profile {
  public:
    //set things up
    std::string name;
    int age;
    std::string city;
    std::string gender;
    std::vector<std::string> hobbies;
    std::vector<std::string> preferences;
    std::vector<std::string> pronouns;
  
  public:
    //make it so Profile must have name, age, city, and your own gender
    Profile(std::string new_name, int new_age, std::string new_city, std::string new_gender);
    //print out information about the person
    void view_bio() {
      std::cout << name << " is a " << age << " year old " << gender << " who lives in " << city << ". \n"; 
      if(pronouns.size() > 0) {
        std::cout << "The pronouns " << name << " uses are: \n";
        for (std::string noun : pronouns) {
          std::cout << noun << "\n";
        }
      }
      if(hobbies.size() > 0) {
      std::cout << "Their hobbies include:\n";
      for (std::string hobby : hobbies) {
        std::cout << hobby << "\n";
      }
      }
    }
    //add to items that have multiple things
    void add_hobby(std::string new_hobby) {
      hobbies.push_back(new_hobby);
    }
    void add_preference(std::string new_preference) {
      preferences.push_back(new_preference);
    }
    void add_pronouns(std::string new_pronouns) {
      pronouns.push_back(new_pronouns);
    }
    //creepy dating
    int max_age() {
      int max = (age-7)*2;
      return max;
    }
    int min_age() {
      int min = age/2+7;
      return min;
    }
};
 
//make it so Profile creation must have these things
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_gender){
      name = new_name;
      age = new_age;
      city=new_city;
      gender=new_gender;
    };
 
//Compare if two Profiles are compatible at face value
bool compare(Profile date1, Profile date2) {
    if (!(date1.age > date2.min_age() && date1.age < date2.max_age() && date2.age > date1.min_age() && date2.age < date1.max_age())){
      return false;
    }
    if (date1.preferences.size() == 0 && date2.preferences.size() == 0){
      return true;
      }
    else if (date1.preferences.size() > 0 && date2.preferences.size() == 0){
      for (std::string pref : date1.preferences){
        if(pref == date2.gender){
          return true;
        }}
        return false;
        }
    else if (date2.preferences.size() > 0 && date1.preferences.size() == 0){
      for (std::string pref : date2.preferences){
        if(pref == date1.gender){
          return true;
        }}
        return false;
        }
    else {
      for (std::string pref : date1.preferences){
        if(pref == date2.gender){
          for (std::string ferp : date2.preferences){
            if(ferp == date1.gender){
              return true;
              }}}}
        return false;
      }
      return false;
    };
 
struct NODE
{
    string data;
    NODE *next;
};

int main() {
  //OTHER USER DATABASES
  Profile pterodactyl("pterodactyl", 21, "Boston", "Woman");
  pterodactyl.add_hobby("seeing the world from a bird’s eye view");
  pterodactyl.add_preference("Man");
  pterodactyl.add_preference("Woman");
  pterodactyl.add_pronouns("she/her");
  Profile silvisaurus("silvisaurus", 23, "Eugene", "Man");
  silvisaurus.add_hobby("gathering for food");
  silvisaurus.add_preference("Man");
  silvisaurus.add_pronouns("he/him");
  Profile iguanodone("iguanodone", 21, "Boston", "Woman");
  iguanodone.add_hobby("hunting for food");
  iguanodone.add_preference("Woman");
  iguanodone.add_preference("Man");
  iguanodone.add_pronouns("she/her");
  Profile brontosaurus("brontosaurus", 21, "Boston", "Woman");
  brontosaurus.add_hobby("long walks along the river bank");
  brontosaurus.add_preference("Man");
  brontosaurus.add_pronouns("she/her");
  Profile gallimimus("gallimimus", 34, "Sydney", "Man");
  gallimimus.add_hobby("lurking along the river bed");
  gallimimus.add_preference("Man");
  gallimimus.add_pronouns("he/him");
  Profile ichthyosaurus("ichthyosaurus", 22, "San Francisco", "Man");
  ichthyosaurus.add_hobby("pretending to be a shark in freshwater");
  ichthyosaurus.add_preference("Man");
  ichthyosaurus.add_pronouns("he/they");
  Profile mosasaurus("mosasaurus", 30, "Mercury", "Nonbinary");
  mosasaurus.add_hobby("waiting for other to stop and drink in my lake");
  mosasaurus.add_preference("Man");
  mosasaurus.add_preference("Woman");
  mosasaurus.add_preference("Nonbinary");
  mosasaurus.add_pronouns("they/them");
  Profile diplodocus("diplodocus", 26, "Akron", "Nonbinary");
  diplodocus.add_hobby("eating the top bushel of leaves on trees");
  diplodocus.add_preference("Man");
  diplodocus.add_preference("Woman");
  diplodocus.add_pronouns("she/they");
  Profile tyrannosaurus("tyrannosaurus", 19, "Redmond", "Man");
  tyrannosaurus.add_hobby("hunting creatures walking along the river bank");
  tyrannosaurus.add_preference("Woman");
  tyrannosaurus.add_pronouns("why?");
  Profile styracosaurus("styracosaurus", 21, "Boston", "Woman");
  styracosaurus.add_hobby("chasing others through the forest");
  styracosaurus.add_preference("Man");
  styracosaurus.add_preference("Woman");
  styracosaurus.add_pronouns("she/her");
  Profile baryonyx("baryonyx", 23, "Eugene", "Man");
  baryonyx.add_hobby("stomping in the mud");
  baryonyx.add_preference("Man");
  baryonyx.add_pronouns("he/him");
  Profile raptor("raptor", 21, "Boston", "Woman");
  raptor.add_hobby("bouncing rocks off sleeping stegos");
  raptor.add_preference("Woman");
  raptor.add_preference("Man");
  raptor.add_pronouns("she/her");
  Profile stegosaurus("stegosaurus", 21, "Boston", "Woman");
  stegosaurus.add_hobby("picking fruits from bushes");
  stegosaurus.add_preference("Man");
  stegosaurus.add_pronouns("she/her");
  Profile carcontarus("carcontarus", 34, "Sydney", "Man");
  carcontarus.add_hobby("napping in tall grass");
  carcontarus.add_preference("Man");
  carcontarus.add_pronouns("he/him");
  Profile isanosaurus("isanosaurus", 22, "San Francisco", "Man");
  isanosaurus.add_hobby("stomping in the mud");
  isanosaurus.add_preference("Man");
  isanosaurus.add_pronouns("he/they");
  Profile ankilosaurus("ankilosaurus", 30, "Mercury", "Nonbinary");
  ankilosaurus.add_hobby("whipping my tail back and forth");
  ankilosaurus.add_preference("Man");
  ankilosaurus.add_preference("Woman");
  ankilosaurus.add_preference("Nonbinary");
  ankilosaurus.add_pronouns("they/them");
  Profile brachiosaurus("brachiosaurus", 26, "Akron", "Nonbinary");
  brachiosaurus.add_hobby("whipping my neck back and forth");
  brachiosaurus.add_preference("Man");
  brachiosaurus.add_preference("Woman");
  brachiosaurus.add_pronouns("she/they");
  Profile gertrude("gertrude", 19, "Redmond", "Woman");
  gertrude.add_hobby("screaming in fear because of the dinosaurs");
  gertrude.add_preference("Woman");
  gertrude.add_pronouns("help");
  Profile online[18] = {pterodactyl, silvisaurus, iguanodone, brontosaurus, gallimimus, ichthyosaurus, mosasaurus, diplodocus, tyrannosaurus, styracosaurus, baryonyx, raptor, stegosaurus, carcontarus, isanosaurus, ankilosaurus, brachiosaurus, gertrude};

  //Instructions
  cout << "Welcome to dino dating! Don't worry, there's no one else really here so your social anxiety can relax. Let's get started by making you a profile\n";
  //get user's profile
  cout << "What is your name?\n";
  string tempn;
  cin >> tempn;
  cout << "What is your age?\n";
  int tempa;
  cin >> tempa;
  cout << "What city do you live in?\n";
  string tempc;
  cin >> tempc;
  cout << "What is your gender identity?\n";
  string tempg;
  cin >> tempg;
  Profile user(tempn, tempa, tempc, tempg);
  cout << "This is what your profile looks like so far!\n";
  user.view_bio();
  //Get user pronoun
  string answerp = " ";
  do {
    cout << "What are your pronouns?\n";
    string tempp;
    cin >> tempp;
    user.add_pronouns(tempp);
    cout << "Would you like to add anymore? Type \"NO\" if not. Type anything else to be prompted to add another.\n";
    cin >> answerp;
  } while (answerp != "NO");
  //get user preferences
  string answerpr = " ";
  do {
    cout << "What is a gender you're attracted to?\n";
    string temppr;
    cin >> temppr;
    user.add_preference(temppr);
    cout << "Would you like to add anymore? Type \"NO\" if not. Type anything else to be prompted to add another.\n";
    cin >> answerpr;
  } while (answerpr != "NO");
  //get user hobby
  string answerh = " ";
  do {
    cout << "What is one of your hobbies?\n";
    string temph;
    cin >> temph;
    user.add_hobby(temph);
    cout << "Would you like to add anymore? Type \"NO\" if not. Type anything else to be prompted to add another.\n";
    cin >> answerh;
  } while (answerh != "NO");
  cout << "Alright! This is what your profile is looking like now\n";
  user.view_bio();
  //backhalf instructions
  cout << "Now that your profile is set up, we can start swiping! We're looking through our list of candidates who are age appropriate and share your dating preferences!\n";
  cout << "If you like their profile, type \"YES\" to save it! If you don't like their profile, say \"NO\". If you ever want to stop swiping, type \"STOP\".\n";
  cout << "Ready? Let's start!\n";
  //Linked list set up
  NODE *start=NULL,*ptr,*temp;
  //SWIPING LOOP
  string response = " ";
  bool backup = false;
  for (Profile prof: online){
    while (response != "STOP" && backup == false) {
      if (compare(user, prof)){
      prof.view_bio();
      cout << "YES, NO, or STOP?\n";
      cin >> response;
      while (response != "YES" && response != "NO" && response != "STOP"){
        cout << "Try again- YES, NO, or STOP?\n";
        cin >> response;
      }
      if (response == "YES"){
        cout << "***you said yes***\n";
        ptr = new NODE;
        ptr->data=prof.name;
        ptr->next=NULL;
        if(start==NULL){
            start=ptr;}
        else
        {
            temp=start;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=ptr;
        }
      }
      else if (response == "NO"){
        cout << "***you said no***\n";
      }
      else {
        cout << "***simulation ended***\n";
        response = "STOP";
        backup = true;
      }
  }
  }
  }
  cout << "Great job! You matched with: \n";
  temp = start;
    while ( temp )
        {
            cout << temp->data << " \n";
            temp = temp->next;
        }
    cout << "Thanks for playing!";
}
