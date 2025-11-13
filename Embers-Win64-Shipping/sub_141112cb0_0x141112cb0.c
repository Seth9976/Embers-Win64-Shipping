// 函数: sub_141112cb0
// 地址: 0x141112cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* var_188
sub_1419a2ec0(*(arg3 + 0x5150), &var_188, &data_143ed5e80, 0)
void* r13 = var_188
void* var_1a0
sub_1419a2ec0(*(arg3 + 0x5150), &var_1a0, &data_143e5e460, 0)
void* r15 = var_1a0
void var_168
sub_141385550(&var_168, arg1, arg3)
int512_t zmm3
zmm3.o = 0x3f800000
int128_t var_178 = *(arg3 + 0x1598)
sub_1410b7780(&var_168, &var_178, zx.o(0), zmm3.o)
int64_t var_9c
__builtin_memset(&var_9c, 0, 0x43)
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x30)
int128_t var_b0 = zx.o(0)
int16_t var_58 = 0
sub_140fdc870(arg1, &var_f8)
int64_t var_c8 = data_14395da00
int64_t var_c0 = data_14395da18
int64_t var_b8 = data_1439b5f48
var_f8.q = data_1439c9210
int64_t rax_6 = 0
void* var_180

if (r13 != 0)
    int64_t rdx_5 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_1 = *(var_180 + 0x10)
    int64_t rax_7 = rbx_1[3]
    
    if (*(rax_7 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_5.d)
        rax_7 = rbx_1[3]
    
    rax_6 = *(rax_7 + (rdx_5 << 3))

var_f8:8.q = rax_6
int64_t rax_8 = 0

if (r15 != 0)
    int64_t rdx_6 = sx.q(*(r15 + 0x10c))
    void* var_198
    int64_t* rbx_2 = *(var_198 + 0x10)
    int64_t rax_10 = rbx_2[3]
    
    if (*(rax_10 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_6.d)
        rax_10 = rbx_2[3]
    
    rax_8 = *(rax_10 + (rdx_6 << 3))

int128_t var_d8
var_d8.q = rax_8
int32_t var_a0 = 0
sub_1419870b0(arg1, &var_f8, 2)
void*** rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_10[3]

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_10[3]

*(arg1 + 0x30) = rax_11
int64_t* rax_12 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_12 = rcx_10
*(arg1 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142f18bb8
rcx_10[2].d = 1
void* r9_1 = sub_141141530(r15, &var_168, arg3, arg4)
int32_t rcx_16 = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
int32_t r8_2 = *(arg3 + 0x1598)
uint128_t zmm0_1 = zx.o(*(arg3 + 0x159c))
int32_t rdx_10 = *(arg3 + 0x15a0) - r8_2
int32_t var_1b0 = 1
int32_t var_1b8 = 1
int64_t rax_15 = *(arg2 + 0x37c)
void* var_1a8
var_1a8:4.d = rcx_16
void** var_1c0 = &var_1a0
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rcx_16))
var_1a8.d = rdx_10
var_1a0 = r13
zmm3.o = zx.o(rdx_10)
int32_t var_1d8 = zmm4.d
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
void* var_198_1 = var_180
int512_t zmm2_1
zmm2_1.o = zx.o(r8_2)
int32_t var_1e0 = zmm3.d
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
int32_t var_1f0 = zmm2_1.d
zmm2_1.o = zx.o(0)
sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_1, zmm3, zmm4.d, var_1f0, _mm_cvtepi32_ps(zmm0_1).d, 
    var_1e0, var_1d8, var_1a8, rax_15, var_1c0, var_1b8, var_1b0)
int64_t result = sub_141386800(&var_168)
__security_check_cookie(rax_1 ^ &var_218)
return result
