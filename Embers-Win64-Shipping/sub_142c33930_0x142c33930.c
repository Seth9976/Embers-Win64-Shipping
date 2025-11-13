// 函数: sub_142c33930
// 地址: 0x142c33930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142bf7510(arg2, arg1, 2).b != 0)
    int32_t rdx_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (rdx_3 u> 0xa)
        result.b = 1
        return result
    
    switch (rdx_3)
        case 0
            return sub_142c33be0(arg1, arg2) __tailcall
        case 1, 3, 5, 7, 9
            result.b = 1
            return result
        case 2
            return sub_142c34f80(&arg1[2], arg2) != 0
        case 4
            return sub_142c34510(&arg1[2], arg2, arg1) __tailcall
        case 6
            return sub_142c29560(&arg1[2], arg2) != 0
        case 8
            if (sub_142bf7510(arg2, arg1, 6).b != 0
                    && sub_142bf7510(arg2, &arg1[6], ((zx.d(arg1[4]) << 8) + zx.d(arg1[5])) << 2).b
                    != 0)
                result.b = 1
                return result
        case 0xa
            return sub_142c256c0(arg1, arg2) __tailcall

result.b = 0
return result
