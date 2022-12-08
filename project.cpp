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
    Profile mary("Mary", 21, "Boston", "Woman");
  mary.add_hobby("sewing");
  mary.add_hobby("video game");
  mary.add_preference("Man");
  mary.add_preference("Woman");
  mary.add_pronouns("she/her");
  Profile ray("Ray", 23, "Eugene", "Man");
  ray.add_hobby("manspreading");
  ray.add_preference("Man");
  ray.add_pronouns("he/him");
  Profile sierra("Sierra", 21, "Boston", "Woman");
  sierra.add_hobby("witch");
  sierra.add_preference("Woman");
  sierra.add_preference("Man");
  sierra.add_pronouns("she/her");
  Profile jenny("Jenny", 21, "Boston", "Woman");
  jenny.add_hobby("studying");
  jenny.add_preference("Man");
  jenny.add_pronouns("she/her");
  Profile matthew("Matthew", 34, "Sydney", "Man");
  matthew.add_hobby("Knitting");
  matthew.add_preference("Man");
  matthew.add_pronouns("he/him");
  Profile steph("Steph", 22, "San Francisco", "Man");
  steph.add_hobby("Hiking");
  steph.add_preference("Man");
  steph.add_pronouns("he/they");
  Profile glorp("Glorp", 30, "Mercury", "Nonbinary");
  glorp.add_hobby("conquest");
  glorp.add_preference("Man");
  glorp.add_preference("Woman");
  glorp.add_preference("Nonbinary");
  glorp.add_pronouns("they/them");
  Profile zoe("Zoe", 26, "Akron", "Nonbinary");
  zoe.add_hobby("Racing");
  zoe.add_preference("Man");
  zoe.add_preference("Woman");
  zoe.add_pronouns("she/they");
  Profile martin("Martin", 19, "Redmond", "Man");
  martin.add_hobby("Fishing");
  martin.add_preference("Woman");
  martin.add_pronouns("why?");
  Profile charlyyz("charlyyz", 21, "Boston", "Woman");
  charlyyz.add_hobby("sewing");
  charlyyz.add_hobby("video game");
  charlyyz.add_preference("Man");
  charlyyz.add_preference("Woman");
  charlyyz.add_pronouns("she/her");
  Profile keghl("keghl", 23, "Eugene", "Man");
  keghl.add_hobby("manspreading");
  keghl.add_preference("Man");
  keghl.add_pronouns("he/him");
  Profile samson("samson", 21, "Boston", "Woman");
  samson.add_hobby("witch");
  samson.add_preference("Woman");
  samson.add_preference("Man");
  samson.add_pronouns("she/her");
  Profile kendrique("kendrique", 21, "Boston", "Woman");
  kendrique.add_hobby("studying");
  kendrique.add_preference("Man");
  kendrique.add_pronouns("she/her");
  Profile zaltan("zaltan", 34, "Sydney", "Man");
  zaltan.add_hobby("Knitting");
  zaltan.add_preference("Man");
  zaltan.add_pronouns("he/him");
  Profile stephan("stephan", 22, "San Francisco", "Man");
  stephan.add_hobby("Hiking");
  stephan.add_preference("Man");
  stephan.add_pronouns("he/they");
  Profile megan("megan", 30, "Mercury", "Nonbinary");
  megan.add_hobby("conquest");
  megan.add_preference("Man");
  megan.add_preference("Woman");
  megan.add_preference("Nonbinary");
  megan.add_pronouns("they/them");
  Profile biatric("biatric", 26, "Akron", "Nonbinary");
  biatric.add_hobby("Racing");
  biatric.add_preference("Man");
  biatric.add_preference("Woman");
  biatric.add_pronouns("she/they");
  Profile gertrude("gertrude", 19, "Redmond", "Man");
  gertrude.add_hobby("Fishing");
  gertrude.add_preference("Woman");
  gertrude.add_pronouns("why?");
  Profile online[18] = {mary, ray, sierra, jenny, matthew, steph, glorp, zoe, martin, charlyyz, keghl, samson, kendrique, zaltan, stephan, megan, biatric, gertrude};

  //Instructions
  cout << "Welcome to fake tinder! Don't worry, there's no one else really here so your social anxiety can relax. Let's get started by making you a profile\n";
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
  while (response != "STOP" && backup == false) {
    for (Profile prof: online){
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
