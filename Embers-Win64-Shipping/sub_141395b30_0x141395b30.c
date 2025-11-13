// 函数: sub_141395b30
// 地址: 0x141395b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
sub_141391390(arg1, arg2)
int64_t* rax_2 = sub_14139d690(arg1)
int128_t zmm1 = data_142d3f5a0
void* rdx = *rax_2
void* var_1c8 = rdx
int32_t var_f0 = 0
int32_t var_ec
__builtin_memset(&var_ec, 0xff, 0x14)
int128_t var_d8 = zmm1
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x1a)
int64_t var_1c0 = 0
int32_t var_1b8 = 0xffffffff
int16_t var_1b4 = 0x500
int64_t var_108
__builtin_memset(&var_108, 0, 0x11)
int32_t var_f4 = 0
int16_t var_b0
var_b0:1.b = *(rdx + 0x38) u> 1
void var_1b0
memset(&var_1b0, 0, 0xa8)
char var_f8 = 0x45
int64_t var_108_1 = *(*(arg1 + 0x40) + 8)
int32_t var_f4_1 = 0x21
sub_1419ba670(*(arg1 + 0x3d0))
uint128_t zmm6 = sub_1410e0180(arg2, &var_1c8)
int64_t rsi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rsi_2 + 0x36

if (rax_4 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x38)
    rsi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rsi_2 + 0x36

wchar16 const* const rcx_6 = u"BeginRenderingTranslucency"
*(arg2 + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_6
    *(rsi_2 - u"BeginRenderingTranslucency" + rcx_6) = i
    rcx_6 = &rcx_6[1]
while (i != 0)
void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_9[0x27]

if (rax_5 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_9[0x27]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_9
*(arg2 + 8) = &rcx_9[1]
sub_1405d11b0(rcx_9, &var_1c8, rsi_2)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1c8)
int64_t var_b8
*(arg2 + 0x178) = var_b8:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
void var_1d8

if (arg5 != 0)
    zmm6 = sub_14199cb60(arg2, 0, 1, &var_1d8, 0, 0, 1, 0)
uint128_t var_48 = zmm6
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
void** const rax_20
int64_t* rcx_19
void* rax_24
uint128_t zmm7

if (sub_1422eb5d0(arg3) == 0)
    zmm7 = zx.o(arg3[0x2b4].d)
    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm8 = zx.o(*(arg3 + 0x159c))
    zmm9 = zx.o(arg3[0x2b3].d)
    zmm6 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4)))
    void* rax_25 = &rcx_19[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_25 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_19[5]
    
    *(arg2 + 0x30) = rax_25
    int64_t** rax_26 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_26 = rcx_19
    rax_24 = &rcx_19[1]
    *(arg2 + 8) = rax_24
    rcx_19[2].d = zmm9.d
    *(rcx_19 + 0x14) = zmm8.d
label_141395f8d:
    *rax_24 = 0
    rax_20 = &data_142d54998
    *(rcx_19 + 0x24) = 0x3f800000
    rcx_19[4].d = zmm6.d
    *(rcx_19 + 0x1c) = zmm7.d
    rcx_19[3].d = 0
else
    if (*(arg3 + 0xd7b) == 0)
        rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        zmm7.d = float.s(zx.q(*(arg4 + 0x3b8)))
        void* rax_22 = &rcx_19[5]
        zmm6 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4)))
        
        if (rax_22 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_22 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_22
        int64_t** rax_23 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_23 = rcx_19
        rax_24 = &rcx_19[1]
        *(arg2 + 8) = rax_24
        rcx_19[2] = 0
        goto label_141395f8d
    
    int64_t* rcx_16 = **arg3
    void* rdx_7 = rcx_16[1]
    void* r8_1 = *rcx_16
    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm6.d = float.s(zx.q(*(rdx_7 + 0x15a4)))
    zmm7.d = float.s(zx.q(*(r8_1 + 0x15a4)))
    zmm8.d = float.s(zx.q(*(rdx_7 + 0x15a0)))
    zmm9.d = float.s(zx.q(*(r8_1 + 0x15a0)))
    int128_t zmm10
    zmm10.d = float.s(zx.q(*(rdx_7 + 0x1598)))
    int128_t zmm11
    zmm11.d = float.s(zx.q(*(r8_1 + 0x1598)))
    void* rax_17 = &rcx_19[7]
    
    if (rax_17 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x40)
        rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_19[7]
    
    *(arg2 + 0x30) = rax_17
    int64_t** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_19
    *(arg2 + 8) = &rcx_19[1]
    rcx_19[2].d = zmm11.d
    *(rcx_19 + 0x14) = zmm10.d
    rcx_19[1] = 0
    rax_20 = &data_142f115a8
    *(rcx_19 + 0x24) = zmm9.d
    rcx_19[5].d = zmm8.d
    *(rcx_19 + 0x2c) = zmm7.d
    rcx_19[6].d = zmm6.d
    rcx_19[3] = 0
    rcx_19[4].d = 0
    *(rcx_19 + 0x34) = 0x3f800000
*rcx_19 = rax_20
int64_t var_c0
int64_t result
int512_t zmm6_1
result, zmm6_1 = sub_1405d1550(&var_c0)
zmm6_1.o = var_48
__security_check_cookie(rax_1 ^ &var_218)
return result
