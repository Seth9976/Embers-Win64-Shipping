// 函数: sub_1413c72c0
// 地址: 0x1413c72c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rdi = *arg1
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rdi))
void* rax_2 = &rcx_2[5]

if (rax_2 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_2[5]

*(arg2 + 0x30) = rax_2
void**** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142d54998
*(rcx_2 + 0x1c) = zmm6.d
rcx_2[4].d = zmm6.d
rcx_2[2] = 0
rcx_2[3].d = 0
*(rcx_2 + 0x24) = 0x3f800000
int128_t var_108
__builtin_memset(&var_108, 0, 0x30)
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int128_t var_c0 = zx.o(0)
int16_t var_68 = 0
sub_140fdc870(arg2, &var_108)
int64_t var_d0 = data_14395da18
int64_t var_c8 = data_14395d9e8
int64_t var_d8 = data_14395da00
int128_t var_148
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[sx.q(arg1[4])]), &var_148, &data_143ec9a30, 0)
int64_t rax_10 = sx.q(arg1[4])
int128_t zmm7 = var_148
int128_t var_118 = zmm7
int128_t var_158
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rax_10]), &var_158, &data_143ec9b40, 0)
void* r13 = zmm7.q
var_108.q = data_1439c9210
int64_t rax_13 = 0
int128_t var_128 = var_158

if (r13 != 0)
    int64_t rdx_3 = sx.q(*(r13 + 0x10c))
    int64_t* rsi_2 = *(var_148:8.q + 0x10)
    int64_t rax_14 = rsi_2[3]
    
    if (*(rax_14 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_3.d)
        rax_14 = rsi_2[3]
    
    rax_13 = *(rax_14 + (rdx_3 << 3))

void* rsi_3 = var_158.q
var_108:8.q = rax_13
int64_t rax_15 = 0

if (rsi_3 != 0)
    int64_t rdx_4 = sx.q(*(rsi_3 + 0x10c))
    int64_t* r15_3 = *(var_158:8.q + 0x10)
    int64_t rax_16 = r15_3[3]
    
    if (*(rax_16 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_4.d)
        rax_16 = r15_3[3]
    
    rax_15 = *(rax_16 + (rdx_4 << 3))

int128_t var_e8
var_e8.q = rax_15
int32_t var_b0 = 0
sub_1419870b0(arg2, &var_108, 2)
void** rdx_6 = *(arg1 + 0x18)
int64_t var_138 = 0
sub_1405d16e0(&var_138, *rdx_6)
int64_t r8 = 0

if (r13 != 0)
    int64_t rdx_8 = sx.q(*(r13 + 0x10c))
    int64_t* r15_4 = *(var_148:8.q + 0x10)
    int64_t rax_18 = r15_4[3]
    
    if (*(rax_18 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(r15_4, rdx_8.d)
        rax_18 = r15_4[3]
    
    r8 = *(rax_18 + (rdx_8 << 3))

sub_1413bbb00(arg2, &var_118, r8, &var_138)
int64_t r8_1 = 0

if (rsi_3 != 0)
    int64_t rdx_10 = sx.q(*(rsi_3 + 0x10c))
    int64_t* rsi_4 = *(var_158:8.q + 0x10)
    int64_t rax_20 = rsi_4[3]
    
    if (*(rax_20 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rsi_4, rdx_10.d)
        rax_20 = rsi_4[3]
    
    r8_1 = *(rax_20 + (rdx_10 << 3))

void* r9_2
int512_t zmm2
int512_t zmm3
int128_t zmm6_1
r9_2, zmm2, zmm3, zmm6_1 = sub_1413bb540(arg2, &var_128, r8_1, *(arg1 + 0x18))
int32_t rax_21 = data_1439b6b98
int32_t rcx_19

if (rax_21 s>= 1)
    rcx_19 = 8
    
    if (rax_21 s< 8)
        rcx_19 = rax_21
else
    rcx_19 = 1

void* rax_22 = *(arg1 + 8)
int32_t var_160 = 1
zmm3.o = zmm6_1
int32_t var_168 = 0
zmm2.o = zx.o(0)
var_158.d = rdi
var_158:4.d = rdi
int128_t* var_170 = &var_128
var_128 = zmm7
int64_t rax_23 = *(rax_22 + 0x37c)
int64_t rax_24 = var_158.q
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdi * rcx_19))
sub_1413993b0(arg2, zx.o(0), zmm2, r9_2, zmm3, zmm6_1.d, 0, 0, zmm0_1.d, zmm0_1.d, rax_24, rax_23, 
    var_170, var_168, var_160)
int64_t result = sub_1405d1550(&var_138)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
