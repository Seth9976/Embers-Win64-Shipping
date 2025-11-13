// 函数: sub_141493bd0
// 地址: 0x141493bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg3 + 0x1598)
arg3[0x2b3] = 0
arg3[0x2b4].d = *(arg1 + 0x548)
*(arg3 + 0x15a4) = *(arg1 + 0x54c)
uint128_t zmm2
zmm2.d = arg3[0x54].d.d f- arg3[0xc4].d
int128_t zmm6
zmm6.d = (*(arg3 + 0x2a4)).d f- *(arg3 + 0x624)
arg3[0x54].d = zmm2.d
uint128_t var_c8 = zmm0
*(arg3 + 0x2a4) = zmm6.d
uint32_t var_108[0x4]
uint128_t var_f8
uint128_t var_e8
uint128_t var_d8
uint128_t zmm1

if (0f f!= arg3[0x52].d || 0f f!= arg3[0x56].d || 0f f!= *(arg3 + 0x284) || 0f f!= *(arg3 + 0x2b4)
        || 0f f!= arg3[0x51].d || 0f f!= arg3[0x53].d || 0f f!= *(arg3 + 0x28c)
        || 0f f!= *(arg3 + 0x29c) || 1f f!= *(arg3 + 0x2ac) || 0f f!= *(arg3 + 0x2bc))
    sub_140631b10(&arg3[0x50], &var_108)
else
    uint128_t zmm3 = -0x4010000000000000
    float zmm5[0x2] = *(arg3 + 0x294)
    float zmm4[0x2] = arg3[0x57].d
    int128_t zmm7 = arg3[0x50].d
    zmm0 = _mm_cvtps_pd(zmm2.q)
    __builtin_memset(&var_108[1], 0, 0x10)
    __builtin_memset(&var_f8:8, 0, 0x14)
    zmm2 = zmm3
    zmm7 = _mm_cvtps_pd(zmm7.q)
    var_d8:8.d = 0x3f800000
    zmm4 = _mm_cvtps_pd(zmm4)
    zmm1.q = zmm3.q f/ zmm7.q
    zmm3.q = zmm3.q f/ zmm4
    zmm1.q = zmm1.q f* zmm0.q
    zmm5 = _mm_cvtps_pd(zmm5)
    int128_t zmm9 = _mm_cvtpd_ps(zmm1)
    zmm2.q = zmm2.q f/ zmm5
    zmm1.q = _mm_cvtps_pd(arg3[0x55].d.q).q f* zmm3.q
    zmm2.q = zmm2.q f* _mm_cvtps_pd(zmm6.q).q
    var_d8.d = zmm9.d
    zmm6 = _mm_cvtpd_ps(zmm1)
    int128_t zmm8 = _mm_cvtpd_ps(zmm2)
    zmm2 = 0x3ff0000000000000
    var_d8:4.d = zmm8.d
    zmm1 = zmm2
    zmm0.q = zmm2.q f/ zmm4
    zmm2.q = zmm2.q f/ zmm7.q
    zmm1.q = zmm1.q f/ zmm5
    zmm4 = _mm_cvtpd_ps(zmm0)
    zmm3 = _mm_cvtpd_ps(zmm1)
    zmm0 = _mm_cvtpd_ps(zmm2)
    var_f8:4.d = zmm3.d
    var_108[0] = zmm0.d
    var_e8:0xc.d = zmm4[0]
    var_d8:0xc.d = zmm6.d

zmm1 = var_f8
*(arg3 + 0x300) = var_108
*(arg3 + 0x310) = zmm1
*(arg3 + 0x320) = var_e8
*(arg3 + 0x330) = var_d8
arg3[0xc4].d = data_143dbb1f0.d.d
*(arg3 + 0x624) = data_143dbb1f0:4.d.d
sub_141366e50(&arg3[0x50])

if (*(arg1 + 0x530) != 0)
    arg3[0x15d].d |= 2

arg3[0x167].d = 0
int64_t* rax_2 = sub_14139bef0(arg2)
void* rax_3 = j_sub_140a82f30(0xfc0)
void* const rbx_1

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_1422db070(rax_3)

void* const arg_8 = rbx_1

if (&arg3[0x2b6] != &arg_8)
    void* rcx_4 = arg3[0x2b6]
    arg3[0x2b6] = rbx_1
    rbx_1 = nullptr
    arg_8 = nullptr
    j_sub_140a74f90(rcx_4)

j_sub_140a74f90(rbx_1)
sub_14148d860(&arg3[0x50], arg1 + 0x60)
void var_b8
sub_14142a220(arg3, rax_2, &arg3[0x50], &arg3[0x932], &var_b8, 2, arg3[0x2b6])
char rax_6 = (*(arg1 + 0x570)).b

if ((rax_6 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax_6 & 0x10) == 0)
    int64_t* rcx_9 = data_143f0f180
    void* var_128
    var_128.d = 1
    void* arg_18
    (*(*rcx_9 + 0xf8))(rcx_9, &arg_18, arg3[0x2b6], &data_143f55750, var_128, 1)
    void* rax_9 = arg_18
    void* arg_20 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    sub_1405d1550(&arg_18)
    sub_1405d1600(&arg3[2], &arg_20)
    sub_1405d1550(&arg_20)
else
    sub_1405d16e0(&arg3[2], *(*(*arg3 + 0x20) + 0x50))

arg3[0x2b3].d = var_c8.d
*(arg3 + 0x159c) = var_c8:4.d
arg3[0x2b4].d = var_c8:8.d
int32_t result = var_c8:0xc.d
*(arg3 + 0x15a4) = result

if ((*(arg1 + 0x570) & 0x800) != 0 && data_143ed8ff4 != 0)
    arg3[0x15d].d |= 1

return result
