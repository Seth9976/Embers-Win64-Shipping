// 函数: sub_142a7bdc0
// 地址: 0x142a7bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    if (arg2 == 0)
        *arg3 = 1
        return arg1
    
    int64_t rax_2 = sub_142aea860(arg2)
    
    if (sub_142aea860(*(arg1 + 0x20)) == rax_2)
        int64_t rax_4 = sub_142aea6a0(*(arg1 + 0x20))
        void* rax_5 = sub_142aea410(*(arg1 + 0x20), arg2, 0, 1, arg4, arg3)
        *(arg1 + 0x20) = rax_5
        
        if (*arg3 s<= 0)
            sub_142aeacd0(rax_5, rax_4)
            void* rcx_5 = *(arg1 + 0x28)
            
            if (rcx_5 != 0)
                int64_t rax_6 = sub_142aea6a0(rcx_5)
                void* rax_7 = sub_142aea410(*(arg1 + 0x28), arg2, 0, 1, arg4, arg3)
                *(arg1 + 0x28) = rax_7
                
                if (*arg3 s<= 0)
                    sub_142aeacd0(rax_7, rax_6)
    else
        *arg3 = 1

return arg1
