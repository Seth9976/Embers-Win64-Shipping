// 函数: sub_142bfa3a0
// 地址: 0x142bfa3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142bf7510(arg2, arg1, 2).b != 0)
    int32_t rdx_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (rdx_3 u> 0xe)
        result.b = 1
        return result
    
    switch (rdx_3)
        case 0
            return sub_142bf7510(arg2, arg1, 0x106) __tailcall
        case 1, 2, 3, 5, 7, 8, 9, 0xb
            result.b = 1
            return result
        case 4
            return sub_142bfa510(arg1, arg2) __tailcall
        case 6
            return sub_142bf9f10(arg1, arg2) __tailcall
        case 0xa
            if (sub_142bf7510(arg2, arg1, 0x14).b != 0)
                result = sub_142bfaa30(&arg1[0x10], arg2)
            label_142bfa4b7:
                
                if (result.b != 0)
                    result.b = 1
                    return result
        case 0xc, 0xd
            if (sub_142bf7510(arg2, arg1, 0x10).b != 0)
                result = sub_142bfab40(&arg1[0xc], arg2)
                goto label_142bfa4b7
        case 0xe
            if (sub_142bf7510(arg2, arg1, 0xa).b != 0)
                result = sub_142bf9d70(&arg1[6], arg2, arg1)
                goto label_142bfa4b7

result.b = 0
return result
