// 函数: sub_14214bce0
// 地址: 0x14214bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result_1 = arg1
arg1[6] = arg2 + 1
uint64_t rcx_2 = zx.q((arg1[7] + 0x1f) u>> 5)
uint32_t rsi_1 = (arg2 + 0x20) u>> 5

if (rsi_1 u<= rcx_2.d)
    int32_t* result_5 = *(result_1 + 0x10)
    int32_t* result_2 = result_1
    
    if (result_5 != 0)
        result_2 = result_5
    
    if (rcx_2.d u> 8)
        memset(result_2, 0, zx.q(rcx_2.d) << 2)
    else if (rcx_2.d != 0)
        __builtin_memset(result_2, 0, rcx_2 << 2)
else
    sub_1405a4a00(result_1, 0, rsi_1, 4)
    int32_t* result_3 = result_1
    result_1[7] = rsi_1 << 5
    int32_t* result_4 = *(result_1 + 0x10)
    
    if (result_4 != 0)
        result_3 = result_4
    
    if (rsi_1 u> 8)
        memset(result_3, 0, zx.q(rsi_1) << 2)
    else if (rsi_1 != 0)
        __builtin_memset(result_3, 0, zx.q(rsi_1) << 2)
    
    void* rdx_1 = &result_3[zx.q(rsi_1 - 1)]
    *rdx_1 &= 0xffffffff u>> ((neg.d(result_1[6])).b & 0x1f)

int32_t* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 |= 1
return result
