#include <iostream>


struct A
{
    int get()
    {
        return 5;
    }
};

    static void requestWork(A& program,size_t bytes)
    {

    }
    template<typename T, typename... Args>
    static void requestWork( A& program,size_t bytes,T t1, Args... args)
    {
        //std::cout << opaqueData.size()/28 << "\n";
        //requestWork(sprite,program,bytes,args...);
        std::cout << t1 << "\n";
        if (program.get() == bytes)
        {
            requestWork(program,bytes + sizeof(t1),args...); //terminate early if too many arguments were provided
        }
        else
        {
            requestWork(program,bytes + sizeof(t1), args...);
        }
    }
int main(int args, char* argsc[])
{
            A a;
            requestWork(a,0,0,0,0,0);
            //SpriteManager::request(diag,betterProgram,rect,0,0,0);

    return 0;
}
