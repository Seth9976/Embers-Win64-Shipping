// 函数: sub_142125440
// 地址: 0x142125440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg5 != 0)
    int32_t* i = *(arg1 + 0x120)
    result = sx.q(*(arg1 + 0x128))
    
    for (void* rsi_3 = &i[result * 0xc]; i != rsi_3; i = &i[0xc])
        void var_28
        result = sub_140b4c620(&var_28, i)
        
        if (*result == *arg2 && i[3] == arg2[1].d && i[2].b == *(arg2 + 0xc))
            *arg3 = *(i + 0x10)
            *arg4 = i[6]
            result.b = 1
            goto label_142125550

if (*(arg2 + 0xc) != 2)
    result = sub_14210eb80(arg1 + 0x188, 3, arg2)

if (*(arg2 + 0xc) == 2 || result.d == 0xffffffff)
    int64_t* rcx_5 = *(arg1 + 0xd0)
    
    if (rcx_5 != 0)
        return (*(*rcx_5 + 0x348))(rcx_5, arg2, arg3, arg4, 1)
    
    result.b = 0
else
    int64_t rdx_1 = sx.q(result.d)
    *arg3 = *(*(arg1 + 0x2f8) + (rdx_1 << 3))
    result.b = 1
    *arg4 = *(*(arg1 + 0x308) + (rdx_1 << 2))

label_142125550:
return result
