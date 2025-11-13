// 函数: sub_1420ed5e0
// 地址: 0x1420ed5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x10)) << 4, sx.q(*(arg1 + 0x14)) << 4)
uint32_t result_2

if ((arg2[5].b & 1) == 0)
    result_2 = *(arg1 + 0x10)
else
    result_2 = 0

int64_t* rcx_1 = arg2[1]
uint32_t result_1 = result_2
int32_t* rdx_2 = *rcx_1
uint32_t result

if (&rdx_2[1] u> rcx_1[1])
    uint32_t* rdx_3 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_3, arg3)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    result = *rdx_2
    result_1 = result
    *rcx_1 += 4

uint32_t result_3 = result_1

if (result_3 != 0)
    result = zx.d(*(arg2 + 0x29))
    
    if ((result.b & 1) == 0 && result_3 s> 0
            && ((*(arg2 + 0x2b) & 8) == 0 || result_3 s<= 0x100000))
        *(arg1 + 0x10) = result_3
        
        if ((arg2[5].b & 1) != 0)
            sub_1405a4be0(arg1 + 8, result_3, *(arg1 + 0x14))
            result_3 = *(arg1 + 0x10)
        
        return (*(*arg2 + 0x150))(arg2, *(arg1 + 8), sx.q(result_3) << 4)
    
    result.b |= 1
    *(arg2 + 0x29) = result.b
else if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x10) = result_3
    
    if (*(arg1 + 0x14) != result_3)
        return sub_1405a5410(arg1 + 8, 0)

return result
