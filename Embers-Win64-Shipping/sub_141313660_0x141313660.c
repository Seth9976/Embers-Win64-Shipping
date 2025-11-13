// 函数: sub_141313660
// 地址: 0x141313660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *arg4
uint128_t zmm0 = zx.o(arg4[1].q)
int64_t var_128 = data_143dbb180
uint64_t var_f8 = zmm0.q
void* rdx = zmm1.q
int128_t var_120 = zx.o(0)
var_128.d = *(rdx + 0x44)
var_128:4.d = *(rdx + 0x48)
var_120:4.d = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
var_120:8.d = var_f8.d
var_120:0xc.d = (var_f8 u>> 0x20).d
var_120.d = _mm_bsrli_si128(zmm1, 8).d
int128_t var_e8
sub_141455b70(&var_e8, &var_128)
uint128_t zmm1_1 = *arg3
uint128_t zmm0_1 = zx.o(arg3[1].q)
var_128 = data_143dbb180
void* rcx_1 = zmm1_1.q
uint64_t var_f8_1 = zmm0_1.q
int128_t var_120_1 = zx.o(0)
int32_t rax_9 = *(rcx_1 + 0x44)
uint128_t temp0_2 = _mm_bsrli_si128(zmm1_1, 8)
var_128.d = rax_9
var_128:4.d = *(rcx_1 + 0x48)
var_120_1:4.d = (temp0_2.q u>> 0x20).d
var_120_1:8.d = var_f8_1.d
var_120_1:0xc.d = (var_f8_1 u>> 0x20).d
var_120_1.d = _mm_bsrli_si128(zmm1_1, 8).d
int128_t var_78
sub_141455b70(&var_78, &var_128)
*arg1 = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
sub_1405d16e0(arg1, *(arg2 + 0x10))
*(arg1 + 0x10) = var_e8
int128_t var_d8
*(arg1 + 0x20) = var_d8
int32_t var_c8
arg1[6].d = var_c8
int32_t var_c4
*(arg1 + 0x34) = var_c4
int32_t var_c0
arg1[7].d = var_c0
int32_t var_bc
*(arg1 + 0x3c) = var_bc
int128_t var_b8
*(arg1 + 0x40) = var_b8
int128_t var_a8
*(arg1 + 0x50) = var_a8
int128_t var_98
*(arg1 + 0x60) = var_98
int128_t var_88
*(arg1 + 0x70) = var_88
*(arg1 + 0x80) = var_78
int128_t var_68
*(arg1 + 0x90) = var_68
int32_t var_58
arg1[0x14].d = var_58
int32_t var_54
*(arg1 + 0xa4) = var_54
int32_t var_50
arg1[0x15].d = var_50
int32_t var_4c
*(arg1 + 0xac) = var_4c
int128_t var_48
*(arg1 + 0xb0) = var_48
int128_t var_38
*(arg1 + 0xc0) = var_38
int128_t var_28
*(arg1 + 0xd0) = var_28
int128_t var_18
*(arg1 + 0xe0) = var_18
arg1[0x1e] = *arg4
arg1[0x1f] = data_14395f4d0
return arg1
