// 函数: sub_142129670
// 地址: 0x142129670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg5 != 0)
    void* i = *(arg1 + 0xf0)
    result = sx.q(*(arg1 + 0xf8))
    
    for (void* rsi_3 = result * 0x30 + i; i != rsi_3; i += 0x30)
        void var_28
        result = sub_140b4c620(&var_28, i)
        
        if (*result == *arg2 && *(i + 0xc) == arg2[1].d && *(i + 8) == *(arg2 + 0xc))
            result.b = 1
            *arg3 = *(i + 0x10)
            goto label_142129773

if (*(arg2 + 0xc) != 2)
    result = sub_14210eb80(arg1 + 0x188, 1, arg2)

if (*(arg2 + 0xc) == 2 || result.d == 0xffffffff)
    int64_t* rcx_5 = *(arg1 + 0xd0)
    
    if (rcx_5 != 0)
        return (*(*rcx_5 + 0x330))(rcx_5, arg2, arg3, zx.q(arg4), 1)
    
    result.b = 0
else
    int64_t rcx_3 = sx.q(result.d)
    result.b = 1
    *arg3 = *(*(arg1 + 0x2d8) + rcx_3 * 0x10)

label_142129773:
return result
