#ifndef MEMBER_H
#define MEMBER_H

#include <User.h>


class Member : public User
{
    public:
        int     role;
        string  password;

        Member();
        virtual ~Member();

    protected:

    private:
};

#endif // MEMBER_H
