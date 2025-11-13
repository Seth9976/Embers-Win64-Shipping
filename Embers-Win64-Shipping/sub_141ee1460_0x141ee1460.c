// 函数: sub_141ee1460
// 地址: 0x141ee1460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_3 = nullptr
void* i_4
void* const rax_2

if (arg3 != 0)
    i_4 = arg2
    void* const rax_1
    
    if (arg2 == 0)
        rax_1 = nullptr
    else
        rax_1 = *(arg2 + 0x50)
    
    int32_t var_28_1 = 0xffffffff
    int16_t var_24_1 = 0x101
    char var_22_1 = 0
    sub_1406328d0(&i_4)
    rax_2 = rax_1

if (arg3 == 0 || rax_2 == 0)
label_141ee14e5:
    rax_2 = nullptr
else
    while (true)
        int64_t rcx_1 = *(rax_2 + 0x28)
        int64_t arg_8 = rcx_1
        
        if (rcx_1 == arg3)
            break
        
        void* rax_3 = *(rax_2 + 0x20)
        sub_1406328d0(&i_4)
        rax_2 = rax_3
        
        if (rax_2 == 0)
            goto label_141ee14e5

*(arg1 + 8) = 0
*arg1 = rax_2

if (rax_2 == 0)
    if (arg3 != 0)
        i_4 = arg2
        void* const i_1
        
        if (arg2 == 0)
            i_1 = nullptr
        else
            i_1 = *(arg2 + 0x48)
        
        int32_t var_28_2 = 0xffffffff
        int16_t var_24_2 = 0x101
        char var_22_2 = 0
        sub_140bad960(&i_4)
        void* i_2
        
        for (void* i = i_1; i != 0; i = i_2)
            if (*(i + 0x18) == arg3)
                i_3 = i
                break
            
            i_2 = *(i + 0x28)
            sub_140bad960(&i_4)
    
    void* var_30
    var_30.b = 1
    i_4 = i_3
    *arg1 = i_4.o

return arg1
