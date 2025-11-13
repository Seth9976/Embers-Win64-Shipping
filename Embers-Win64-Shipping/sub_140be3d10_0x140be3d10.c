// 函数: sub_140be3d10
// 地址: 0x140be3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = nullptr
void* const var_48
void* const rax_5

if (arg3 == 0)
label_140be3e06:
    rax_5 = nullptr
label_140be3e09:
    char var_40_2 = 1
    var_48 = rax_5
    var_48.o = var_48.o
    
    if (sub_140cc16a0(&var_48, sub_140bdf8f0()) != 0)
        rdi = var_48
    
    (*(*arg1 + 0x2e0))(arg1, arg2, rdi)
else
    int64_t* var_38 = arg1
    void* rax_1
    
    if (arg1 == 0)
        rax_1 = nullptr
    else
        rax_1 = arg1[0xa]
    
    int32_t var_28_1 = 0xffffffff
    int16_t var_24_1 = 0x101
    char var_22_1 = 0
    sub_1406328d0(&var_38)
    void* rax_2 = rax_1
    
    if (rax_2 == 0)
    label_140be3d99:
        rax_2 = nullptr
    else
        while (true)
            int64_t rcx_1 = *(rax_2 + 0x28)
            int64_t arg_18 = rcx_1
            
            if (rcx_1 == arg3)
                break
            
            void* rax_3 = *(rax_2 + 0x20)
            sub_1406328d0(&var_38)
            rax_2 = rax_3
            
            if (rax_2 == 0)
                goto label_140be3d99
    
    char var_40_1 = 0
    var_48 = rax_2
    
    if (rax_2 == 0)
        var_38 = arg1
        void* const rax_4
        
        if (arg1 == 0)
            rax_4 = nullptr
        else
            rax_4 = arg1[9]
        
        int32_t var_28_2 = 0xffffffff
        int16_t var_24_2 = 0x101
        char var_22_2 = 0
        sub_140bad960(&var_38)
        rax_5 = rax_4
        
        if (rax_5 == 0)
            goto label_140be3e06
        
        while (*(rax_5 + 0x18) != arg3)
            void* rax_6 = *(rax_5 + 0x28)
            sub_140bad960(&var_38)
            rax_5 = rax_6
            
            if (rax_5 == 0)
                goto label_140be3e06
        
        goto label_140be3e09
    
    sub_140ccfa10()
    
    if (sub_140cc1670(&var_48, &data_1439a9d90) != 0)
        rdi = var_48
    
    (*(*arg1 + 0x2d8))(arg1, arg2, rdi)
return arg2
