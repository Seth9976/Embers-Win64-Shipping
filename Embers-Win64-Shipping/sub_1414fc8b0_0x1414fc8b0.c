// 函数: sub_1414fc8b0
// 地址: 0x1414fc8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rax_2 = *(arg1 + 0x70)
void* var_158 = nullptr
int64_t* rcx_1 = *(arg1 + 0x10)
void* rax_4 = (*(*rcx_1 + 0x40))(rcx_1, zx.q(*(*(rax_2 + 8) + 8)), &var_158)
uint128_t zmm7 = zx.o(*(arg1 + 0x18))
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
void* rdx_1 = &rcx_4[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rdx_1 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rdx_1 = &rcx_4[5]

*(arg2 + 0x30) = rdx_1
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d54998
*(rcx_4 + 0x1c) = zmm7.d
rcx_4[4].d = zmm6.d
rcx_4[2] = 0
rcx_4[3].d = 0
*(rcx_4 + 0x24) = 0x3f800000
int128_t var_108
__builtin_memset(&var_108, 0, 0x30)
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int128_t var_c0 = zx.o(0)
int16_t var_68 = 0
sub_140fdc870(arg2, &var_108)
int64_t var_d0 = data_14395da18
int64_t var_d8 = data_14395da00
int64_t var_c8 = data_14395d9e8
int32_t var_b0 = 0
void* rax_10 = sub_1405948b0(rax_4)
sub_1419a2ec0(*(*(arg1 + 8) + 0x5150), &var_158, &data_143ed5e80, 0)
void* rax_11 = sub_1419cec70(*(rax_10 + 0x28), &data_143eef608, 0)
void* rax_12 = var_158
var_108.q = data_1439c9210
int64_t rcx_14 = 0

if (rax_12 != 0)
    int64_t rdx_4 = sx.q(*(rax_12 + 0x10c))
    void* var_150
    int64_t* rdi_1 = *(var_150 + 0x10)
    int64_t rax_13 = rdi_1[3]
    
    if (*(rax_13 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_4.d)
        rax_13 = rdi_1[3]
    
    rcx_14 = *(rax_13 + (rdx_4 << 3))

var_108:8.q = rcx_14
int64_t rax_14 = 0

if (rax_11 != 0)
    int64_t rdx_5 = sx.q(*(rax_11 + 0x10c))
    int64_t* rdi_2 = *(rax_10 + 0x10)
    int64_t rax_15 = rdi_2[3]
    
    if (*(rax_15 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_5.d)
        rax_15 = rdi_2[3]
    
    rax_14 = *(rax_15 + (rdx_5 << 3))

int128_t var_e8
var_e8.q = rax_14
sub_1419870b0(arg2, &var_108, 2)
int512_t zmm6_1
zmm6_1.o = 0x3f800000
zmm6_1.d = 1f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x18))).d
zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c))).d
uint32_t var_148[0x4][0x4]
int32_t rax_16
float zmm6_2[0x4]
int64_t zmm7_1
rax_16, zmm6_2, zmm7_1 = sub_140631b10(arg1 + 0x30, &var_148)
int32_t var_198 = rax_16
void* r9_1
int512_t zmm2
int512_t zmm3
r9_1, zmm2, zmm3 = sub_141512ea0(rax_11, arg2, *(arg1 + 8), *(arg1 + 0x20), *(arg1 + 0x10), 
    (_mm_unpacklo_ps(zmm6_2, zmm7_1)).q)
zmm2.o = zx.o(*(arg1 + 0x1c))
zmm3.o = zx.o(*(arg1 + 0x18))
int128_t zmm0_2 = var_158.o
int32_t var_160 = 1
int32_t var_168 = 0
void** var_170 = &var_158
int64_t rax_18 = *(arg1 + 0x18)
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int32_t var_188 = zmm2.d
int64_t var_1a0
var_1a0.d = 0
int64_t* var_1a8
var_1a8.d = zmm2.d
zmm2.o = zx.o(0)
var_158.o = zmm0_2
int64_t result = sub_1413993b0(arg2, zx.o(0), zmm2, r9_1, zmm3, var_1a8.d, var_1a0.d, 0, zmm3.d, 
    var_188, rax_18, rax_18, var_170, var_168, var_160)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
