// 函数: sub_142a620c0
// 地址: 0x142a620c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_20 = nullptr

if (arg4 != 0 && *arg4 s<= 0)
    if (arg1 != 0)
        if (arg2 s< 0 || arg1[0x18].d s<= arg2)
            *arg4 = 2
            return arg3
        
        int32_t rdx = *(arg1 + 0xac)
        uint64_t rax_2 = zx.q(rdx u>> 0x1c)
        
        if (rax_2.d u<= 0xe)
            switch (rax_2)
                case 0, 1, 6, 7, 0xe
                    return sub_142a61cd0(arg3, arg1, arg4)
                case 2, 4, 5
                    return sub_142a60bf0(&arg1[5], sub_142ac3b90(&arg1[5], rdx, arg2, &arg_20), 
                        arg_20, arg2, arg1[1], arg1, 0, arg3, arg4)
                case 8, 9
                    return sub_142a60bf0(&arg1[5], sub_142ac3940(&arg1[5], rdx, arg2), arg_20, 
                        arg2, arg1[1], arg1, 0, arg3, arg4)
        
        return arg3
    
    *arg4 = 1

return arg3
