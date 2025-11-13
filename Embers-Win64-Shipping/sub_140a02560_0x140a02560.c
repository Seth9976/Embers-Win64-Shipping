// 函数: sub_140a02560
// 地址: 0x140a02560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg1
int128_t zmm4 = *(arg1 + 4)
int128_t zmm3 = zmm4 ^ 0x80000000
uint128_t zmm6 = *(arg1 + 8)
float zmm7[0x4] = zmm5 ^ 0x80000000
int32_t var_100 = zmm6.d
int32_t var_100_1 = zmm6.d
int32_t var_100_2 = zmm6.d
int32_t var_100_3 = zmm6.d
zmm6 ^= 0x80000000
int32_t var_100_4 = zmm6.d
int32_t var_100_5 = zmm6.d
int32_t var_100_6 = zmm6.d
int32_t var_110 = zmm6.d
int64_t var_108 = (_mm_unpacklo_ps(zmm7, zmm3.q)).q
arg3[1].d = 0
bool cond:0 = *(arg3 + 0xc) s> 0xffffffff
float temp0_1[0x4] = _mm_unpacklo_ps(zmm7, zmm4.q)
float temp0_2[0x4] = _mm_unpacklo_ps(zmm5, zmm4.q)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm5, zmm3.q)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm7, zmm3.q)
float temp0_5[0x4] = _mm_unpacklo_ps(zmm7, zmm4.q)
float temp0_6[0x4] = _mm_unpacklo_ps(zmm5, zmm4.q)
float temp0_7[0x4] = _mm_unpacklo_ps(zmm5, zmm3.q)

if (not(cond:0))
    sub_1405dadb0(arg3, 0)

int32_t rax_6 = *(arg2 + 0xc)
int32_t rdx = 0
arg2[1].d = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_140638cc0(arg2, 0)
    rdx = arg2[1].d

arg2[1].d = rdx + 0x18

if (rdx + 0x18 s> *(arg2 + 0xc))
    sub_140638a00(arg2)

int32_t rax_8 = *(arg4 + 0xc)
int32_t rdx_1 = 0
arg4[1].d = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_140638cc0(arg4, 0)
    rdx_1 = arg4[1].d

arg4[1].d = rdx_1 + 0x18

if (rdx_1 + 0x18 s> *(arg4 + 0xc))
    sub_140638a00(arg4)

int32_t rax_10 = *(arg6 + 0xc)
int32_t rdx_2 = 0
arg6[1].d = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405a5410(arg6, 0)
    rdx_2 = arg6[1].d

arg6[1].d = rdx_2 + 0x18

if (rdx_2 + 0x18 s> *(arg6 + 0xc))
    sub_1405a4f90(arg6)

int64_t* rax_12 = *arg2
*rax_12 = temp0_1.q
rax_12[1].d = var_100
void* rax_13 = *arg2
*(rax_13 + 0xc) = temp0_2.q
*(rax_13 + 0x14) = var_100_1
void* rax_14 = *arg2
*(rax_14 + 0x18) = temp0_3.q
*(rax_14 + 0x20) = var_100_2
void* rax_15 = *arg2
*(rax_15 + 0x24) = temp0_4.q
*(rax_15 + 0x2c) = var_100_3
sub_140a000c0(arg3, 0, 1, 2, 3)
void* rax_16 = *arg4
float temp0_9[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
*(rax_16 + 0x24) = temp0_9.q
int32_t var_110_1 = 0x3f800000
*(rax_16 + 0x2c) = 0x3f800000
void* rax_17 = *arg4
int32_t var_114 = 0xbf800000
int32_t var_110_2 = 0
*(rax_17 + 0x18) = temp0_9.q
*(rax_17 + 0x20) = 0x3f800000
void* rax_18 = *arg4
char var_10c = 0
*(rax_18 + 0xc) = temp0_9.q
*(rax_18 + 0x14) = 0x3f800000
int64_t* rax_19 = *arg4
*rax_19 = temp0_9.q
float zmm0_1[0x4] = 0.o
rax_19[1].d = 0x3f800000
*(*arg6 + 0x30) = zmm0_1
*(*arg6 + 0x20) = zmm0_1
*(*arg6 + 0x10) = zmm0_1
**arg6 = zmm0_1
void* rax_24 = *arg2
*(rax_24 + 0x30) = temp0_5.q
*(rax_24 + 0x38) = var_100_4
void* rax_25 = *arg2
*(rax_25 + 0x3c) = temp0_1.q
*(rax_25 + 0x44) = var_100
void* rax_26 = *arg2
*(rax_26 + 0x48) = temp0_4.q
*(rax_26 + 0x50) = var_100_3
void* rax_27 = *arg2
*(rax_27 + 0x54) = var_108
*(rax_27 + 0x5c) = var_110
sub_140a000c0(arg3, 4, 5, 6, 7)
void* rax_28 = *arg4
float temp0_10[0x4] = _mm_unpacklo_ps(0xbf800000, 0)
int32_t var_110_3 = 0
*(rax_28 + 0x54) = temp0_10.q
*(rax_28 + 0x5c) = 0
void* rax_29 = *arg4
int32_t var_114_1 = 0xbf800000
int32_t var_110_4 = 0
*(rax_29 + 0x48) = temp0_10.q
*(rax_29 + 0x50) = 0
void* rax_30 = *arg4
char var_10c_1 = 0
*(rax_30 + 0x3c) = temp0_10.q
*(rax_30 + 0x44) = 0
void* rax_31 = *arg4
*(rax_31 + 0x30) = temp0_10.q
float zmm0_2[0x4] = 0.o
*(rax_31 + 0x38) = 0
*(*arg6 + 0x70) = zmm0_2
*(*arg6 + 0x60) = zmm0_2
*(*arg6 + 0x50) = zmm0_2
*(*arg6 + 0x40) = zmm0_2
void* rax_36 = *arg2
*(rax_36 + 0x60) = temp0_6.q
*(rax_36 + 0x68) = var_100_5
void* rax_37 = *arg2
*(rax_37 + 0x6c) = temp0_2.q
*(rax_37 + 0x74) = var_100_1
void* rax_38 = *arg2
*(rax_38 + 0x78) = temp0_1.q
*(rax_38 + 0x80) = var_100
void* rax_39 = *arg2
*(rax_39 + 0x84) = temp0_5.q
*(rax_39 + 0x8c) = var_100_4
sub_140a000c0(arg3, 8, 9, 0xa, 0xb)
void* rax_40 = *arg4
float temp0_11[0x4] = _mm_unpacklo_ps(zx.o(0), 0x3f800000)
int32_t var_110_5 = 0
*(rax_40 + 0x84) = temp0_11.q
*(rax_40 + 0x8c) = 0
void* rax_41 = *arg4
var_114_1.q = 0
char var_10c_2 = 0
*(rax_41 + 0x78) = temp0_11.q
*(rax_41 + 0x80) = 0
void* rax_42 = *arg4
*(rax_42 + 0x6c) = temp0_11.q
*(rax_42 + 0x74) = 0
void* rax_43 = *arg4
*(rax_43 + 0x60) = temp0_11.q
float zmm0_3[0x4] = 0xbf800000.o
*(rax_43 + 0x68) = 0
*(*arg6 + 0xb0) = zmm0_3
*(*arg6 + 0xa0) = zmm0_3
*(*arg6 + 0x90) = zmm0_3
*(*arg6 + 0x80) = zmm0_3
void* rax_48 = *arg2
*(rax_48 + 0x90) = temp0_7.q
*(rax_48 + 0x98) = var_100_6
void* rax_49 = *arg2
*(rax_49 + 0x9c) = temp0_3.q
*(rax_49 + 0xa4) = var_100_2
void* rax_50 = *arg2
*(rax_50 + 0xa8) = temp0_2.q
*(rax_50 + 0xb0) = var_100_1
void* rax_51 = *arg2
*(rax_51 + 0xb4) = temp0_6.q
*(rax_51 + 0xbc) = var_100_5
sub_140a000c0(arg3, 0xc, 0xd, 0xe, 0xf)
void* rax_52 = *arg4
zmm6 = zx.o(var_108)
float temp0_12[0x4] = _mm_unpacklo_ps(0x3f800000, 0)
int32_t var_110_6 = 0
*(rax_52 + 0xb4) = temp0_12.q
*(rax_52 + 0xbc) = 0
void* rax_53 = *arg4
var_114_1.q = 0x3f800000
char var_10c_3 = 0
*(rax_53 + 0xa8) = temp0_12.q
*(rax_53 + 0xb0) = 0
void* rax_54 = *arg4
*(rax_54 + 0x9c) = temp0_12.q
*(rax_54 + 0xa4) = 0
void* rax_55 = *arg4
*(rax_55 + 0x90) = temp0_12.q
float zmm0_4[0x4] = 0.o
*(rax_55 + 0x98) = 0
*(*arg6 + 0xf0) = zmm0_4
*(*arg6 + 0xe0) = zmm0_4
*(*arg6 + 0xd0) = zmm0_4
*(*arg6 + 0xc0) = zmm0_4
void* rax_60 = *arg2
*(rax_60 + 0xc0) = zmm6.q
*(rax_60 + 0xc8) = var_110
void* rax_61 = *arg2
*(rax_61 + 0xcc) = temp0_4.q
*(rax_61 + 0xd4) = var_100_3
void* rax_62 = *arg2
*(rax_62 + 0xd8) = temp0_3.q
*(rax_62 + 0xe0) = var_100_2
void* rax_63 = *arg2
*(rax_63 + 0xe4) = temp0_7.q
*(rax_63 + 0xec) = var_100_6
sub_140a000c0(arg3, 0x10, 0x11, 0x12, 0x13)
void* rax_64 = *arg4
float temp0_13[0x4] = _mm_unpacklo_ps(zx.o(0), 0xbf800000)
int32_t var_110_7 = 0
*(rax_64 + 0xe4) = temp0_13.q
*(rax_64 + 0xec) = 0
void* rax_65 = *arg4
int32_t var_118_3
var_118_3.q = 0x3f800000
int32_t var_110_8 = 0
char var_10c_4 = 0
*(rax_65 + 0xd8) = temp0_13.q
*(rax_65 + 0xe0) = 0
void* rax_66 = *arg4
*(rax_66 + 0xcc) = temp0_13.q
*(rax_66 + 0xd4) = 0
void* rax_67 = *arg4
*(rax_67 + 0xc0) = temp0_13.q
float zmm0_5[0x4] = var_118_3.o
*(rax_67 + 0xc8) = 0
*(*arg6 + 0x130) = zmm0_5
*(*arg6 + 0x120) = zmm0_5
*(*arg6 + 0x110) = zmm0_5
*(*arg6 + 0x100) = zmm0_5
void* rax_72 = *arg2
*(rax_72 + 0xf0) = zmm6.q
*(rax_72 + 0xf8) = var_110
void* rax_73 = *arg2
*(rax_73 + 0xfc) = temp0_7.q
*(rax_73 + 0x104) = var_100_6
void* rax_74 = *arg2
*(rax_74 + 0x108) = temp0_6.q
*(rax_74 + 0x110) = var_100_5
void* rax_75 = *arg2
*(rax_75 + 0x114) = temp0_5.q
*(rax_75 + 0x11c) = var_100_4
sub_140a000c0(arg3, 0x14, 0x15, 0x16, 0x17)
void* rax_76 = *arg4
float temp0_14[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_110_9 = 0xbf800000
*(rax_76 + 0x114) = temp0_14.q
*(rax_76 + 0x11c) = 0xbf800000
void* rax_77 = *arg4
var_114_1.q = 0x3f800000
char var_10c_5 = 0
*(rax_77 + 0x108) = temp0_14.q
*(rax_77 + 0x110) = 0xbf800000
void* rax_78 = *arg4
*(rax_78 + 0xfc) = temp0_14.q
*(rax_78 + 0x104) = 0xbf800000
void* rax_79 = *arg4
*(rax_79 + 0xf0) = temp0_14.q
float zmm0_6[0x4] = 0.o
*(rax_79 + 0xf8) = 0xbf800000
*(*arg6 + 0x170) = zmm0_6
*(*arg6 + 0x160) = zmm0_6
*(*arg6 + 0x150) = zmm0_6
*(*arg6 + 0x140) = zmm0_6
int32_t rcx_25 = *(arg5 + 0xc)
arg5[1].d = 0
int32_t rdx_3

if (rcx_25 s< 0)
    sub_1405c5570(arg5, 0)
    rdx_3 = arg5[1].d
    rcx_25 = *(arg5 + 0xc)
else
    rdx_3 = 0

arg5[1].d = rdx_3 + 0x18

if (rdx_3 + 0x18 s> rcx_25)
    sub_1405a4d70(arg5)

*(*arg5 + 0xa0) = 0
*(*arg5 + 0x80) = 0
*(*arg5 + 0x60) = 0
*(*arg5 + 0x40) = 0
*(*arg5 + 0x20) = 0
**arg5 = 0
void* rax_91 = *arg5
*(rax_91 + 0xa8) = 0
*(rax_91 + 0xac) = 0x3f800000
void* rax_92 = *arg5
*(rax_92 + 0x88) = 0
*(rax_92 + 0x8c) = 0x3f800000
void* rax_93 = *arg5
*(rax_93 + 0x68) = 0
*(rax_93 + 0x6c) = 0x3f800000
void* rax_94 = *arg5
*(rax_94 + 0x48) = 0
*(rax_94 + 0x4c) = 0x3f800000
void* rax_95 = *arg5
*(rax_95 + 0x28) = 0
*(rax_95 + 0x2c) = 0x3f800000
void* rax_96 = *arg5
*(rax_96 + 8) = 0
*(rax_96 + 0xc) = 0x3f800000
void* rax_97 = *arg5
*(rax_97 + 0xb0) = 0x3f800000
*(rax_97 + 0xb4) = 0x3f800000
void* rax_98 = *arg5
*(rax_98 + 0x90) = 0x3f800000
*(rax_98 + 0x94) = 0x3f800000
void* rax_99 = *arg5
*(rax_99 + 0x70) = 0x3f800000
*(rax_99 + 0x74) = 0x3f800000
void* rax_100 = *arg5
*(rax_100 + 0x50) = 0x3f800000
*(rax_100 + 0x54) = 0x3f800000
void* rax_101 = *arg5
*(rax_101 + 0x30) = 0x3f800000
*(rax_101 + 0x34) = 0x3f800000
void* rax_102 = *arg5
*(rax_102 + 0x10) = 0x3f800000
*(rax_102 + 0x14) = 0x3f800000
*(*arg5 + 0xb8) = 0x3f800000
*(*arg5 + 0x98) = 0x3f800000
*(*arg5 + 0x78) = 0x3f800000
*(*arg5 + 0x58) = 0x3f800000
*(*arg5 + 0x38) = 0x3f800000
void* result = *arg5
*(result + 0x18) = 0x3f800000
return result
