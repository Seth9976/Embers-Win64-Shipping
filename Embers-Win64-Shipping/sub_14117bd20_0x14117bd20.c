// 函数: sub_14117bd20
// 地址: 0x14117bd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t var_258
sub_14117aa90(&var_258)
int32_t* rbx = *arg1
var_258 = *rbx
int32_t var_254 = rbx[1].d
int32_t var_250 = rbx[2]
int32_t var_24c = rbx[3]
int32_t var_248 = rbx[4]
int32_t var_244 = rbx[5].d
int32_t var_240 = rbx[6].d
int32_t var_23c = rbx[7]
int32_t var_238 = rbx[8].d
int32_t var_234 = rbx[9]
int32_t var_230 = rbx[0xa]
int32_t var_22c = rbx[0xb]
int64_t var_228 = *(rbx + 0x30)
int64_t var_220 = *(rbx + 0x38)
int64_t var_218 = *(rbx + 0x40)
int64_t var_210 = *(rbx + 0x48)
int64_t var_208 = *(rbx + 0x50)
int128_t var_1f8 = *(rbx + 0x60)
int128_t var_1e8 = *(rbx + 0x70)
int128_t var_1d8 = *(rbx + 0x80)
int128_t var_1c8 = *(rbx + 0x90)
int128_t var_1b8 = *(rbx + 0xa0)
int128_t var_1a8 = *(rbx + 0xb0)
int128_t var_198 = *(rbx + 0xc0)
int128_t var_188 = *(rbx + 0xd0)
int128_t var_178 = *(rbx + 0xe0)
int64_t var_168 = *(rbx + 0xf0)
int64_t var_160 = *(rbx + 0xf8)
int64_t var_158 = *(rbx + 0x100)
int64_t var_150 = *(rbx + 0x108)
int64_t var_148 = *(rbx + 0x110)
int64_t var_140 = *(rbx + 0x118)
int64_t var_138 = *(rbx + 0x120)
void var_130
sub_1405d16e0(&var_130, *(rbx + 0x128))
void var_128
sub_1405d16e0(&var_128, *(rbx + 0x130))
void var_120
sub_1405d16e0(&var_120, *(rbx + 0x138))
void var_118
sub_1405d16e0(&var_118, *(rbx + 0x140))
void var_110
sub_1405d16e0(&var_110, *(rbx + 0x148))
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int128_t var_108
__builtin_memset(&var_108, 0, 0x30)
int128_t var_c0 = zx.o(0)
int16_t var_68 = 0
sub_140fdc870(arg2, &var_108)
void* rcx_7 = arg1[1]
int64_t var_d8 = data_1439b6090
int64_t var_d0 = data_14395da18
int64_t var_c8 = data_14395d9e8
var_108.q = data_1439c9210
int64_t rax_26 = 0

if (rcx_7 != 0)
    int64_t rdx_6 = sx.q(*(rcx_7 + 0x10c))
    int64_t* rbx_1 = *(arg1[2] + 0x10)
    int64_t rax_28 = rbx_1[3]
    
    if (*(rax_28 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_6.d)
        rax_28 = rbx_1[3]
    
    rax_26 = *(rax_28 + (rdx_6 << 3))

void* rcx_9 = arg1[3]
var_108:8.q = rax_26
int64_t rax_29 = 0

if (rcx_9 != 0)
    int64_t rdx_7 = sx.q(*(rcx_9 + 0x10c))
    int64_t* rsi_2 = *(arg1[4] + 0x10)
    int64_t rax_31 = rsi_2[3]
    
    if (*(rax_31 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_7.d)
        rax_31 = rsi_2[3]
    
    rax_29 = *(rax_31 + (rdx_7 << 3))

int128_t var_e8
var_e8.q = rax_29
int32_t var_b0 = 0
sub_1419870b0(arg2, &var_108, 2)
void* rax_32 = arg1[1]
int64_t r8 = 0

if (rax_32 != 0)
    int64_t rdx_9 = sx.q(*(rax_32 + 0x10c))
    int64_t* rsi_3 = *(arg1[2] + 0x10)
    int64_t rax_34 = rsi_3[3]
    
    if (*(rax_34 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rsi_3, rdx_9.d)
        rax_34 = rsi_3[3]
    
    r8 = *(rax_34 + (rdx_9 << 3))

sub_1411672e0(arg2, &arg1[1], r8, &var_258)
void* rax_35 = arg1[3]
int64_t r8_1 = 0

if (rax_35 != 0)
    int64_t rdx_11 = sx.q(*(rax_35 + 0x10c))
    int64_t* rsi_4 = *(arg1[4] + 0x10)
    int64_t rax_37 = rsi_4[3]
    
    if (*(rax_37 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rsi_4, rdx_11.d)
        rax_37 = rsi_4[3]
    
    r8_1 = *(rax_37 + (rdx_11 << 3))

sub_141166d20(arg2, &arg1[3], r8_1, *arg1)
uint128_t zmm7 = zx.o(arg1[5].d)
void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
void* rax_38 = &rcx_18[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_38 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_38 = &rcx_18[5]

*(arg2 + 0x30) = rax_38
void**** rax_39 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_39 = rcx_18
*(arg2 + 8) = &rcx_18[1]
*(rcx_18 + 0x1c) = zmm7.d
rcx_18[4].d = zmm6.d
rcx_18[1] = 0
*rcx_18 = &data_142d54998
rcx_18[2] = 0
rcx_18[3].d = 0
*(rcx_18 + 0x24) = 0x3f800000
void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_41 = &rcx_24[5]

if (rax_41 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_41 = &rcx_24[5]

*(arg2 + 0x30) = rax_41
int64_t* rax_42 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_42 = rcx_24
*(arg2 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142d56618
rcx_24[2].d = 0
rcx_24[3] = 0
rcx_24[4].d = 0
void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_44 = &rcx_30[4]

if (rax_44 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_44 = &rcx_30[4]

*(arg2 + 0x30) = rax_44
int64_t* rax_45 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_45 = rcx_30
*(arg2 + 8) = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142d54988
rcx_30[2].d = 0
*(rcx_30 + 0x14) = 1
rcx_30[3].d = 1
sub_1405d1550(&var_110)
sub_1405d1550(&var_118)
sub_1405d1550(&var_120)
sub_1405d1550(&var_128)
int64_t result = sub_1405d1550(&var_130)
__security_check_cookie(rax_1 ^ &var_278)
return result
