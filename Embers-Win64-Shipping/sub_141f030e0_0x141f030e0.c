// 函数: sub_141f030e0
// 地址: 0x141f030e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143266d10
arg1[2] = arg2
arg1[3] = sub_141ee6400(arg2)
int64_t rsi = 0
arg1[4] = 0
arg1[5].d = 0
*(arg1 + 0x2c) = 0x3f800000
char rdx = 0
arg1[0x19].d = arg2[0x42].d
*(arg1 + 0xcc) = _mm_max_ss(*(arg2 + 0x214), 0)
arg1[0x1a].d = arg2[0x48].d
*(arg1 + 0xd4) = *(arg2 + 0x244)
arg1[0x1b].d = arg2[0x49].d
*(arg1 + 0xdc) = *(arg2 + 0x24c)
arg1[0x1c].d = arg2[0x4a].d
*(arg1 + 0xe4) = *(arg2 + 0x23c)
*(arg1 + 0xe8) = *(arg2 + 0x1f0)
arg1[0x20].d = arg2[0x55].d
char rax_9 = arg1[0x27].b
arg1[0x26] = 0
rax_9 = ((rax_9 ^ *(arg2 + 0x254)) & 1) ^ arg1[0x27].b
arg1[0x27].b = rax_9

if (*(arg2 + 0x14f) == 2)
    rdx = 2

rdx |= rax_9 & 0xfd
arg1[0x27].b = rdx

if (*(arg2 + 0x14f) != 0 || arg2[0x14] == 0)
    rax_9 = 0
else
    rax_9 = 4

rdx = (rdx & 0xfb) | rax_9
arg1[0x27].b = rdx

if (*(arg2 + 0x14f) == 2 || arg2[0x14] == 0)
    rax_9 = 0
else
    rax_9 = 8

rdx = (rdx & 0xf7) | rax_9
char rcx_1 = 0
arg1[0x27].b = rdx

if (((*(arg2 + 0x20c)).b & 0xa) == 0xa)
    rcx_1 = 0x10

rcx_1 |= rdx & 0xef
arg1[0x27].b = rcx_1
uint8_t rdx_1 = 0

if (((*(arg2 + 0x20c)).b & 6) == 6)
    rdx_1 = 0x20

rdx_1 |= rcx_1 & 0xdf
arg1[0x27].b = rdx_1
rdx_1 ^= ((*(arg2 + 0x254) u>> 2).b << 6 ^ rdx_1) & 0x40
arg1[0x27].b = rdx_1
uint8_t rax_15

if ((*(arg2 + 0x20c) & 0x20) == 0 || (rdx_1 & 0x18) != 0x10)
    rax_15 = 0
else
    rax_15 = 0x80

arg1[0x27].b = (rdx_1 & 0x7f) | rax_15
*(arg1 + 0x139) ^= ((*(arg2 + 0x20c) u>> 6).b ^ *(arg1 + 0x139)) & 1
char rax_18 = *(arg1 + 0x139)
uint8_t rcx_3 = ((((*(arg2 + 0x20c) u>> 7).b * 2) ^ rax_18) & 2) ^ rax_18
*(arg1 + 0x139) = rcx_3
uint8_t rax_20 = (((*(arg2 + 0x254) u>> 3).b << 2 ^ rcx_3) & 4) ^ rcx_3
*(arg1 + 0x139) = rax_20
uint8_t rcx_5 = (((*(arg2 + 0x254) u>> 5).b << 3 ^ rax_20) & 8) ^ rax_20
*(arg1 + 0x139) = rcx_5
uint8_t rax_22 = (((*(arg2 + 0x20c) u>> 8).b << 4 ^ rcx_5) & 0x10) ^ rcx_5
*(arg1 + 0x139) = rax_22
uint8_t rdx_3 = (((*(arg2 + 0x20c) u>> 9).b << 5 ^ rax_22) & 0x20) ^ rax_22
*(arg1 + 0x139) = rdx_3
uint8_t rcx_7 = (((*(arg2 + 0x20c) u>> 0xa).b << 6 ^ rdx_3) & 0x40) ^ rdx_3
*(arg1 + 0x139) = rcx_7
*(arg1 + 0x139) = (*(arg2 + 0x20c) u>> 4).b << 7 | (rcx_7 & 0x7f)
char rax_26 = (*(*arg2 + 0x560))(arg2)
char rcx_9 = ((*(arg1 + 0x13a) ^ rax_26) & 1) ^ *(arg1 + 0x13a)
*(arg1 + 0x13a) = rcx_9
uint32_t rax_28
rax_28.b = (*(arg2 + 0x254) u>> 4).b * 2
rax_28.b ^= rcx_9
rax_28.b &= 2
rax_28.b ^= rcx_9
*(arg1 + 0x13a) = rax_28.b

if ((*(arg2 + 0x254) & 0x10) != 0)
    rax_28 = (*(*arg2 + 0x548))(arg2)

if ((*(arg2 + 0x254) & 0x10) == 0 || rax_28 != 0)
    rax_28.b = 0
else
    rax_28.b = 4

char rcx_11 = (*(arg1 + 0x13a) & 0xfb) | rax_28.b
*(arg1 + 0x13a) = rcx_11
*(arg1 + 0x13a) = (rcx_11 ^ ((*(arg2 + 0x2a4) << 3 ^ rcx_11) & 8)) & 0x8f
*(arg1 + 0x13b) = (*(*arg2 + 0x568))(arg2)
*(arg1 + 0x13c) = (*(*arg2 + 0x548))(arg2)
*(arg1 + 0x13d) = arg2[0x4b].b & 7
void* rax_36 = arg2[0x14]
int64_t rax_37

if (rax_36 == 0)
    rax_37 = arg2[3]
else
    rax_37 = *(rax_36 + 0x18)

arg1[0x28] = rax_37
arg1[0x29] = *(sub_140d21d80(arg2) + 0x18)
arg1[0x2a] = 0
arg1[0x2d].d = 0x3f800000
*(arg1 + 0x16c) = 1
int32_t* rax_39
int128_t zmm0_1
rax_39, zmm0_1 = sub_141f15810(arg2)
char rcx_17

if (rax_39 != 0)
    rcx_17 = arg1[0x27].b

int32_t rax_40

if (rax_39 == 0 || (rcx_17 & 8) == 0 || (rcx_17 & 4) != 0)
    rax_40 = -1
else
    rax_40 = *rax_39

arg1[0x1f].d = rax_40
int32_t rax_41 = *(arg2 + 0x234)

if (rax_41 == 0xffffffff)
    rax_41 = arg1[0x1f].d

int64_t* rdi_1 = arg1[2]
*(arg1 + 0xfc) = rax_41
arg1[0x21] = &rdi_1[0x57]
int64_t rax_43 = rdi_1[0x4f]

if (rax_43 != 0)
    arg1[0x26] = rax_43

(*(*rdi_1 + 0x570))(rdi_1)
void var_68
int32_t* rax_45 = sub_140acc920(&var_68, &rdi_1[0x41])
int128_t zmm7
zmm7.d = zmm0_1.d f* *rax_45
int128_t zmm8
zmm8.d = zmm0_1.d f* rax_45[1]
int128_t zmm9
zmm9.d = zmm0_1.d f* rax_45[2]
int128_t zmm6
zmm6.d = zmm0_1.d f* rax_45[3]
int32_t var_78 = zmm7.d
int32_t var_74 = zmm8.d
int32_t var_70 = zmm9.d
int32_t var_6c = zmm6.d

if ((*(rdi_1 + 0x22c) & 1) != 0)
    int32_t var_58[0x4]
    int32_t* rax_46
    float zmm6_1
    rax_46, zmm6_1 = sub_140ad9f00(&var_58, rdi_1[0x44].d)
    zmm7.d = zmm7.d f* *rax_46
    zmm8.d = zmm8.d f* rax_46[1]
    zmm9.d = zmm9.d f* rax_46[2]
    var_78 = zmm7.d
    int32_t var_74_1 = zmm8.d
    int32_t var_70_1 = zmm9.d
    float var_6c_1 = zmm6_1 f* rax_46[3]

void* rax_47 = arg1[2]
*(arg1 + 0x30) = var_78.o
int64_t* rcx_21 = *(rax_47 + 0x260)

if (rcx_21 != 0 && *((*(*rcx_21 + 0x268))(rcx_21) + 0x150) == 2)
    int64_t* rcx_22 = arg1[2][0x4c]
    rsi = (*(*rcx_22 + 0x280))(rcx_22)

arg1[0x25] = rsi
void* rcx_23 = arg1[2]
arg1[0x22] = *(rcx_23 + 0x268)
arg1[0x23].d = *(rcx_23 + 0x270)
*(arg1 + 0x11c) = *(rcx_23 + 0x288)
arg1[0x24].d = *(rcx_23 + 0x28c)
*(arg1 + 0x16c) = *(rcx_23 + 0x218)
return arg1
