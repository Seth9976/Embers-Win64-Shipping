// 函数: sub_1405d03c0
// 地址: 0x1405d03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = data_14399f700
int128_t zmm0 = data_14399f710
int128_t zmm3 = data_14399f6e0
int128_t zmm2 = data_14399f6f0
int128_t var_88 = zmm1
int128_t var_a8 = zmm3
int128_t var_98 = zmm2
int32_t var_18
int32_t var_18_1 = var_18 & 0xfffffffe
int128_t var_78 = zmm0
int128_t var_48 = zmm1
int128_t var_38 = zmm0
int32_t var_28 = 0x3f800000
int32_t var_24 = 0
int128_t var_68 = zmm3
int128_t var_58 = zmm2
int64_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_a8
void* arg_10 = nullptr

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
void* rdx_4 = arg_10
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
return sub_1405c5bc0(rsi, rdx_4)
