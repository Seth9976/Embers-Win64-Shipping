// 函数: sub_1413c69b0
// 地址: 0x1413c69b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* rcx = *(arg1 + 0x10)
int32_t rax_3 = (*(*rcx + 0x48))(rcx)
int64_t* rcx_1 = *(arg1 + 0x10)
int32_t rax_5 = (*(*rcx_1 + 0x40))(rcx_1)
int32_t r15 = rax_5
int32_t r12 = *arg1
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t var_134 = rax_3
void* rax_6 = &rcx_4[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r12))

if (rax_6 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_4[5]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d54998
*(rcx_4 + 0x1c) = zmm6.d
rcx_4[4].d = zmm6.d
rcx_4[2] = 0
rcx_4[3].d = 0
*(rcx_4 + 0x24) = 0x3f800000
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x30)
int64_t var_9c
__builtin_memset(&var_9c, 0, 0x43)
int128_t var_b0 = zx.o(0)
int16_t var_58 = 0
sub_140fdc870(arg2, &var_f8)
int64_t var_c0 = data_14395da18
int64_t var_b8 = data_14395d9e8
int64_t var_c8 = data_14395da00
void* var_118
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[sx.q(arg1[8])]), &var_118, &data_143f55f90, 0)
uint128_t var_128
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[sx.q(arg1[8])]), &var_128, &data_143ec9c40, 0)
void* rcx_13 = var_118
var_f8.q = data_1439c9210
int64_t rax_17 = 0
uint128_t var_108 = var_128

if (rcx_13 != 0)
    int64_t rdx_3 = sx.q(*(rcx_13 + 0x10c))
    void* var_110
    int64_t* rbx_1 = *(var_110 + 0x10)
    int64_t rax_19 = rbx_1[3]
    
    if (*(rax_19 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_19 = rbx_1[3]
    
    rax_17 = *(rax_19 + (rdx_3 << 3))

void* rbx_2 = var_128.q
void* r13 = var_128:8.q
var_f8:8.q = rax_17
int64_t rax_20 = 0

if (rbx_2 != 0)
    int64_t rdx_4 = sx.q(*(rbx_2 + 0x10c))
    int64_t* rsi_2 = *(r13 + 0x10)
    int64_t rax_21 = rsi_2[3]
    
    if (*(rax_21 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_4.d)
        rax_21 = rsi_2[3]
    
    rax_20 = *(rax_21 + (rdx_4 << 3))
    r15 = rax_5

int128_t var_d8
var_d8.q = rax_20
int32_t var_a0 = 0
sub_1419870b0(arg2, &var_f8, 2)
int64_t r8 = 0

if (rbx_2 != 0)
    int64_t rdx_6 = sx.q(*(rbx_2 + 0x10c))
    int64_t* rbx_3 = *(r13 + 0x10)
    int64_t rax_22 = rbx_3[3]
    
    if (*(rax_22 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_6.d)
        rax_22 = rbx_3[3]
    
    r8 = *(rax_22 + (rdx_6 << 3))

void* r9_1
int512_t zmm2
int512_t zmm3
int128_t zmm6_1
r9_1, zmm2, zmm3, zmm6_1 = sub_1413baf80(arg2, &var_108, r8, *(arg1 + 0x18))
int32_t var_150 = 1
zmm3.o = zmm6_1
int32_t var_158 = 0
zmm2.o = zx.o(0)
int128_t* var_160 = &var_108
var_108 = var_118.o
int32_t var_144 = r12
int64_t result = sub_1413993b0(arg2, zx.o(0), zmm2, r9_1, zmm3, zmm6_1.d, 0, 0, 
    _mm_cvtepi32_ps(zx.o(r15)).d, _mm_cvtepi32_ps(zx.o(rax_3)).d, r12.q, rax_5.q, var_160, var_158, 
    var_150)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
