// 函数: sub_141421bd0
// 地址: 0x141421bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t rax_2 = *arg4
void* var_280 = arg3
void* var_278 = arg2
int64_t* rax_3 = (*(rax_2 + 8))(arg4)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_1 = *rax_3
int64_t var_198 = rcx_1
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_a8 = zmm1
int64_t var_98
__builtin_memset(&var_98, 0, 0x1a)
int64_t var_190 = 0
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x500
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
int16_t var_80
var_80:1.b = *(rcx_1 + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
sub_1410e0180(arg1, &var_198)
int64_t rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rbx_2 + 0x16

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x18)
    rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rbx_2 + 0x16

wchar16 const* const rcx_5 = u"ODSCapture"
*(arg1 + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_5
    *(rbx_2 - u"ODSCapture" + rcx_5) = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_8[0x27]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_8[0x27]

*(arg1 + 0x30) = rax_5
void**** rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_6 = rcx_8
*(arg1 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_198, rbx_2)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_198)
int64_t var_88
*(arg1 + 0x178) = var_88:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int128_t var_240
__builtin_memset(&var_240, 0, 0x30)
int64_t var_1e4
__builtin_memset(&var_1e4, 0, 0x43)
int128_t var_1f8 = zx.o(0)
int16_t var_1a0 = 0
sub_140fdc870(arg1, &var_240)
int64_t var_210 = data_14395da00
int64_t var_208 = data_14395da18
int64_t var_200 = data_14395d9e8
int64_t* rax_12 = std::_Get_future_error_what((*U"1111")[sx.q(arg5)])
void* var_250
sub_1419a2ec0(rax_12, &var_250, &data_143f55f90, 0)
void* var_248
void* r15 = var_248
void* r13 = var_250
void* var_270 = r15
void* var_260
sub_1419a2ec0(rax_12, &var_260, &data_143eceb80, 0)
var_240.q = data_1439c9210
int64_t rax_14 = 0

if (r13 != 0)
    int64_t rdx_8 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_6 = *(r15 + 0x10)
    int64_t rax_15 = rbx_6[3]
    
    if (*(rax_15 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_8.d)
        rax_15 = rbx_6[3]
    
    rax_14 = *(rax_15 + (rdx_8 << 3))

void* rbx_7 = var_260
var_240:8.q = rax_14
int64_t rax_16 = 0

if (rbx_7 != 0)
    int64_t rdx_9 = sx.q(*(rbx_7 + 0x10c))
    void* var_258
    int64_t* r14_2 = *(var_258 + 0x10)
    int64_t rax_18 = r14_2[3]
    
    if (*(rax_18 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_9.d)
        rax_18 = r14_2[3]
    
    rax_16 = *(rax_18 + (rdx_9 << 3))
    r15 = var_270

int128_t var_220
var_220.q = rax_16
int32_t var_1e8 = 0
sub_1419870b0(arg1, &var_240, 2)
int64_t* rcx_20 = *(var_280 + 0x10)
int64_t* r14_4 = *(var_278 + 0x10)
void* rax_21 = (*(*rcx_20 + 0x20))(rcx_20)
var_278 = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1
    rbx_7 = var_260

void* rax_23 = (*(*r14_4 + 0x20))(r14_4)
var_280 = rax_23

if (rax_23 != 0)
    *(rax_23 + 8) += 1
    rbx_7 = var_260

sub_141429530(rbx_7, arg1, &var_280, &var_278)
int32_t var_288
void* r9_1 = (*(*arg4 + 0x18))(arg4, &var_288)
uint128_t zmm7 = zx.o(var_288)
void*** rcx_26 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t var_284
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(var_284))
void* rax_25 = &rcx_26[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_25 u> *(arg1 + 0x38))
    r9_1, zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_26 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_26[5]

*(arg1 + 0x30) = rax_25
void**** rax_26 = *(arg1 + 8)
uint128_t zmm1_1 = zx.o(0)
*(arg1 + 0x14) += 1
int512_t zmm2
zmm2.o = zx.o(0)
int32_t var_290 = 1
int32_t var_298 = 1
*rax_26 = rcx_26
*(arg1 + 8) = &rcx_26[1]
*(rcx_26 + 0x1c) = zmm7.d
rcx_26[4].d = zmm6.d
rcx_26[2] = 0
rcx_26[3].d = 0
*(rcx_26 + 0x24) = 0x3f800000
rcx_26[1] = 0
*rcx_26 = &data_142d54998
int64_t rax_28 = var_288.q
void** var_2a0 = &var_270
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(var_284))
var_270 = r13
void* var_268 = r15
int512_t zmm3
zmm3.o = zx.o(rax_28.d)
int32_t var_2b8 = zmm0.d
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
sub_1413993b0(arg1, zmm1_1, zmm2, r9_1, zmm3, zmm0.d, zmm1_1.d, zmm1_1.d, zmm3.d, var_2b8, rax_28, 
    rax_28, var_2a0, var_298, var_290)
sub_141096650(arg1)
int64_t var_90
int64_t result = sub_1405d1550(&var_90)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
