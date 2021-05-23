//This is about getters and setters
#include <iostream>

class Movie {
        std::string strRating;
    public:
        std::string strTitle;
        std::string strDirector;
        
        Movie(std::string strpTitle, std::string strpDirector, std::string strpRating) {
            strTitle = strpTitle;
            strDirector = strpDirector;
            setRating(strpRating);
        }
        void setRating(std::string strpRating){
            if (strpRating == "G" || strpRating == "PG" || strpRating == "PG-13" ||strpRating == "R" ||strpRating == "NR"){
            strRating = strpRating;
            }else {
                std::cout << "Invalid Rating, rating is set to NR by default." << std::endl;
                strRating = "NR";
            }
        }
        std::string getRating() {
            return strRating;
        }
};

int main() {
    Movie objAvengers("The Avengers", "Joss Whedon", "PG-13");

    std::cout << objAvengers.strTitle << ", Directed by " << objAvengers.strDirector << " is rated " << objAvengers.getRating() << std::endl;

    return 0;   
}