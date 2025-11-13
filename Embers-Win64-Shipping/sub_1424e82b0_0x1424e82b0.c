// 函数: sub_1424e82b0
// 地址: 0x1424e82b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int32_t result = *(rcx_1 + 8)
*arg3 = (_mm_unpacklo_ps(*rcx_1, *(rcx_1 + 4))).q
arg3[1].d = result
return result
