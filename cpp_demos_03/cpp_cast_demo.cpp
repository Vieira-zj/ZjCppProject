#include <stdio.h>

class CastTestParent
{
public:
    virtual void ShowMe() const
    {
        printf("This is parent.\n");
    }

    virtual ~CastTestParent() { return; }
};

class CastTestChild : public CastTestParent
{
public:
    virtual void ShowMe() const
    {
        printf("This is child.\n");
    }

    virtual ~CastTestChild() { return; }
};

//int main(void)
int cast_main(void)
{
    CastTestChild test_child;
    test_child.ShowMe();
    CastTestParent test_parent;
    test_parent.ShowMe();

    // Note: virtual function is just for pointer and reference
    CastTestParent child_to_parent = (CastTestParent)test_child;
    child_to_parent.ShowMe();

    // Error, dynamic_cast is only used for pointer and reference
//    CastTestParent child_to_parent_dyn = dynamic_cast<CastTestParent>(test_child);
//    child_to_parent_dyn.ShowMe();

    printf("\nCast By Pointer:\n");
    CastTestChild *p_child = new CastTestChild;
    p_child->ShowMe();
    CastTestParent *p_parent = new CastTestParent;
    p_parent->ShowMe();

    printf("\nDown Cast:\n");
    CastTestParent *p_child_to_parent = p_child;
    p_child_to_parent->ShowMe();

    printf("Down cast by static:\n");
    CastTestParent *p_static_parent = static_cast<CastTestParent *>(p_child);
    p_static_parent->ShowMe();

    printf("Down cast by dynamic:\n");
    CastTestParent *p_dyn_parent = dynamic_cast<CastTestParent *>(p_child);
    p_dyn_parent->ShowMe();

    printf("\nVoid * cast:\n");
    void *p_void = dynamic_cast<void *>(p_child);
    CastTestParent *p_void_child = (CastTestParent *)p_void;
    p_void_child->ShowMe();

    printf("\nUp Cast:\n");
    // Error
//    CastTestChild *p_parent_to_child = p_parent;
//    p_parent_to_child->ShowMe();

    printf("Up cast by ():\n");
    CastTestChild *p_cast_child = (CastTestChild *)p_parent;
    p_cast_child->ShowMe();

    printf("Up cast by static:\n");
    CastTestChild *p_static_child = static_cast<CastTestChild *>(p_parent);
    p_static_child->ShowMe();

    // Error for up cast by dynamic_cast
//    CastTestChild *p_dyn_child = dynamic_cast<CastTestChild *>(p_parent);
//    p_dyn_child->ShowMe();

    delete p_child;
    delete p_parent;

    return 0;
}
