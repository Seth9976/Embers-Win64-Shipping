// 函数: sub_1421d1a60
// 地址: 0x1421d1a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t rax_2 = *arg4
int64_t r14 = sx.q(arg2)
int64_t var_1ec
__builtin_memset(&var_1ec, 0, 0x43)
int128_t var_248
__builtin_memset(&var_248, 0, 0x30)
int128_t var_200 = zx.o(0)
int16_t var_1a8 = 0
int32_t var_298
(*(rax_2 + 0x18))(arg4, &var_298)
int64_t* rax_4 = (*(*arg4 + 8))(arg4)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_2 = *rax_4
int64_t var_198 = rcx_2
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_a8 = zmm1
int64_t var_98
__builtin_memset(&var_98, 0, 0x19)
int64_t var_190 = 0
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x500
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
bool var_7f = *(rcx_2 + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
int64_t rbx_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_5 = rbx_3 + 0x2e

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rbx_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_5 = rbx_3 + 0x2e

wchar16 const* const rcx_5 = u"VisualizeGPUSimulation"
*(arg1 + 0x30) = rax_5
wchar16 const i

do
    i = *rcx_5
    *(rcx_5 + rbx_3 - u"VisualizeGPUSimulation") = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_8[0x27]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_8[0x27]

*(arg1 + 0x30) = rax_6
void**** rax_7 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_7 = rcx_8
*(arg1 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_198, rbx_3)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_198)
int64_t var_88
*(arg1 + 0x178) = var_88:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
sub_140fdc870(arg1, &var_248)
uint128_t zmm7 = zx.o(var_298)
void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t var_294
arg5 = _mm_cvtepi32_ps(zx.o(var_294))
void* rax_10 = &rcx_16[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_10 u> *(arg1 + 0x38))
    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_16[5]

*(arg1 + 0x30) = rax_10
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_16
*(arg1 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142d54998
*(rcx_16 + 0x1c) = zmm7.d
rcx_16[4].d = arg5.d
rcx_16[2] = 0
rcx_16[3].d = 0
*(rcx_16 + 0x24) = 0x3f800000
int64_t var_208 = data_14395d9e8
int64_t var_210 = data_14395da18
int64_t var_218 = data_14395da00
void* var_268
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r14]), &var_268, &data_143f4e770, 0)
void* var_258
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r14]), &var_258, &data_143f4e870, 0)
void* r13 = var_268
var_248.q = data_143a2ef80
int64_t rax_19 = 0

if (r13 != 0)
    int64_t rdx_8 = sx.q(*(r13 + 0x10c))
    void* var_260
    int64_t* rbx_7 = *(var_260 + 0x10)
    int64_t rax_21 = rbx_7[3]
    
    if (*(rax_21 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_8.d)
        rax_21 = rbx_7[3]
    
    rax_19 = *(rax_21 + (rdx_8 << 3))

void* rbx_8 = var_258
var_248:8.q = rax_19
int64_t rax_22 = 0

if (rbx_8 != 0)
    int64_t rdx_9 = sx.q(*(rbx_8 + 0x10c))
    void* var_250
    int64_t* r14_2 = *(var_250 + 0x10)
    int64_t rax_24 = r14_2[3]
    
    if (*(rax_24 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_9.d)
        rax_24 = r14_2[3]
    
    rax_22 = *(rax_24 + (rdx_9 << 3))

int128_t var_228
var_228.q = rax_22
int32_t var_1f0 = 0
sub_1419870b0(arg1, &var_248, 2)
int64_t* rcx_27 = data_143f0f180
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(var_298))
int32_t var_2a0 = 1
int32_t var_2a8 = 0
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(var_294))
float var_278 = 512f f/ zmm2.d
float var_274 = 512f f/ zmm4.d
float var_270 = 120f f/ zmm2.d - 1f
float var_26c = 120f f/ zmm4.d - 1f
void* var_290
(*(*rcx_27 + 0xf8))(rcx_27, &var_290, &var_278, &data_143f4e700, var_2a8, var_2a0)
void* rax_26 = var_290
void* var_288 = rax_26

if (rax_26 != 0)
    *(rax_26 + 8) += 1
    r13 = var_268
    rbx_8 = var_258

sub_1405d1550(&var_290)
sub_1421c2730(r13, arg1, &var_288)
var_2a8.q = arg7
int64_t r9_2 = sub_1421c24e0(rbx_8, arg1, arg3, *(arg6 + 0x18), var_2a8)
int64_t rbx_9 = data_143a2efc0
void*** rcx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_28 = &rcx_33[5]

if (rax_28 u> *(arg1 + 0x38))
    r9_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_28 = &rcx_33[5]

*(arg1 + 0x30) = rax_28
int64_t* rax_29 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_29 = rcx_33
*(arg1 + 8) = &rcx_33[1]
rcx_33[1] = 0
*rcx_33 = &data_142d56618
rcx_33[2].d = 0
rcx_33[3] = rbx_9
rcx_33[4].d = 0
int64_t rbx_10 = data_143a2eff0

if (rbx_10 == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        r9_2)
    sub_140afbb40()

void*** rcx_39 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_31 = &rcx_39[6]

if (rax_31 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_39 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_31 = &rcx_39[6]

*(arg1 + 0x30) = rax_31
int64_t* rax_32 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_32 = rcx_39
*(arg1 + 8) = &rcx_39[1]
rcx_39[1] = 0
*rcx_39 = &data_142f11598
rcx_39[2] = rbx_10
rcx_39[3] = 0
rcx_39[4] = 4
rcx_39[5].d = 2
*(rcx_39 + 0x2c) = 1
sub_1405d1550(&var_288)
sub_141096650(arg1)
int64_t var_90
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_90)
__security_check_cookie(rax_1 ^ &var_2c8)
zmm6.o = var_58
return result
