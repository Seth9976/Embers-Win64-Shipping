// 函数: sub_142b32550
// 地址: 0x142b32550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg1 == *arg2 && arg1[1].d == arg2[1].d && *(arg1 + 0xc) == *(arg2 + 0xc)
        && sub_142a48110(&arg1[2], &arg2[2]).b != 0)
    int64_t* rcx_1 = arg1[0xa]
    int64_t rdx_1 = arg2[0xa]
    
    if (rcx_1 == 0)
        if (rdx_1 == 0)
        label_142b325b9:
            int64_t* rcx_2 = arg1[0xb]
            int64_t rdx_2 = arg2[0xb]
            
            if (rcx_2 == 0)
                if (rdx_2 == 0)
                    result.b = 1
                    return result
            else if (rdx_2 != 0 && (*(*rcx_2 + 0x10))(rcx_2).b != 0)
                result.b = 1
                return result
    else if (rdx_1 != 0 && (*(*rcx_1 + 0x10))(rcx_1).b != 0)
        goto label_142b325b9

result.b = 0
return result
