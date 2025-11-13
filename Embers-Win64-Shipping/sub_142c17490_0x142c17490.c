// 函数: sub_142c17490
// 地址: 0x142c17490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg3 - 1)

if (r8.d u<= 7)
    switch (r8)
        case 0
            return sub_142c17410(arg1, arg2) __tailcall
        case 1
            return sub_142c16e80(arg1, arg2) __tailcall
        case 2
            return sub_142c16e80(arg1, arg2) __tailcall
        case 3
            return sub_142c170c0(arg1, arg2) __tailcall
        case 4
            return sub_142c16fa0(arg1, arg2) __tailcall
        case 5
            return sub_142c16f00(arg1, arg2) __tailcall
        case 6
            if (sub_142bf7510(arg2, arg1, 2) == 0)
                return 0
            
            if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
                return sub_142c16da0(arg1, arg2) __tailcall
        case 7
            if (sub_142bf7510(arg2, arg1, 2) == 0)
                return 0
            
            if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) == 1)
                return sub_142c290b0(arg1, arg2) __tailcall

uint32_t result
result.b = 1
return result
