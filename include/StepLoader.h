#ifndef STEPLOADER_H
#define STEPLOADER_H
#include <StepPart.h>
#include<map>
#include<string>
class StepLoader

{
    public:
        StepLoader();
        virtual ~StepLoader();
        void Load(std::string file);

    protected:
       std::map<std::string,StepPart> parts;
    private:
        void ParseString(std::string step);
};

#endif // STEPLOADER_H
