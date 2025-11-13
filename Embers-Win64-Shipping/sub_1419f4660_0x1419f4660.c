// 函数: sub_1419f4660
// 地址: 0x1419f4660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_140597fc0
void* rax = sub_140a756e0(&var_18, &data_143958018)
void*** result = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
void* rax_1 = &result[3]

if (rax_1 u> *(rax + 0x18))
    sub_140b0e3d0(rax + 0x10, 0x28)
    result = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
    rax_1 = &result[3]

*(rax + 0x10) = rax_1

if (result == 0)
    result = nullptr
else
    *result = &data_14301ea58
    result[1] = 0
    result[2] = 0

int64_t rsi_1 = sx.q(*(arg1 + 0xc0))
int32_t rcx_2 = (rsi_1 + 1).d
*(arg1 + 0xc0) = rcx_2

if (rcx_2 s> *(arg1 + 0xc4))
    sub_14083a310(arg1 + 0xb8, rsi_1.d)

*(*(arg1 + 0xb8) + (rsi_1 << 3)) = result
return result
