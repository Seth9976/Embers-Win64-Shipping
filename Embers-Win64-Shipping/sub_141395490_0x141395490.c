// 函数: sub_141395490
// 地址: 0x141395490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
bool cond:0 = *(arg1 + 0x3dc) == 0
*(arg1 + 0x379) = 1
void* r14

if (cond:0)
    void* rax_2
    rax_2, arg5 = sub_14139da30(arg1, arg2, *(arg1 + 0x38c))
    r14 = rax_2
else
    r14 = arg1 + 0x1c0

void* rbx

if (1f f<= *(arg1 + 0x39c))
    rbx = *(arg1 + 0x40)
else
    void* rax_3
    rax_3, arg5 = sub_14139c770(arg1, arg2, *(arg1 + 0x38c))
    rbx = *rax_3

int128_t zmm1 = data_142d3f5a0
int64_t rcx_1 = *(*r14 + 8)
int64_t var_1d8 = rcx_1
int32_t var_100 = 0
int32_t var_fc
__builtin_memset(&var_fc, 0xff, 0x14)
int128_t var_e8 = zmm1
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x19)
int64_t var_1d0 = 0
int32_t var_1c8 = 0xffffffff
int16_t var_1c4 = 0x500
bool var_bf = *(rcx_1 + 0x38) u> 1
void var_1c0
memset(&var_1c0, 0, 0xa8)
char var_108 = 0x45
int64_t var_118 = *(rbx + 8)
char rax_6 = var_1c4:1.b

if (arg6 != 0)
    rax_6 = 9

int32_t var_104 = 0x21
var_1c4:1.b = rax_6
int64_t var_110 = 0
sub_1419ba670(*(arg1 + 0x3d0))
int64_t rax_7 = var_1d8
int64_t* r14_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_4 = &r14_3[1]

if (rcx_4 u> *(arg2 + 0x38))
    arg5 = sub_140b0e3d0(arg2 + 0x30, 0x10)
    r14_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &r14_3[1]

*(arg2 + 0x30) = rcx_4
*r14_3 = rax_7
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_8[5]

if (rax_8 u> *(arg2 + 0x38))
    arg5 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_8[5]

*(arg2 + 0x30) = rax_8
void**** rax_9 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_9 = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[3] = r14_3
*rcx_8 = &data_142d549c8
rcx_8[2].d = 1
rcx_8[4].d = 1
int64_t r14_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_11 = r14_8 + 0x56

if (rax_11 u> *(arg2 + 0x38))
    arg5 = sub_140b0e3d0(arg2 + 0x30, 0x58)
    r14_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_11 = r14_8 + 0x56

wchar16 const* const rcx_13 = u"BeginRenderingSeparateTranslucencyModulate"
*(arg2 + 0x30) = rax_11
wchar16 const i

do
    i = *rcx_13
    *(rcx_13 + r14_8 - u"BeginRenderingSeparateTranslucencyModulate") = i
    rcx_13 = &rcx_13[1]
while (i != 0)
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_16[0x27]

if (rax_12 u> *(arg2 + 0x38))
    arg5 = sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_16[0x27]

*(arg2 + 0x30) = rax_12
void**** rax_13 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_13 = rcx_16
*(arg2 + 8) = &rcx_16[1]
sub_1405d11b0(rcx_16, &var_1d8, r14_8)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1d8)
int64_t var_c8
*(arg2 + 0x178) = var_c8:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1

if (arg6 == 0)
    void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_23[3]
    
    if (rax_16 u> *(arg2 + 0x38))
        arg5 = sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_23[3]
    
    *(arg2 + 0x30) = rax_16
    int64_t* rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_23
    *(arg2 + 8) = &rcx_23[1]
    rcx_23[1] = 0
    *rcx_23 = &data_142f6bbc8
    rcx_23[2].w = 1
    *(rcx_23 + 0x12) = 1

uint128_t var_58 = arg5
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
void** const rax_24
int64_t* rcx_43
void* rax_28
uint128_t zmm0
uint128_t zmm7

if (sub_1422eb5d0(arg3) == 0)
    zmm0 = *(arg1 + 0x39c)
    zmm7 = zx.o(arg3[0x2b4].d)
    rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm8 = zx.o(*(arg3 + 0x159c))
    zmm9 = zx.o(arg3[0x2b3].d)
    void* rax_29 = &rcx_43[5]
    arg5.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4))).d f* zmm0.d
    zmm7.d = _mm_cvtepi32_ps(zmm7).d f* zmm0.d
    zmm8.d = _mm_cvtepi32_ps(zmm8).d f* zmm0.d
    zmm9.d = _mm_cvtepi32_ps(zmm9).d f* zmm0.d
    
    if (rax_29 u> *(arg2 + 0x38))
        arg5 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_29 = &rcx_43[5]
    
    *(arg2 + 0x30) = rax_29
    int64_t** rax_30 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_30 = rcx_43
    rax_28 = &rcx_43[1]
    *(arg2 + 8) = rax_28
    rcx_43[2].d = zmm9.d
    *(rcx_43 + 0x14) = zmm8.d
label_141395ac2:
    *rax_28 = 0
    rax_24 = &data_142d54998
    *(rcx_43 + 0x24) = 0x3f800000
    rcx_43[4].d = arg5.d
    *(rcx_43 + 0x1c) = zmm7.d
    rcx_43[3].d = 0
else
    if (*(arg3 + 0xd7b) == 0)
        zmm0 = *(arg1 + 0x39c)
        zmm7.d = float.s(zx.q(*(arg4 + 0x3b8)))
        rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_26 = &rcx_43[5]
        zmm7.d = zmm7.d f* zmm0.d
        arg5.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4))).d f* zmm0.d
        
        if (rax_26 u> *(arg2 + 0x38))
            arg5 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_26 = &rcx_43[5]
        
        *(arg2 + 0x30) = rax_26
        int64_t** rax_27 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_27 = rcx_43
        rax_28 = &rcx_43[1]
        *(arg2 + 8) = rax_28
        rcx_43[2] = 0
        goto label_141395ac2
    
    int32_t zmm1_1 = *(arg1 + 0x39c)
    int64_t* rcx_28 = **arg3
    void* rdx_6 = rcx_28[1]
    void* r8_3 = *rcx_28
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_6 + 0x15a4))).d f* zmm1_1
    arg5.d = float.s(zx.q((int.q(zmm0.d)).d))
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(r8_3 + 0x15a4))).d f* zmm1_1
    zmm7.d = float.s(zx.q((int.q(zmm0.d)).d))
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_6 + 0x15a0))).d f* zmm1_1
    zmm8.d = float.s(zx.q((int.q(zmm0.d)).d))
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(r8_3 + 0x15a0))).d f* zmm1_1
    zmm9.d = float.s(zx.q((int.q(zmm0.d)).d))
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_6 + 0x1598))).d f* zmm1_1
    int128_t zmm10
    zmm10.d = float.s(zx.q((int.q(zmm0.d)).d))
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(r8_3 + 0x1598))).d f* zmm1_1
    int128_t zmm11
    zmm11.d = float.s(zx.q((int.q(zmm0.d)).d))
    rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_21 = &rcx_43[7]
    
    if (rax_21 u> *(arg2 + 0x38))
        arg5 = sub_140b0e3d0(arg2 + 0x30, 0x40)
        rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_43[7]
    
    *(arg2 + 0x30) = rax_21
    int64_t** rax_22 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_22 = rcx_43
    *(arg2 + 8) = &rcx_43[1]
    rcx_43[2].d = zmm11.d
    *(rcx_43 + 0x14) = zmm10.d
    rcx_43[1] = 0
    rax_24 = &data_142f115a8
    *(rcx_43 + 0x24) = zmm9.d
    rcx_43[5].d = zmm8.d
    *(rcx_43 + 0x2c) = zmm7.d
    rcx_43[6].d = arg5.d
    rcx_43[3] = 0
    rcx_43[4].d = 0
    *(rcx_43 + 0x34) = 0x3f800000
*rcx_43 = rax_24
int64_t var_d0
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_d0)
zmm6.o = var_58
__security_check_cookie(rax_1 ^ &var_208)
return result
