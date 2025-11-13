// 函数: sub_142a63970
// 地址: 0x142a63970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0 && *arg4 s<= 0)
    if (arg1 == 0)
        *arg4 = 1
        return 0
    
    int32_t r8 = *(arg1 + 0xbc)
    
    if (r8 == arg1[0x18].d - 1)
        *arg4 = 8
        return 0
    
    int32_t rdx = *(arg1 + 0xac)
    *(arg1 + 0xbc) = r8 + 1
    uint64_t rax_6 = zx.q(rdx u>> 0x1c)
    
    if (rax_6.d u<= 0xe)
        switch (rax_6)
            case 0, 6
                return sub_142ac3aa0(&arg1[5], rdx, arg2) __tailcall
            case 1, 7, 0xe
                *arg4 = 0x11
            case 2, 4, 5
                return sub_142a61a60(arg1, sub_142ac3b90(&arg1[5], rdx, r8 + 1, arg3), 
                    *(arg1 + 0xbc), arg2, arg4)
            case 3
                return sub_142a61a60(arg1, rdx, r8 + 1, arg2, arg4)
            case 8, 9
                return sub_142a61a60(arg1, sub_142ac3940(&arg1[5], rdx, r8 + 1), *(arg1 + 0xbc), 
                    arg2, arg4)

return 0
