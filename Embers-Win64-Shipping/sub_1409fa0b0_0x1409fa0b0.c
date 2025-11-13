// 函数: sub_1409fa0b0
// 地址: 0x1409fa0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_140597fc0
void* rax = sub_140a756e0(&var_18, &data_143958018)
void*** result = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
void* rax_1 = &result[6]

if (rax_1 u> *(rax + 0x18))
    sub_140b0e3d0(rax + 0x10, 0x40)
    result = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
    rax_1 = &result[6]

*(rax + 0x10) = rax_1

if (result == 0)
    result = nullptr
else
    result[2] = 0
    result[3] = 0
    *result = &data_142e0f070
    result[2].d = 0xffffffff
    *(result + 0x14) = 4
    result[1] = &data_142d99570
    result[3].d = 2
    result[4] = 0
    result[5] = 0

int64_t rsi_1 = sx.q(*(arg1 + 0xc0))
int32_t rcx_2 = (rsi_1 + 1).d
*(arg1 + 0xc0) = rcx_2

if (rcx_2 s> *(arg1 + 0xc4))
    sub_14083a310(arg1 + 0xb8, rsi_1.d)

*(*(arg1 + 0xb8) + (rsi_1 << 3)) = result
return result
