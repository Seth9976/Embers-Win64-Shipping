// 函数: sub_141397d20
// 地址: 0x141397d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_140597fc0
void*** rax_1 = sub_14081d830(0x428, sub_140a756e0(&var_18, &data_143958018) + 0x10, 1, 0)
void*** result

if (rax_1 == 0)
    result = nullptr
else
    result = sub_1413855c0(rax_1, arg2, arg1)

int64_t rsi = sx.q(*(arg1 + 0x418))
int32_t rax_3 = (rsi + 1).d
*(arg1 + 0x418) = rax_3

if (rax_3 s> *(arg1 + 0x41c))
    sub_1405a4d70(arg1 + 0x410)

*(*(arg1 + 0x410) + (rsi << 3)) = result
return result
