// 函数: sub_1421d5180
// 地址: 0x1421d5180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_140597fc0
void*** result_1 = sub_14081d830(0x10, sub_140a756e0(&var_18, &data_143958018) + 0x10, 1, 0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result_1[1] = 0
    *result = &data_142d40488

int64_t rsi = sx.q(*(arg1 + 0xc0))
int32_t rcx_1 = (rsi + 1).d
*(arg1 + 0xc0) = rcx_1

if (rcx_1 s> *(arg1 + 0xc4))
    sub_14083a310(arg1 + 0xb8, rsi.d)

*(*(arg1 + 0xb8) + (rsi << 3)) = result
return result
