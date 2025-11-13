// 函数: sub_1425fe310
// 地址: 0x1425fe310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int16_t* r12 = nullptr
int32_t var_120 = 0
int32_t var_138 = 0
int16_t* var_118
int32_t var_110

if (arg4 != 0 && sub_141e631e0(*(arg1 + 0x10)) != 0)
    int64_t* rcx_1 = *(arg1 + 0x10)
    int32_t var_e8
    __builtin_memset(&var_e8, 0, 0x18)
    int64_t var_cc
    __builtin_memset(&var_cc, 0, 0x1c)
    int32_t var_ac_1 = 0
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    zmm6_1, zmm7_1, zmm8_1 = sub_1425fed50(arg1, &var_e8, sub_141e5e020(rcx_1))
    int32_t rcx_3 = *(*(arg1 + 0x18) + 0xc)
    int64_t var_e4
    int64_t var_dc
    int32_t var_d4
    float zmm2_1[0x2]
    
    if (rcx_3 == 1)
        zmm2_1 = var_e8
        float var_170_1[0x2] = _mm_cvtps_pd(var_d4)
        float var_178_1[0x2] = _mm_cvtps_pd(var_dc:4.d)
        float zmm4_1[0x2] = _mm_cvtps_pd(var_dc.d)
        _mm_cvtps_pd(var_e4.d)
        zmm2_1 = _mm_cvtps_pd(zmm2_1)
        float var_180_1[0x2] = zmm4_1
        float var_188_1[0x2] = _mm_cvtps_pd(var_e4:4.d)
        sub_140a2e390(&var_118,  (FL: %.2f FR: %.2f FC: %.2f LF: %.2f, LS: %.2f, RS: %.2f)", zmm2_1)
        var_138 = var_110
        r12 = var_118
    else if (rcx_3 == 2)
        zmm2_1 = var_e8
        int128_t var_48_1 = zmm6_1
        int128_t var_58_1 = zmm7_1
        zmm7_1 = var_cc:4.d
        int128_t var_68_1 = zmm8_1
        int32_t var_b4
        float var_140_1[0x2] = _mm_cvtps_pd(var_b4)
        int64_t var_bc
        float var_148_1[0x2] = _mm_cvtps_pd(var_bc:4.d)
        float var_150_1[0x2] = _mm_cvtps_pd(var_bc.d)
        int64_t var_c4
        float var_158_1[0x2] = _mm_cvtps_pd(var_c4:4.d)
        _mm_cvtps_pd(var_e4.d)
        zmm2_1 = _mm_cvtps_pd(zmm2_1)
        int64_t var_160_1 = (_mm_cvtps_pd(var_c4.d.q)).q
        int64_t var_168_1 = (_mm_cvtps_pd(zmm7_1.q)).q
        int64_t var_170_2 = (_mm_cvtps_pd(var_d4.q)).q
        int64_t var_178_2 = (_mm_cvtps_pd(var_dc:4.d.q)).q
        int64_t var_180_2 = (_mm_cvtps_pd(var_dc.d.q)).q
        int64_t var_188_2 = (_mm_cvtps_pd(var_e4:4.d.q)).q
        sub_140a2e390(&var_118, 
             Left: (FL: %.2f FR: %.2f FC: %.2f LF: %.2f, LS: %.2f, RS: %.2f), Right: (FL: %.2f FR: %.2f "
        "FC: %.2f LF: %.2f, ", zmm2_1)
        var_138 = var_110
        r12 = var_118

void* rcx_6 = *(*(arg1 + 0x10) + 0xc0)
int64_t var_130
int64_t* rax_6
int32_t rbx

if (rcx_6 == 0)
    var_130 = 0
    int32_t var_128_1 = 0
    sub_1405947f0(&var_130, 5)
    int32_t rax_7 = var_128_1 + 5
    var_128_1 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_130)
    
    UnDecorator::getReferenceType(var_130, u"None", 0xa)
    rax_6 = &var_130
    rbx = 2
else
    rax_6 = sub_141dcb120(rcx_6, &var_118)
    rbx = 1

int16_t* r13 = *rax_6
*rax_6 = 0
int32_t rcx_10 = rax_6[1].d
rax_6[1] = 0

if ((rbx.b & 2) != 0)
    int64_t rcx_11 = var_130
    rbx &= 0xfffffffd
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if ((rbx.b & 1) != 0)
    int16_t* rcx_12 = var_118
    rbx &= 0xfffffffe
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

void* rax_9 = **(arg1 + 0x10)
int64_t var_100
int32_t rdi_1
int16_t* r14
int16_t* const r15

if (arg3 == 0)
    var_130 = *(rax_9 + 0x18)
    sub_140b63b70(&var_130, &var_118)
    r15 = &data_142d40450
    r14 = &data_142d40450
    rdi_1 = 8
    
    if (var_110 != 0)
        r14 = var_118
else
    int64_t* rax_10 = sub_140d21e10(rax_9, &var_100, 0)
    r15 = &data_142d40450
    
    if (rax_10[1].d == 0)
        r14 = &data_142d40450
        rdi_1 = 4
    else
        r14 = *rax_10
        rdi_1 = 4

int32_t rdi_2 = rdi_1 | rbx
int16_t* const rbx_1 = &data_142d40450

if (rcx_10 != 0)
    rbx_1 = r13

if (var_138 != 0)
    r15 = r12

int16_t* const var_180_3 = rbx_1
sub_141e5e020(*(arg1 + 0x10))
int16_t* const var_188_3 = r15
sub_140a2e390(arg2, u"Wave: %s, Volume: %6.2f%s, Owner: %s", r14)

if ((rdi_2.b & 8) != 0)
    int16_t* rcx_17 = var_118
    rdi_2 &= 0xfffffff7
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

if ((rdi_2.b & 4) != 0)
    int64_t rcx_18 = var_100
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

if (r13 != 0)
    sub_140a74f90(r13)

if (r12 != 0)
    sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg2
