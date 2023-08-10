#include "tard.h"
#include <stdlib.h>
#include <time.h>

const char *IDEA_1 = "We all know lemons are acidic, so why not harness that power for vaccines? "
                     "Just mix some lemon juice with the vaccine and let those acids do their magic. "
                     "I mean, lemons clean stuff, right?";
const char *IDEA_2 = "Treadmills are all about movement, so why not make them move even faster? "
                     "Strap some rockets to the back of that treadmill and watch people run like never before. "
                     "Safety? Nah, who needs it?";
const char *IDEA_3 = "Ice cream is delicious, and it's got dairy, so it must be healthy, right? "
                     "Start a new diet trend where you eat nothing but ice cream. "
                     "Vitamins and minerals? Pfft, who needs 'em?";
const char *IDEA_4 = "Gasoline is expensive, but balloons? They're cheap! "
                     "Attach a bunch of balloons to your car and let physics do the rest. "
                     "Just hope you're not going uphill or facing any wind.";
const char *IDEA_5 = "Need more space in your office? How about inflatable desks and chairs? "
                     "Just don't bring any sharp objects around, and you'll be fine. "
                     "Who needs stability when you can bounce around during meetings?";

void init_tard()
{
    srand(time(NULL));
}

const char *tard()
{
    int idea = (rand() % 4) + 1;
    switch (idea) {
        case 2:
            return IDEA_2;
        case 3:
            return IDEA_3;
        case 4:
            return IDEA_4;
        case 5:
            return IDEA_5;
        default:
            return IDEA_1;
    }
}