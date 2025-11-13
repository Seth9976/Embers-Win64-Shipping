// 函数: sub_142127400
// 地址: 0x142127400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg5 != 0)
    int32_t* i = *(arg1 + 0xe0)
    result = sx.q(*(arg1 + 0xe8))
    
    for (void* rsi_1 = &i[result * 9]; i != rsi_1; i = &i[9])
        void var_28
        result = sub_140b4c620(&var_28, i)
        
        if (*result == *arg2 && i[3] == arg2[1].d && i[2].b == *(arg2 + 0xc))
            *arg3 = i[4]
            result.b = 1
            goto label_1421274f9

if (*(arg2 + 0xc) != 2)
    result = sub_14210eb80(arg1 + 0x188, 0, arg2)

if (*(arg2 + 0xc) == 2 || result.d == 0xffffffff)
    int64_t* rcx_5 = *(arg1 + 0xd0)
    
    if (rcx_5 != 0)
        return (*(*rcx_5 + 0x328))(rcx_5, arg2, arg3, zx.q(arg4), 1)
    
    result.b = 0
else
    int64_t rcx_3 = sx.q(result.d)
    result.b = 1
    *arg3 = *(*(arg1 + 0x2c8) + (rcx_3 << 2))

label_1421274f9:
return result
