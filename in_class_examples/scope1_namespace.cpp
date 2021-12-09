 #include "scope_fav_namespace.h"
      
void h()
{
    // these are all global

    // entire namespace of A as a DIRECTIVE
    using namespace A;  // brings A into current namespace 

    // a bit of namespace B as a declaration (overwrites other dogs)
    using B::dog;       // brings B's version of dog in

    // namespace conflict avoided!
    dog();              
    A::dog();             
}

int main(){
    h();
}