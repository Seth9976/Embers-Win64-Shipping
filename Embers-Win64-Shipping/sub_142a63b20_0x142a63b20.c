// 函数: sub_142a63b20
// 地址: 0x142a63b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0

if (arg4 != 0 && *arg4 s<= 0)
    if (arg1 == 0)
        *arg4 = 1
    else if (arg2 s< 0 || arg1[0x18].d s<= arg2)
        *arg4 = 2
    else
        int32_t rdx = *(arg1 + 0xac)
        uint64_t rax_2 = zx.q(rdx u>> 0x1c)
        
        if (rax_2.d u> 0xe)
            *arg4 = 5
        else
            switch (rax_2)
                case 0, 6
                    return sub_142ac3aa0(&arg1[5], rdx, arg3)
                case 1, 7, 0xe
                    *arg4 = 0x11
                case 2, 4, 5
                    return sub_142a61a60(arg1, sub_142ac3b90(&arg1[5], rdx, arg2, &arg_20), arg2, 
                        arg3, arg4)
                case 3
                    return sub_142a61a60(arg1, rdx, arg2, arg3, arg4)
                case 8, 9
                    return sub_142a61a60(arg1, sub_142ac3940(&arg1[5], rdx, arg2), arg2, arg3, arg4)
                case 0xa, 0xb, 0xc, 0xd
                    *arg4 = 5

return nullptr
