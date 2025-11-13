// 函数: sub_142c171c0
// 地址: 0x142c171c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg3 - 1)

if (r8.d u<= 8)
    switch (r8)
        case 0
            return sub_142c17390(arg1, arg2) __tailcall
        case 1
            return sub_142c17140(arg1, arg2) __tailcall
        case 2
            return sub_142c17040(arg1, arg2) __tailcall
        case 3
            if (sub_142bf7510(arg2, arg1, 2) == 0)
                return 0
            
            if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
                return sub_142c28a20(arg1, arg2) __tailcall
        case 4
            if (sub_142bf7510(arg2, arg1, 2) == 0)
                return 0
            
            if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
                return sub_142c28b30(arg1, arg2) __tailcall
        case 5
            if (sub_142bf7510(arg2, arg1, 2) == 0)
                return 0
            
            if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
                return sub_142c28a20(arg1, arg2) __tailcall
        case 6
            return sub_142c16fa0(arg1, arg2) __tailcall
        case 7
            return sub_142c16f00(arg1, arg2) __tailcall
        case 8
            if (sub_142bf7510(arg2, arg1, 2) == 0)
                return 0
            
            if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
                return sub_142c16cc0(arg1, arg2) __tailcall

uint32_t result
result.b = 1
return result
