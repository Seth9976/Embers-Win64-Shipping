// 函数: sub_142a63800
// 地址: 0x142a63800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = nullptr

if (arg3 != 0 && *arg3 s<= 0)
    if (arg1 != 0)
        int32_t rcx = *(arg1 + 0xbc)
        
        if (rcx == arg1[0x18].d - 1)
            *arg3 = 8
            return arg2
        
        int32_t rdx = *(arg1 + 0xac)
        uint64_t rax_5 = zx.q(rdx u>> 0x1c)
        *(arg1 + 0xbc) = rcx + 1
        
        if (rax_5.d u<= 0xe)
            switch (rax_5)
                case 0, 1, 6, 7, 0xe
                    return sub_142a61cd0(arg2, arg1, arg3)
                case 2, 4, 5
                    return sub_142a60bf0(&arg1[5], sub_142ac3b90(&arg1[5], rdx, rcx + 1, &arg_18), 
                        arg_18, *(arg1 + 0xbc), arg1[1], arg1, 0, arg2, arg3)
                case 8, 9
                    return sub_142a60bf0(&arg1[5], sub_142ac3940(&arg1[5], rdx, rcx + 1), arg_18, 
                        *(arg1 + 0xbc), arg1[1], arg1, 0, arg2, arg3)
        
        return arg2
    
    *arg3 = 1

return arg2
