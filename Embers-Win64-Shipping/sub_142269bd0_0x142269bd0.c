// 函数: sub_142269bd0
// 地址: 0x142269bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
char* result

if (rdi == 0)
    result.b = 0
else
    int64_t* rax_1 = (*(*rdi + 0xe0))(rdi)
    
    if (rax_1 != 0)
        (*(*rax_1 + 0x348))(rax_1, 
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysicsInterfacePhysX."
        "cpp", 
            0x953)
    
    void arg_8
    
    if ((*(*(*rdi + 0x80))(rdi, &arg_8) & 1) != 0)
        if (rax_1 != 0)
            (*(*rax_1 + 0x350))(rax_1)
        
        result.b = 0
    else
        (*arg2)(*(arg2 + 8), arg1)
        
        if (rax_1 != 0)
            (*(*rax_1 + 0x350))(rax_1)
        
        result.b = 1

return result
