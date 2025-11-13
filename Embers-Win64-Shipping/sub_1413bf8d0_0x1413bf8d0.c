// 函数: sub_1413bf8d0
// 地址: 0x1413bf8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = nullptr
arg1[2] = arg2
arg1[3] = 0
void* lpCriticalSection = &arg1[0x24]
int64_t i_4 = 0x12
arg1[1].d = arg6
int64_t i_3 = 0x12
*arg1 = &data_142f771b0
__builtin_memset(&arg1[4], 0, 0x100)
int64_t i

do
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection, 0xfa0)
    lpCriticalSection += 0x28
    i = i_3
    i_3 -= 1
while (i != 1)
void* r13 = &arg1[0x7e]
int64_t i_1 = 0x12
void* rdi = r13 + 0x28

do
    *r13 = 0
    __builtin_memset(rdi - 0x20, 0, 0x20)
    __builtin_memset(rdi, 0, 0x20)
    
    if (*(rdi + 4) s< 1)
        sub_1405dadb0(rdi - 8, 1)
    
    int32_t rax_2 = *rdi + 1
    *rdi = rax_2
    
    if (rax_2 s> *(rdi + 4))
        sub_1405a4cf0(rdi - 8)
    
    if (*(rdi + 0x14) s< 1)
        sub_1405dadb0(rdi + 8, 1)
    
    int64_t r15_1 = sx.q(*(rdi + 0x10))
    int32_t rax_3 = (r15_1 + 1).d
    *(rdi + 0x10) = rax_3
    
    if (rax_3 s> *(rdi + 0x14))
        sub_1405a4cf0(rdi + 8)
    
    int64_t rax_4 = *(rdi + 8)
    r13 += 0x48
    rdi += 0x48
    *(rax_4 + (r15_1 << 2)) = 0x80000000
    i_1 -= 1
while (i_1 != 0)

void* r8 = &arg1[0x120]
void* rdx_2 = r8 + 0x20
int32_t r15_2 = (i_1 - 1).d
int64_t i_2

do
    *r8 = 0
    void* rcx_6 = rdx_2 - 0x10
    *(rdx_2 - 0x18) = 0
    r8 += 0x40
    *rdx_2 = 0
    *(rdx_2 + 8) = 0
    *(rdx_2 + 0xc) = 0x80
    void* rax_5 = *rdx_2
    rdx_2 += 0x40
    
    if (rax_5 != 0)
        rcx_6 = rax_5
    
    *rcx_6 = 0
    *(rcx_6 + 8) = 0
    *(rdx_2 - 0x30) = r15_2
    *(rdx_2 - 0x2c) = 0
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
arg1[0x1b0] = 0
void* rcx_7 = &arg1[0x1b2]
arg1[0x1b1] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_6 = *(rcx_7 + 0x10)

if (rax_6 != 0)
    rcx_7 = rax_6

*rcx_7 = 0
*(rcx_7 + 8) = 0
void* rcx_8 = &arg1[0x1cd]
arg1[0x1b6].d = r15_2
__builtin_memset(arg1 + 0xdb4, 0, 0xb4)
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_7 = *(rcx_8 + 0x10)

if (rax_7 != 0)
    rcx_8 = rax_7

*rcx_8 = 0
*(rcx_8 + 8) = 0
void* rcx_9 = &arg1[0x1d3]
arg1[0x1d1] = 0
arg1[0x1d2] = 0
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_8 = *(rcx_9 + 0x10)

if (rax_8 != 0)
    rcx_9 = rax_8

*rcx_9 = 0
*(rcx_9 + 8) = 0
void* rcx_10 = &arg1[0x1df]
arg1[0x1d7].d = r15_2
*(arg1 + 0xebc) = 0
arg1[0x1d9] = 0
arg1[0x1da].d = 0
__builtin_memset(&arg1[0x1db], 0, 0x20)
*(rcx_10 + 0x10) = 0
*(rcx_10 + 0x18) = 0
*(rcx_10 + 0x1c) = 0x80
void* rax_9 = *(rcx_10 + 0x10)

if (rax_9 != 0)
    rcx_10 = rax_9

*rcx_10 = 0
*(rcx_10 + 8) = 0
void* rcx_11 = &arg1[0x1e6]
arg1[0x1e3].d = r15_2
__builtin_memset(arg1 + 0xf1c, 0, 0x14)
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x1c) = 0x80
void* rax_10 = *(rcx_11 + 0x10)
int64_t r12 = sx.q(arg6)

if (rax_10 != 0)
    rcx_11 = rax_10

*rcx_11 = 0
*(rcx_11 + 8) = 0
void* rcx_12 = &arg1[0x1fb]
arg1[0x1ea].d = r15_2
__builtin_memset(arg1 + 0xf54, 0, 0x14)
arg1[0x1ef].w = 0x100
__builtin_memset(&arg1[0x1f0], 0, 0x20)
arg1[0x1f9] = 0
arg1[0x1fa] = 0
*(rcx_12 + 0x10) = 0
*(rcx_12 + 0x18) = 0
*(rcx_12 + 0x1c) = 0x80
void* rax_11 = *(rcx_12 + 0x10)

if (rax_11 != 0)
    rcx_12 = rax_11

*rcx_12 = 0
*(rcx_12 + 8) = 0
void* rcx_13 = &arg1[0x211]
arg1[0x1ff].d = r15_2
__builtin_memset(arg1 + 0xffc, 0, 0x34)
arg1[0x206].w = 1
__builtin_memset(&arg1[0x207], 0, 0x20)
arg1[0x20c].d = r15_2
*(arg1 + 0x1064) = r12.b
arg1[0x20b] = &data_142f77170
__builtin_memset(&arg1[0x20d], 0, 0x20)
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_12 = *(rcx_13 + 0x10)

if (rax_12 != 0)
    rcx_13 = rax_12

*rcx_13 = 0
*(rcx_13 + 8) = 0
void* rcx_14 = &arg1[0x219]
arg1[0x215].d = r15_2
*(arg1 + 0x10ac) = 0
arg1[0x217] = 0
arg1[0x218].d = 0
*(rcx_14 + 0x10) = 0
*(rcx_14 + 0x18) = 0
*(rcx_14 + 0x1c) = 0x80
void* rax_13 = *(rcx_14 + 0x10)

if (rax_13 != 0)
    rcx_14 = rax_13

*rcx_14 = 0
*(rcx_14 + 8) = 0
void* rcx_15 = &arg1[0x222]
arg1[0x21d] = 0
arg1[0x21e] = 0
arg1[0x220] = 0
arg1[0x221] = 0
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_14 = *(rcx_15 + 0x10)

if (rax_14 != 0)
    rcx_15 = rax_14

*rcx_15 = 0
*(rcx_15 + 8) = 0
arg1[0x226].d = r15_2
*(arg1 + 0x1134) = 0
arg1[0x228] = 0
arg1[0x229] = 0
sub_141218920(&arg1[0x22a], r12.b)
arg1[0x258] = 0
void* rcx_17 = &arg1[0x25a]
arg1[0x259] = 0
*(rcx_17 + 0x10) = 0
*(rcx_17 + 0x18) = 0
*(rcx_17 + 0x1c) = 0x80
void* rax_15 = *(rcx_17 + 0x10)

if (rax_15 != 0)
    rcx_17 = rax_15

*rcx_17 = 0
*(rcx_17 + 8) = 0
arg1[0x25e].d = r15_2
*(arg1 + 0x12f4) = 0
arg1[0x260] = 0
arg1[0x261].d = 0
sub_142287c20(&arg1[0x262])
arg1[0x2d9] = arg1
sub_142287c00(&arg1[0x2da])
__builtin_memset(&arg1[0x2dd], 0, 0x18)
void* rcx_20 = &arg1[0x2e3]
arg1[0x2da] = &arg1[0x262]
arg1[0x2e0].b = 0
arg1[0x2e1] = 0
arg1[0x2e2] = 0
*(rcx_20 + 0x10) = 0
*(rcx_20 + 0x18) = 0
*(rcx_20 + 0x1c) = 0x80
void* rax_16 = *(rcx_20 + 0x10)

if (rax_16 != 0)
    rcx_20 = rax_16

*rcx_20 = 0
*(rcx_20 + 8) = 0
__builtin_memset(&arg1[0x2e7], 0, 0x1c)
__builtin_memset(&arg1[0x2eb], 0, 0x1c)
__builtin_memset(&arg1[0x2ef], 0, 0x14)
__builtin_memset(&arg1[0x2f2], 0, 0x14)
__builtin_memset(&arg1[0x2f5], 0, 0x21)
arg1[0x2fa].d = 0
arg1[0x305] = 0
arg1[0x306].d = 0
*(arg1 + 0x1834) = 0xa
__builtin_memset(&arg1[0x307], 0, 0x1c)
__builtin_memset(&arg1[0x30b], 0, 0x14)
__builtin_memset(&arg1[0x30e], 0, 0x14)
__builtin_memset(&arg1[0x311], 0, 0x21)
int32_t r8_1 = sub_1413be600(&arg1[0x316], (*U"1111")[r12])
arg1[0x357] = 0
void* rcx_22 = &arg1[0x359]
arg1[0x358] = 0
void* rdi_1 = &arg1[0x366]
*(rcx_22 + 0x10) = 0
*(rcx_22 + 0x18) = 0
*(rcx_22 + 0x1c) = 0x80
void* rax_17 = *(rcx_22 + 0x10)

if (rax_17 != 0)
    rcx_22 = rax_17

*rcx_22 = 0
*(rcx_22 + 8) = 0
arg1[0x35d].d = r15_2
*(arg1 + 0x1aec) = 0
arg1[0x35f] = 0
arg1[0x360].d = 0
__builtin_memset(&arg1[0x361], 0, 0x24)
*(arg1 + 0x1b2c) = 0x100
arg1[0x373] = 0
arg1[0x374].d = 0
*(arg1 + 0x1ba4) = 5
*(rdi_1 + 0x70) += 1

if (*(rdi_1 + 0x70) s> *(rdi_1 + 0x74))
    r8_1 = sub_1413f6cc0(rdi_1, 0)

void* rax_19 = *(rdi_1 + 0x68)

if (rax_19 != 0)
    rdi_1 = rax_19

if (rdi_1 != 0)
    *rdi_1 = -1
    *(rdi_1 + 8) = 0
    *(rdi_1 + 0x10) = 0

arg1[0x375] = 0
void* rcx_24 = &arg1[0x377]
arg1[0x376] = 0
*(rcx_24 + 0x10) = 0
*(rcx_24 + 0x18) = 0
*(rcx_24 + 0x1c) = 0x80
void* rax_20 = *(rcx_24 + 0x10)

if (rax_20 != 0)
    rcx_24 = rax_20

*rcx_24 = 0
*(rcx_24 + 8) = 0
void* rcx_25 = &arg1[0x37e]
arg1[0x37b].d = r15_2
__builtin_memset(arg1 + 0x1bdc, 0, 0x14)
*(rcx_25 + 0x10) = 0
*(rcx_25 + 0x18) = 0
*(rcx_25 + 0x1c) = 0x80
void* rax_21 = *(rcx_25 + 0x10)

if (rax_21 != 0)
    rcx_25 = rax_21

*rcx_25 = 0
*(rcx_25 + 8) = 0
void* rcx_26 = &arg1[0x38f]
arg1[0x382].d = r15_2
__builtin_memset(arg1 + 0x1c14, 0, 0x64)
*(rcx_26 + 0x10) = 0
*(rcx_26 + 0x18) = 0
*(rcx_26 + 0x1c) = 0x80
void* rax_22 = *(rcx_26 + 0x10)

if (rax_22 != 0)
    rcx_26 = rax_22

*rcx_26 = 0
*(rcx_26 + 8) = 0
void* rcx_27 = &arg1[0x399]
arg1[0x393].d = r15_2
*(arg1 + 0x1c9c) = 0
arg1[0x395] = 0
arg1[0x396].d = 0
arg1[0x397] = 0
arg1[0x398] = 0
*(rcx_27 + 0x10) = 0
*(rcx_27 + 0x18) = 0
*(rcx_27 + 0x1c) = 0x80
void* rax_23 = *(rcx_27 + 0x10)

if (rax_23 != 0)
    rcx_27 = rax_23

*rcx_27 = 0
*(rcx_27 + 8) = 0
void* rcx_28 = &arg1[0x3a3]
arg1[0x39d].d = r15_2
*(arg1 + 0x1cec) = 0
arg1[0x39f] = 0
arg1[0x3a0].d = 0
arg1[0x3a1] = 0
arg1[0x3a2] = 0
*(rcx_28 + 0x10) = 0
*(rcx_28 + 0x18) = 0
*(rcx_28 + 0x1c) = 0x80
void* rax_24 = *(rcx_28 + 0x10)

if (rax_24 != 0)
    rcx_28 = rax_24

*rcx_28 = 0
*(rcx_28 + 8) = 0
arg1[0x3a7].d = r15_2
*(arg1 + 0x1d3c) = 0
arg1[0x3a9] = 0
arg1[0x3aa].d = 0
arg1[0x3ab] = 0
int32_t r8_2 = sub_1413bf050(&arg1[0x3ac], 0, r8_1)
float zmm0 = data_143dbb1f8
int32_t zmm1 = data_143dbb1fc
float zmm7[0x4] = zx.o(0)
int32_t zmm3 = data_143dbb200
int128_t zmm4 = data_142f79480
arg1[0x41f] = 0
int32_t var_8c = 0
float var_98[0x4]
var_98[0] = zmm0
int128_t var_88 = zmm4
float temp0[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
zmm0 = zmm4.d * 0.53125f
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3
arg1[0x41e].d = zmm0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
*(arg1 + 0x20d0) = temp0_2
*(arg1 + 0x20e0) = zmm4
zmm4.d = zmm4.d f- zmm0
float var_98_1[0x4] = temp0_2
*(arg1 + 0x20f4) = zmm4.d
arg1[0x420].d = 0x44047914
arg1[0x421] = 0
arg1[0x422] = 0
arg1[0x423] = 0
sub_1413bf0c0(&arg1[0x424], 0, r8_2)
zmm0 = data_143dbb1f8
void* rcx_31 = &arg1[0xc3e]
zmm1 = data_143dbb1fc
zmm3 = data_143dbb200
zmm4 = data_142f79480
arg1[0xc35] = 0
int32_t var_6c = 0
float var_78[0x4]
var_78[0] = zmm0
int128_t var_68 = zmm4
float temp0_3[0x4] = _mm_shuffle_ps(var_78, var_78, 0xe1)
zmm0 = zmm4.d * 0.53125f
temp0_3[0] = zmm1
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm3
arg1[0xc34].d = zmm0
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
*(arg1 + 0x6180) = temp0_5
*(arg1 + 0x6190) = zmm4
float var_78_1[0x4] = temp0_5
zmm4.d = zmm4.d f- zmm0
*(arg1 + 0x61a4) = zmm4.d
arg1[0xc36].d = 0x44047914
arg1[0xc37] = 0
*(arg1 + 0x61c1) = arg4
arg1[0xc38].b = arg3
*(arg1 + 0x61c4) = 0
arg1[0xc39].d = 0
*(arg1 + 0x61cc) = 0
__builtin_memset(&arg1[0xc3b], 0, 0x18)
*(rcx_31 + 0x10) = 0
*(rcx_31 + 0x18) = 0
*(rcx_31 + 0x1c) = 0x80
void* rax_26 = *(rcx_31 + 0x10)

if (rax_26 != 0)
    rcx_31 = rax_26

*rcx_31 = 0
*(rcx_31 + 8) = 0
arg1[0xc42].d = r15_2
*(arg1 + 0x6214) = 0
arg1[0xc44] = 0
void* rcx_32 = &arg1[0xc49]
arg1[0xc45].d = 0
__builtin_memset(&arg1[0xc46], 0, 0x18)
*(rcx_32 + 0x10) = 0
*(rcx_32 + 0x18) = 0
*(rcx_32 + 0x1c) = 0x80
void* rax_27 = *(rcx_32 + 0x10)

if (rax_27 != 0)
    rcx_32 = rax_27

*rcx_32 = 0
*(rcx_32 + 8) = 0
void* rcx_33 = &arg1[0xc54]
arg1[0xc4d].d = r15_2
*(arg1 + 0x626c) = 0
arg1[0xc4f] = 0
arg1[0xc50].d = 0
arg1[0xc51] = arg1
arg1[0xc52] = 0
arg1[0xc53] = 0
*(rcx_33 + 0x10) = 0
*(rcx_33 + 0x18) = 0
*(rcx_33 + 0x1c) = 0x80
void* rax_28 = *(rcx_33 + 0x10)

if (rax_28 != 0)
    rcx_33 = rax_28

*rcx_33 = 0
*(rcx_33 + 8) = 0
void* rcx_34 = &arg1[0xc5e]
arg1[0xc58].d = r15_2
*(arg1 + 0x62c4) = 0
arg1[0xc5a] = 0
arg1[0xc5b].d = 0
arg1[0xc5c] = 0
arg1[0xc5d] = 0
*(rcx_34 + 0x10) = 0
*(rcx_34 + 0x18) = 0
*(rcx_34 + 0x1c) = 0x80
void* rax_29 = *(rcx_34 + 0x10)

if (rax_29 != 0)
    rcx_34 = rax_29

*rcx_34 = 0
*(rcx_34 + 8) = 0
arg1[0xc62].d = r15_2
*(arg1 + 0x6314) = 0
arg1[0xc63].d = *(sub_142437e30(arg2, 0, 1) + 0x288)
*(arg1 + 0x631c) = *(sub_142437e30(arg2, 0, 1) + 0x28c)
float zmm0_1[0x4] = *(sub_142437e30(arg2, 0, 1) + 0x290)

if (not(zmm0_1[0] < 0f))
    zmm7 = __minss_xmmss_memss(zmm0_1[0], 0x3f800000)

arg1[0xc64].d = zmm7[0]
arg1[0xc65] = &data_143f552a0
arg1[0xc66] = 0
sub_1411c8240(&arg1[0xc67])
sub_1411c8180(&arg1[0xc6b])
arg1[0xc71] = 0
void* rcx_42 = &arg1[0xc73]
arg1[0xc72] = 0
*(rcx_42 + 0x10) = 0
*(rcx_42 + 0x18) = 0
*(rcx_42 + 0x1c) = 0x80
void* rax_33 = *(rcx_42 + 0x10)

if (rax_33 != 0)
    rcx_42 = rax_33

*rcx_42 = 0
*(rcx_42 + 8) = 0
void* rcx_43 = &arg1[0xc7d]
arg1[0xc77].d = r15_2
*(arg1 + 0x63bc) = 0
arg1[0xc79] = 0
arg1[0xc7a].d = 0
arg1[0xc7b] = 0
arg1[0xc7c] = 0
*(rcx_43 + 0x10) = 0
*(rcx_43 + 0x18) = 0
*(rcx_43 + 0x1c) = 0x80
void* rax_34 = *(rcx_43 + 0x10)

if (rax_34 != 0)
    rcx_43 = rax_34

*rcx_43 = 0
*(rcx_43 + 8) = 0
void* rcx_44 = &arg1[0xc87]
arg1[0xc81].d = r15_2
*(arg1 + 0x640c) = 0
arg1[0xc83] = 0
arg1[0xc84].d = 0
arg1[0xc85] = 0
arg1[0xc86] = 0
*(rcx_44 + 0x10) = 0
*(rcx_44 + 0x18) = 0
*(rcx_44 + 0x1c) = 0x80
void* rax_35 = *(rcx_44 + 0x10)

if (rax_35 != 0)
    rcx_44 = rax_35

*rcx_44 = 0
*(rcx_44 + 8) = 0
void* rcx_45 = &arg1[0xc91]
arg1[0xc8b].d = r15_2
*(arg1 + 0x645c) = 0
arg1[0xc8d] = 0
arg1[0xc8e].d = 0
arg1[0xc8f] = 0
arg1[0xc90] = 0
*(rcx_45 + 0x10) = 0
*(rcx_45 + 0x18) = 0
*(rcx_45 + 0x1c) = 0x80
void* rax_36 = *(rcx_45 + 0x10)

if (rax_36 != 0)
    rcx_45 = rax_36

*rcx_45 = 0
*(rcx_45 + 8) = 0
void* rcx_46 = &arg1[0xc9b]
arg1[0xc95].d = r15_2
*(arg1 + 0x64ac) = 0
arg1[0xc97] = 0
arg1[0xc98].d = 0
arg1[0xc99] = 0
arg1[0xc9a] = 0
*(rcx_46 + 0x10) = 0
*(rcx_46 + 0x18) = 0
*(rcx_46 + 0x1c) = 0x80
void* rax_37 = *(rcx_46 + 0x10)

if (rax_37 != 0)
    rcx_46 = rax_37

*rcx_46 = 0
*(rcx_46 + 8) = 0
arg1[0xc9f].d = r15_2
*(arg1 + 0x64fc) = 0
arg1[0xca1] = 0
void* rcx_47 = &arg1[0xca5]
arg1[0xca2].d = 0
arg1[0xca3] = 0
arg1[0xca4] = 0
*(rcx_47 + 0x10) = 0
*(rcx_47 + 0x18) = 0
*(rcx_47 + 0x1c) = 0x80
void* rax_38 = *(rcx_47 + 0x10)

if (rax_38 != 0)
    rcx_47 = rax_38

*rcx_47 = 0
*(rcx_47 + 8) = 0
void* rcx_48 = &arg1[0xcaf]
arg1[0xca9].d = r15_2
*(arg1 + 0x654c) = 0
arg1[0xcab] = 0
arg1[0xcac].d = 0
arg1[0xcad] = 0
arg1[0xcae] = 0
*(rcx_48 + 0x10) = 0
*(rcx_48 + 0x18) = 0
*(rcx_48 + 0x1c) = 0x80
void* rax_39 = *(rcx_48 + 0x10)

if (rax_39 != 0)
    rcx_48 = rax_39

*rcx_48 = 0
*(rcx_48 + 8) = 0
arg1[0xcb3].d = r15_2
*(arg1 + 0x659c) = 0
arg1[0xcb5] = 0
arg1[0xcb6].d = 0
__builtin_memset(&arg1[0xcb7], 0, 0x14)
__builtin_memset(&arg1[0x1f4], 0, 0x28)
arg1[2][0x36] = arg1
void* rcx_49 = arg1[2]
arg1[1].d = zx.d(*(rcx_49 + 0x118))
int64_t* rax_42 = *(rcx_49 + 0x468)

if (rax_42 != 0)
    sub_14218b5e0(rax_42)
    rcx_49 = arg1[2]

if (arg5 == 0)
    *(rcx_49 + 0x468) = 0
    arg1[3] = 0
else
    sub_14242fad0(rcx_49)

if (sub_142060c40((*U"1111")[r12]) != 0)
    void* rax_44 = j_sub_140a82f30(0xb0)
    void* const rax_45
    
    if (rax_44 == 0)
        rax_45 = nullptr
    else
        rax_45 = sub_142048320(rax_44, arg4 ^ 1)
    
    arg1[0xc46] = rax_45

if (data_143f0f21f != 0)
    uint64_t rdx_6 = zx.q(data_143f0f1a0)
    
    if (((*(sx.q(rdx_6.d) * 0x14 + &data_143f025fc) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, rdx_6))
        int64_t* rax_50 = j_sub_140a82f30(0x18)
        
        if (rax_50 != 0)
            rbp = sub_1413852a0(rax_50)
        
        arg1[0xc66] = rbp

sub_141997e80(&arg1[0xc6b])
sub_14244a610(arg1[2], 0, 0)
char rax_52 = sub_140a80f40()

if (rax_52 != 0)
    sub_1413ec950(&arg1[4])
else if (data_143f138f4 != rax_52)
label_1413c0a68:
    void var_b8
    void** rax_54 = sub_1413dcd70(&var_b8, nullptr, 0xff)
    *(*rax_54 + 0x10) = &arg1[4]
    void* rcx_59 = *rax_54
    int64_t* rdi_5 = *(rcx_59 + 0x20)
    
    if (rdi_5 != 0)
        rdi_5[9].d += 1
    
    sub_1405a5630(rcx_59, rax_54[1], rax_54[2].d, 1)
    
    if (rdi_5 != 0)
        rdi_5[9].d += r15_2
        
        if (rdi_5[9].d == 1)
            sub_140a2f6e0(rdi_5)
else if (data_143de5480 == rax_52)
    sub_1413ec950(&arg1[4])
else
    uint32_t rax_53
    rax_53.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_53.b == 0)
        goto label_1413c0a68
    
    sub_1413ec950(&arg1[4])

sub_141402ac0(arg1)
return arg1
