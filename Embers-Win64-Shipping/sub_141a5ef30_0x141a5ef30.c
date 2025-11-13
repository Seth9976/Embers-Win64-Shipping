// 函数: sub_141a5ef30
// 地址: 0x141a5ef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[0xa])
int32_t* result_1 = arg1
int32_t rax = (rsi + 1).d
arg1[0xa] = rax

if (rax s> arg1[0xb])
    sub_14083a280(arg1, rsi.d)

int32_t* result_3 = *(result_1 + 0x20)
int32_t* result_2 = result_1

if (result_3 != 0)
    result_2 = result_3

memmove(&result_2[1], result_2, (rsi << 2).d)
int32_t* result = *(result_1 + 0x20)

if (result != 0)
    result_1 = result

*result_1 = arg2
return result
