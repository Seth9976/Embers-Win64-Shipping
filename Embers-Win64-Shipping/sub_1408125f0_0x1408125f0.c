// 函数: sub_1408125f0
// 地址: 0x1408125f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_140597fc0
void*** result_1 = sub_14081d830(0x1e8, sub_140a756e0(&var_18, &data_143958018) + 0x10, 1, 0)
void*** result = result_1

if (result_1 == 0)
    result = result_1
else
    memset(&result_1[2], 0, 0x1d0)
    *result = &data_142dd9020
    sub_14081b000(&result[1], 3, 4)
    result[1] = &data_142dd8f40
    __builtin_memset(&result[0x2c], 0, 0x30)
    __builtin_memset(&result[0x33], 0, 0x40)
    result[0x3c] = 0

int64_t rsi_1 = sx.q(*(arg1 + 0xc0))
int32_t rcx_3 = (rsi_1 + 1).d
*(arg1 + 0xc0) = rcx_3

if (rcx_3 s> *(arg1 + 0xc4))
    sub_14083a310(arg1 + 0xb8, rsi_1.d)

*(*(arg1 + 0xb8) + (rsi_1 << 3)) = result
return result
