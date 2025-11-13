// 函数: sub_14135f210
// 地址: 0x14135f210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void* rax_2 = sub_14139ce70(arg1)
int64_t* rax_3 = sub_1413a8300(&arg1[6], arg2)
void* rdi = *(*arg2 + 8)

if (rdi != 0)
    int64_t r8_1 = *arg1
    void* rax_5 = sub_14139d290((*(r8_1 + 0x10))(arg1, 0, r8_1))
    int64_t* rbx_1 = *(rdi + 0xbc0)
    int64_t* rcx_4 = *(rax_5 + 0x50)
    *(rdi + 0xbc0) = rcx_4
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x30))()
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1)

int64_t r12
r12.b = 5

if (sub_142391cc0(*arg2) == 0)
    if (sub_142391f10(*arg2) != 0 || *(**arg2 + 8) == 1)
        r12.b = 9
else if (*(**arg2 + 8) == 1)
    r12.b = 9

int64_t* rbx_2 = *(sub_14139d290((*(*arg1 + 0x10))(arg1, 1)) + 0x50)

if (rbx_2 != 0)
    (*(*rbx_2 + 0x30))(rbx_2)
    (*(*rbx_2 + 0x38))(rbx_2)

int64_t rax_16 = rbx_2[2]
void* r15 = arg2[8]
int64_t var_228 = rax_16
int64_t* rbx_5 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_13 = &rbx_5[1]

if (rcx_13 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x10)
    rax_16 = var_228
    rbx_5 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_13 = &rbx_5[1]

*(r15 + 0x30) = rcx_13
*rbx_5 = rax_16
void*** rcx_17 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_17[5]

if (rax_17 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x30)
    rcx_17 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_17[5]

*(r15 + 0x30) = rax_17
void**** rax_18 = *(r15 + 8)
*(r15 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_18 = rcx_17
*(r15 + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142d549c8
rcx_17[2].d = 1
rcx_17[3] = rbx_5
rcx_17[4].d = 0
int64_t rax_20 = *rax_3
int32_t var_f0 = 0
int32_t var_ec
__builtin_memset(&var_ec, 0xff, 0x14)
int128_t var_d8 = zmm1
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x19)
int64_t var_1c8 = rax_20
int64_t var_1c0 = 0
int32_t var_1b8 = 0xffffffff
char var_1b4 = 0
char var_1b3 = r12.b
int64_t var_108
__builtin_memset(&var_108, 0, 0x11)
int32_t var_f4 = 0
bool var_af = *(rax_20 + 0x38) u> 1
void var_1b0
memset(&var_1b0, 0, 0xa8)
void* r15_1 = arg2[8]
int64_t rbx_10 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_21 = rbx_10 + 0xc

if (rax_21 u> *(r15_1 + 0x38))
    sub_140b0e3d0(r15_1 + 0x30, 0xe)
    rbx_10 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_21 = rbx_10 + 0xc

wchar16 const* const rcx_23 = u"AaES2"
*(r15_1 + 0x30) = rax_21
wchar16 const i

do
    i = *rcx_23
    *(rbx_10 - u"AaES2" + rcx_23) = i
    rcx_23 = &rcx_23[1]
while (i != 0)
void*** rcx_26 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_26[0x27]

if (rax_22 u> *(r15_1 + 0x38))
    sub_140b0e3d0(r15_1 + 0x30, 0x140)
    rcx_26 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_26[0x27]

*(r15_1 + 0x30) = rax_22
void**** rax_23 = *(r15_1 + 8)
*(r15_1 + 0x14) += 1
*rax_23 = rcx_26
*(r15_1 + 8) = &rcx_26[1]
sub_1405d11b0(rcx_26, &var_1c8, rbx_10)
*(r15_1 + 0x1c4) = 1
sub_1405d19b0(r15_1, &var_1c8)
int64_t var_b8
*(r15_1 + 0x178) = var_b8:7.b
*(r15_1 + 0x179) = 0
var_228 = 0
*(r15_1 + 0x1c4) = 1
int32_t var_220 = *(arg1 + 0x44)
int32_t var_21c = arg1[9].d
var_228.o = var_228.o
sub_1410b7780(arg2, &var_228, zx.o(0), 0x3f800000)
int512_t zmm2_1
int512_t zmm3_1
int32_t zmm10_1
int32_t zmm11
zmm2_1, zmm3_1, zmm10_1, zmm11 = sub_141348ab0(arg2)
char rax_28 = sub_14139fc90(arg2, rax_3)
int32_t* r9 = *arg2
int64_t r8_3 = 0x1598

if (rax_28 != 0)
    r8_3 = 0x258

int32_t rcx_34 = *(r9 + r8_3)
int32_t rdx_8 = *(r9 + r8_3 + 4)
int64_t* rcx_35 = arg2[0xc]
uint128_t zmm7 = zx.o(*(r9 + r8_3 + 8) - rcx_34)
int32_t rax_32 = *(r9 + r8_3 + 0xc) - rdx_8
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rcx_34))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax_32))
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rdx_8))
zmm7 = _mm_cvtepi32_ps(zmm7)
void* r9_1 = sub_1419a2ec0(rcx_35, &var_228, &data_143ebc0f0, 0)
zmm3_1.o = zmm7
zmm2_1.o = zmm8
var_228.o = var_228.o
sub_1413993b0(arg2[8], zmm9, zmm2_1, r9_1, zmm3_1, zmm6.d, zmm9.d, zmm8.d, zmm7.d, zmm6.d, 
    *(arg1 + 0x44), *(rax_2 + 0x14), &var_228, 1, 1)
sub_141096650(arg2[8])
void* r14_1 = arg2[8]
double zmm1_2[0x2] = data_142d3f800
int64_t r12_1 = rax_3[1]
int64_t* r15_2 = *rax_3
uint32_t var_218[0x4] = data_142d57d10
uint32_t zmm0_2[0x4] = data_142d57920
double var_208[0x2] = zmm1_2
void*** rbx_15 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_36 = &rbx_15[0xa]

if (rax_36 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x58)
    rbx_15 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_36 = &rbx_15[0xa]

*(r14_1 + 0x30) = rax_36
*(r14_1 + 0x14) += 1
**(r14_1 + 8) = rbx_15
*(r14_1 + 8) = &rbx_15[1]
rbx_15[1] = 0
*rbx_15 = &data_142d56628
rbx_15[2].d = var_218[0]
*(rbx_15 + 0x14) = var_218[1]
rbx_15[3].d = var_218[2]
*(rbx_15 + 0x1c) = var_218[3]
__builtin_memset(&rbx_15[4], 0xff, 0x14)
*(rbx_15 + 0x34) = zmm0_2[1]
rbx_15[7].d = zmm0_2[2]
*(rbx_15 + 0x3c) = zmm0_2[3]
rbx_15[8] = r15_2
rbx_15[9] = r12_1

if ((*(*r15_2 + 8))(r15_2) == 0)
    int64_t* rcx_40 = rbx_15[8]
    
    if ((*(*rcx_40 + 0x18))(rcx_40) == 0)
        int64_t* rcx_41 = rbx_15[8]
        
        if ((*(*rcx_41 + 0x20))(rcx_41) == 0)
            int64_t* rcx_42 = rbx_15[8]
            (*(*rcx_42 + 0x10))(rcx_42)

int64_t* rcx_43 = rbx_15[9]

if ((*(*rcx_43 + 8))(rcx_43) == 0)
    int64_t* rcx_44 = rbx_15[9]
    
    if ((*(*rcx_44 + 0x18))(rcx_44) == 0)
        int64_t* rcx_45 = rbx_15[9]
        
        if ((*(*rcx_45 + 0x20))(rcx_45) == 0)
            int64_t* rcx_46 = rbx_15[9]
            (*(*rcx_46 + 0x10))(rcx_46)

*arg2

if (sub_1405949a0() != 0)
    sub_14198b7d0()
    int64_t* rdi_1 = *arg2
    double zmm1_3[0x2] = rdi_1[0x54].d
    float zmm4_1[0x2] = *(rdi_1 + 0x2a4)
    zmm1_3[0].d = zmm1_3[0].d f- rdi_1[0xc4].d
    zmm4_1[0] = zmm4_1[0] - *(rdi_1 + 0x624)
    rdi_1[0x54].d = zmm1_3[0].d
    *(rdi_1 + 0x2a4) = zmm4_1[0]
    double var_1e8[0x2]
    
    if (zmm10_1 f!= rdi_1[0x52].d || zmm10_1 f!= rdi_1[0x56].d || zmm10_1 f!= *(rdi_1 + 0x284)
            || zmm10_1 f!= *(rdi_1 + 0x2b4) || zmm10_1 f!= rdi_1[0x51].d
            || zmm10_1 f!= rdi_1[0x53].d || zmm10_1 f!= *(rdi_1 + 0x28c)
            || zmm10_1 f!= *(rdi_1 + 0x29c) || zmm11 f!= *(rdi_1 + 0x2ac)
            || zmm10_1 f!= *(rdi_1 + 0x2bc))
        sub_140631b10(&rdi_1[0x50], &var_218)
    else
        uint128_t zmm6_1 = 0x3ff0000000000000
        float zmm3_2[0x4] = -0x8000000000000000
        float zmm0_3[0x4] = rdi_1[0x50].d
        double temp0_4[0x2] = _mm_cvtps_pd(zmm1_3[0])
        __builtin_memset(&var_218[1], 0, 0x10)
        __builtin_memset(&var_208[1], 0, 0x14)
        zmm0_3 = _mm_cvtps_pd(zmm0_3[0].q)
        var_1e8[1].d = 0x3f800000
        zmm7.q = zmm6_1.q f/ zmm0_3[0].q
        zmm0_3 = *(rdi_1 + 0x294)
        temp0_4[0] = temp0_4[0] f* zmm7.q
        zmm0_3 = _mm_cvtps_pd(zmm0_3[0].q)
        zmm8.d = fconvert.s((temp0_4 ^ zmm3_2)[0])
        uint128_t zmm2_2
        zmm2_2.q = zmm6_1.q f/ zmm0_3[0].q
        zmm0_3 = rdi_1[0x57].d
        double temp0_7[0x2] = _mm_cvtps_pd(zmm4_1)
        zmm0_3 = _mm_cvtps_pd(zmm0_3[0].q)
        temp0_7[0] = temp0_7[0] f* zmm2_2.q
        zmm4_1 = (zx.o(0)).q
        zmm6_1.q = zmm6_1.q f/ zmm0_3[0].q
        var_1e8[0].d = zmm8.d
        float zmm5_1 = fconvert.s((temp0_7 ^ zmm3_2)[0])
        double temp0_9[0x2] = _mm_cvtps_pd(rdi_1[0x55].d[0])
        zmm2_2 = _mm_cvtpd_ps(zmm2_2)
        temp0_9[0] = temp0_9[0] f* zmm6_1.q
        float temp0_11[0x4] = _mm_cvtpd_ps(zmm7)
        var_208[0]:4.d = zmm2_2.d
        float temp0_12[0x4] = _mm_cvtpd_ps(zmm6_1)
        zmm4_1[0] = fconvert.s((temp0_9 ^ zmm3_2)[0])
        zmm0_2[3] = temp0_12[0]
        var_1e8[1]:4.d = zmm4_1[0]
        var_218[0] = temp0_11[0]
        var_1e8[0]:4.d = zmm5_1
    
    zmm1_3 = var_208
    *(rdi_1 + 0x300) = var_218
    *(rdi_1 + 0x310) = zmm1_3
    *(rdi_1 + 0x320) = zmm0_2
    *(rdi_1 + 0x330) = var_1e8
    rdi_1[0xc4].d = data_143dbb1f0.d[0]
    *(rdi_1 + 0x624) = data_143dbb1f0:4.d[0].d
    sub_141366e50(&rdi_1[0x50])
    sub_141420f20(rdi_1)

int64_t var_c0
int64_t result = sub_1405d1550(&var_c0)
__security_check_cookie(rax_1 ^ &var_298)
return result
