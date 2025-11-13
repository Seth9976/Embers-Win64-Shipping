// 函数: sub_1410f5f00
// 地址: 0x1410f5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* rax_2 = sub_14139bef0(arg2)
void var_1a8
memset(&var_1a8, 0, 0x120)
char var_d8 = 0x55
int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t var_e8 = *arg3
int32_t var_d4 = 0x22
int64_t rax_3 = rbx_3 + 0x20

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x22)
    rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_3 = rbx_3 + 0x20

wchar16 const* const rcx_4 = u"DownsampleDepth"
*(arg2 + 0x30) = rax_3
wchar16 const i

do
    i = *rcx_4
    *(rbx_3 - u"DownsampleDepth" + rcx_4) = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_7[0x27]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_7[0x27]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_7
*(arg2 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_1a8, rbx_3)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1a8)
char var_91
*(arg2 + 0x178) = var_91
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
void* var_268
sub_1419a2ec0(*(arg4 + 0x5150), &var_268, &data_143f55f90, 0)
void* r13 = var_268
void* var_280
sub_1419a2ec0(*(arg4 + 0x5150), &var_280, &data_143e520f0, 0)
int64_t var_1fc
__builtin_memset(&var_1fc, 0, 0x43)
int128_t var_258
__builtin_memset(&var_258, 0, 0x30)
int128_t var_210 = zx.o(0)
int16_t var_1b8 = 0
sub_140fdc870(arg2, &var_258)
int64_t var_228 = data_1439b59c0
int64_t var_220 = data_14395da18
int64_t var_218 = data_1439b4ac0
var_258.q = data_1439c9210
int64_t rax_12 = 0
void* var_260

if (r13 != 0)
    int64_t rdx_7 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_6 = *(var_260 + 0x10)
    int64_t rax_13 = rbx_6[3]
    
    if (*(rax_13 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_7.d)
        rax_13 = rbx_6[3]
    
    rax_12 = *(rax_13 + (rdx_7 << 3))

void* r14_2 = var_280
var_258:8.q = rax_12
int64_t rax_14 = 0

if (r14_2 != 0)
    int64_t rdx_8 = sx.q(*(r14_2 + 0x10c))
    void* var_278
    int64_t* rbx_7 = *(var_278 + 0x10)
    int64_t rax_16 = rbx_7[3]
    
    if (*(rax_16 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_8.d)
        rax_16 = rbx_7[3]
    
    rax_14 = *(rax_16 + (rdx_8 << 3))

int128_t var_238
var_238.q = rax_14
int32_t var_200 = 0
sub_1419870b0(arg2, &var_258, 2)
sub_1411070a0(r14_2, arg2, arg4, arg6, (*(arg4 + 0x15a0)).d)
int32_t rcx_19 = *(arg4 + 0x1598)
int512_t zmm2
zmm2.o = arg5
int32_t rdx_11 = *(arg4 + 0x159c)
int32_t rax_19 = *(arg4 + 0x15a0) - rcx_19
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx_19))
int32_t rax_20 = *(arg4 + 0x15a4)
zmm1.d = zmm1.d f* zmm2.d
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_19)).d f* zmm2.d
void* r9_1 = zx.q(int.d(zmm1.d))
int32_t rbx_8 = int.d(zmm0.d)
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_20 - rdx_11)).d f* zmm2.d
zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_11)).d f* zmm2.d
int32_t r14_3 = int.d(zmm0.d)
int32_t r8_2 = int.d(zmm1.d)
int32_t zmm6 = float.s(zx.q(r14_3 + r8_2))
float zmm7 = float.s(zx.q(rbx_8 + r9_1.d))
void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int128_t zmm8
zmm8.d = float.s(zx.q(r8_2))
int128_t zmm9
zmm9.d = float.s(zx.q(r9_1.d))
void* rax_24 = &rcx_24[5]

if (rax_24 u> *(arg2 + 0x38))
    r9_1, zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_24[5]

*(arg2 + 0x30) = rax_24
*(arg2 + 0x14) += 1
int512_t zmm3
zmm3.o = zx.o(0)
int32_t var_290 = 1
int32_t var_298 = 1
void* var_288
var_288.d = rbx_8
**(arg2 + 8) = rcx_24
*(arg2 + 8) = &rcx_24[1]
rcx_24[2].d = zmm9.d
*(rcx_24 + 0x14) = zmm8.d
*(rcx_24 + 0x1c) = zmm7
rcx_24[4].d = zmm6
rcx_24[3].d = 0
*(rcx_24 + 0x24) = 0x3f800000
rcx_24[1] = 0
*rcx_24 = &data_142d54998
int32_t rdx_12 = *(arg4 + 0x159c)
int32_t r8_3 = *(arg4 + 0x1598)
var_288:4.d = r14_3
int64_t rax_28 = *(rax_2 + 0x37c)
int32_t rcx_31 = *(arg4 + 0x15a0) - r8_3
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x15a4) - rdx_12))
var_280 = r13
void* var_278_1 = var_260
zmm0.d = float.s(zx.q(r14_3))
zmm3.d = float.s(zx.q(rbx_8))
void** var_2a0 = &var_280
zmm2.o = zx.o(rdx_12)
int32_t var_2b8 = zmm5.d
int32_t var_2c0 = _mm_cvtepi32_ps(zx.o(rcx_31)).d
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
int32_t var_2c8 = zmm2.d
zmm2.o = zx.o(0)
sub_1413993b0(arg2, zx.o(0), zmm2, r9_1, zmm3, zmm0.d, _mm_cvtepi32_ps(zx.o(r8_3)).d, var_2c8, 
    var_2c0, var_2b8, var_288, rax_28, var_2a0, var_298, var_290)
sub_141096650(arg2)
void var_a0
int64_t result = sub_1405d1550(&var_a0)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
