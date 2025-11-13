// 函数: sub_142505130
// 地址: 0x142505130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_28
int128_t var_18 = data_142d3f660

if (rax_2 != 0)
    rsi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rcx_2 = &var_18

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
*rsi = *rcx_2
return result
