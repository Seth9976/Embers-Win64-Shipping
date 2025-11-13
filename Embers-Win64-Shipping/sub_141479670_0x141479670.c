// 函数: sub_141479670
// 地址: 0x141479670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result_2 = *(arg1 + 0x10)
int32_t* result_1 = arg1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
int32_t rbp = 1 << (arg3.b & 0x1f)
int32_t* result = result_1

if (result_2 != 0)
    result = result_2

if ((result[sx.q((temp1 + (temp0 & 0x1f)) s>> 5)] & rbp) == 0)
    int64_t rsi_1 = sx.q(result_1[0xa])
    int32_t rax_4 = (rsi_1 + 1).d
    result_1[0xa] = rax_4
    
    if (rax_4 s> result_1[0xb])
        sub_14083a310(&result_1[8], rsi_1.d)
    
    *(*(result_1 + 0x20) + (rsi_1 << 3)) = arg2
    result = *(result_1 + 0x10)
    
    if (result != 0)
        result_1 = result
    
    result_1[sx.q((temp1 + (temp0 & 0x1f)) s>> 5)] |= rbp

return result
