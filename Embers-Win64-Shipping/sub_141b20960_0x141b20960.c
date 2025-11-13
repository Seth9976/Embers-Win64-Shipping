// 函数: sub_141b20960
// 地址: 0x141b20960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0xf0))
char r8 = *(arg1 + 0xe0)
uint64_t rdi = 0
int64_t rbp = *(arg1 + 0xe8)
char rax = 0
char var_40 = 0
void*** result = arg2
arg2.b = 0
char var_38 = 0
int32_t var_30 = 0
void** const var_48 = &data_1430563e8
uint64_t var_20 = 0
int32_t var_18 = rsi.d
int32_t rcx

if (rsi.d != 0)
    sub_1405c4a00(&var_20, rsi.d, 0)
    rdi = var_20
    memcpy(rdi, rbp, (rsi << 3).d)
    int32_t var_14
    rcx = var_14
    arg2 = nullptr
    rax = 0
    rsi = zx.q(var_18)
else
    rcx = 0

result[0x10].b |= 3
result[1].b = rax
*(result + 0x14) = 0xffffffff.q
result[2].b = arg2.b
*result = &data_1430563e8
result[4].b = r8
result[5] = rdi
result[6].d = rsi.d
*(result + 0x34) = rcx
return result
