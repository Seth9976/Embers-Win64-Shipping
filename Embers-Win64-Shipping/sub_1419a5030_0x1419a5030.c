// 函数: sub_1419a5030
// 地址: 0x1419a5030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    return 0

char arg_10
char* var_10 = &arg_10
arg_10 = 0
void*** (* var_18)() = j_sub_140597fc0
void*** result_1 = sub_14081d830(0xf8, sub_140a756e0(&var_18, &data_143958018) + 0x10, 1, 0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t rdx_1 = *arg2
    __builtin_memset(&result_1[1], 0, 0x18)
    result_1[5] = 0
    result_1[6].d = 0
    *(result_1 + 0x34) = 1
    result_1[0xa] = 0
    result_1[0xb].d = 0
    *(result_1 + 0x5c) = 1
    __builtin_memset(&result_1[0xc], 0, 0x20)
    *result = &data_143009f38
    result[0x10] = 0
    result[0x11] = 1
    *(result + 0x90) = *(rdx_1 + 0x90)
    *(result + 0xa0) = *(rdx_1 + 0xa0)
    *(result + 0xb0) = *(rdx_1 + 0xb0)
    *(result + 0xc0) = *(rdx_1 + 0xc0)
    result[0x1c].b = 1
    *(result + 0xd0) = *(rdx_1 + 0xd0)
    result[0x1d] = *(rdx_1 + 0xe8)
    result[0x1e].d = 0xffffffff
    sub_14117bb20(&result_1[1], rdx_1 + 8)

int64_t rsi_1 = sx.q(*(arg1 + 0x48))
int32_t rcx_2 = (rsi_1 + 1).d
*(arg1 + 0x48) = rcx_2

if (rcx_2 s> *(arg1 + 0x4c))
    sub_1405a4d70(arg1 + 0x40)

*(*(arg1 + 0x40) + (rsi_1 << 3)) = result
return result
