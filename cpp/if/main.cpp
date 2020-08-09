#include <iostream>
#include<vector>
using namespace std;
bool isEven(int number){

    if(number % 2 == 0){
        return true;
    }
       return false;



}
bool isEven1(int number){

    bool isEven = false;

    if(number % 2 == 0){
        isEven = true;
    }

    return isEven;

}
bool isEven2(auto number){

    if(isINT(number){
        bool isEven = false;
        if(number % 2 == 0){
            isEven = true;
        }
        return isEven;

    }else{
        return "err";
    }


}
bool isAmalGar(auto input){

    if(isCHAR(input)){
       if(input == '/' || input == '*' || input == '-' || input == '+'){
        return true;
       }
       return false;

    }else{
        return "err";
    }


}
auto CAL(auto leftRexeg ; auto rightRexeg ; auto amalGar){

    if( isINT(leftRexeg) &&
       isINT(rightRexeg) &&
       isAmalGar(amalGar)
       ){
            //

       }else{
            vector<int> errs;

           if(!isINT(leftRexeg)){
            errs.push_back(1);
           }
           if(!isINT(rightRexeg)){
            errs.push_back(2);
           }
           if(!isAmalGar(amalGar)){
            errs.push_back(3);
           }
           return errs;


       }

}

auto CAL1(auto leftRexeg ; auto rightRexeg ; auto amalGar){
     vector<int> errs;
    if( isINT(leftRexeg)

       ){
           if(isINT(rightRexeg)){
                if(isAmalGar(amalGar)){

                    //
                }else{
                    return "err 1";
                }
           }else{
             errs.push_back(3);
           }

       }else{



            errs.push_back(1);


           return errs;


       }

}
auto CAL1(auto leftRexeg ; auto rightRexeg ; auto amalGar){
     vector<int> errs;
     if(!isINT(leftRexeg)){
            errs.push_back(1);
    }
    if(!isINT(rightRexeg)){
            errs.push_back(2);
    }
    if(!isAmalGar(amalGar)){
            errs.push_back(3);
    }
    if(isEmpty(errs)){


    }else{
    return errs
    }



}



int main()
{
    if(AB){ // AB -> true


    }else if( CD){ // !AB && CD -> true

    }else{ // !AB && !CD -> true

    }

    if ( AB){ // AB -> true

    }
    if(CD && !AB){ // CD -> true

    }


    return 0;
}
