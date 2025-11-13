// 函数: sub_142127110
// 地址: 0x142127110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg4.b != 0)
    int32_t* i = *(arg1 + 0x110)
    result = sx.q(*(arg1 + 0x118))
    
    for (void* rsi_1 = &i[result * 0xa]; i != rsi_1; i = &i[0xa])
        void var_18
        result, arg4 = sub_140b4c620(&var_18, i)
        
        if (*result == *arg2 && i[3] == arg2[1].d && i[2].b == *(arg2 + 0xc))
            *arg3 = *(i + 0x10)
            result.b = 1
            goto label_1421271fd

if (*(arg2 + 0xc) != 2)
    result, arg4 = sub_14210eb80(arg1 + 0x188, 4, arg2)

if (*(arg2 + 0xc) == 2 || result.d == 0xffffffff)
    int64_t* rcx_5 = *(arg1 + 0xd0)
    
    if (rcx_5 != 0)
        arg4.b = 1
        return (*(*rcx_5 + 0x340))(rcx_5, arg2, arg3, arg4)
    
    result.b = 0
else
    int64_t rcx_3 = sx.q(result.d)
    result.b = 1
    *arg3 = *(*(arg1 + 0x318) + (rcx_3 << 3))

label_1421271fd:
return result
