// 函数: sub_141c78910
// 地址: 0x141c78910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_4c = 0x3fc00000
int32_t var_50 = 0xc0c00000
int128_t var_48 = data_14320e870
int16_t var_58 = 0x100
char var_56 = 1
int32_t var_54 = 0
int64_t var_38 = 0
char var_24
char var_24_1 = var_24 & 0xfe
char var_18
char var_18_1 = var_18 & 0xfe
int32_t var_20 = 0x41a00000
int32_t var_14 = 0x469c4000
char var_30
char var_30_1 = (var_30 & 0xfb) | 3
int64_t var_2c = 0
int32_t var_1c = 0
int32_t var_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int16_t* rax_2 = *(arg2 + 0x38)
int16_t* rdx_2 = &var_58

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
return sub_141c6ec70(arg1, rdx_2)
