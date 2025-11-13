// 函数: sub_1407b1400
// 地址: 0x1407b1400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
__builtin_memset(arg2, 0, 0x20)
arg2[4] = data_143dbb1f0.d
arg2[5] = data_143dbb1f0:4.d
arg2[6] = data_143dbb1f0.d
arg2[7] = data_143dbb1f0:4.d
int64_t rax_2 = *(arg3 + 0xe0)
int32_t* var_1f8 = arg2
int64_t var_1e8 = rax_2
sub_14077ae40(arg1 + 0xf0, &var_1e8, &var_1f8)
int32_t* r8_1 = var_1f8
*r8_1 = *(arg1 + 0xd0)
r8_1[1] = *(arg1 + 0xd4)
*(arg1 + 0xd0)
uint128_t zmm0_1 = _mm_cvtepi32_pd(zx.q(divs.dp.d(0:0x4000, *(arg1 + 0xd0))))
int64_t rcx_1 = int.q(zmm0_1.q)
uint128_t zmm1_1

if (rcx_1 != -0x8000000000000000)
    zmm1_1.q = float.d(rcx_1)
    
    if (not(zmm1_1.q f== zmm0_1.q))
        zmm0_1.q = float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))

int32_t rcx_3 = *(arg1 + 0xdc)
int32_t rdx_2 = rcx_3
int32_t rax_8 = int.d(zmm0_1.q)
zmm1_1 = _mm_cvtepi32_pd(zx.q(rcx_3))

if (rcx_3 s> rax_8)
    rdx_2 = rax_8

r8_1[2] = rdx_2
zmm1_1.q = zmm1_1.q f/ _mm_cvtepi32_pd(zx.q(rdx_2)).q
int64_t rcx_4 = int.q(zmm1_1.q)

if (rcx_4 != -0x8000000000000000)
    zmm0_1.q = float.d(rcx_4)
    
    if (not(zmm0_1.q f== zmm1_1.q))
        zmm1_1.q =
            float.d(rcx_4 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1) ^ 1))

r8_1[3] = int.d(zmm1_1.q)
*(r8_1 + 0x18) = *(arg1 + 0xe4)
float zmm2

if (*(arg1 + 0xe0) != 0)
    zmm2 = *(arg1 + 0xe4)
    float zmm3 =
        __maxss_xmmss_memss(zmm2, *(arg1 + 0xe8)) f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0xd8))).d
    zmm1_1.d = 1f / zmm3
    zmm0_1.d = zmm1_1.d f* zmm2
    *r8_1 = int.d(zmm0_1.d)
    zmm1_1.d = zmm1_1.d f* *(arg1 + 0xe8)
    int32_t rax_14 = int.d(zmm1_1.d)
    r8_1[1] = rax_14
    zmm2 = *(arg1 + 0xe4)
    zmm1_1 = *(arg1 + 0xe8)
    zmm2 f- zmm1_1.d
    bool cond:1_1 = zmm2 f>= zmm1_1.d
    
    if (zmm2 f<= zmm1_1.d)
        goto label_1407b1621
    
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_14)).d f* zmm3
    zmm0_1.d = zmm0_1.d f- zmm1_1.d
    
    if (_mm_and_ps(zmm0_1, 0x7fffffff).d f<= 9.99999994e-09f)
        cond:1_1 = zmm2 f>= zmm1_1.d
    label_1407b1621:
        
        if (not(cond:1_1))
            int32_t rcx_6 = *r8_1
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rcx_6)).d f* zmm3
            zmm0_1.d = zmm0_1.d f- zmm2
            
            if (not(_mm_and_ps(zmm0_1, 0x7fffffff).d f<= 9.99999994e-09f))
                *r8_1 = rcx_6 + 1
                rax_14 = r8_1[1]
    else
        rax_14 += 1
        r8_1[1] = rax_14
    
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(*r8_1)).d f* zmm3
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_14)).d f* zmm3
    r8_1[6] = zmm1_1.d
    r8_1[7] = zmm0_1.d
    *(arg1 + 0xd0) = *r8_1
    *(arg1 + 0xd4) = r8_1[1]

zmm1_1 = zx.o(r8_1[1])
zmm2 = r8_1[6]
zmm0_1 = _mm_cvtepi32_ps(zx.o(*r8_1))
zmm1_1 = _mm_cvtepi32_ps(zmm1_1)
zmm2 = zmm2 f/ zmm0_1.d
zmm0_1 = r8_1[7]
r8_1[4] = zmm2
zmm0_1.d = zmm0_1.d f/ zmm1_1.d
r8_1[5] = zmm0_1.d
int64_t var_1c8 = *(arg1 + 0x28)
int64_t rax_19 = *(arg3 + 0xe0)
zmm0_1 = *r8_1
zmm1_1 = *(r8_1 + 0x10)
int64_t var_198
__builtin_memset(&var_198, 0, 0x2c)
int32_t var_16c = 0x80
int32_t var_168 = 0xffffffff
int32_t var_164 = 0
int64_t var_158 = 0
int32_t var_150 = 0
sub_140780cc0(&var_198, arg1 + 0x30)
int64_t var_148
__builtin_memset(&var_148, 0, 0x2c)
int32_t var_11c = 0x80
int32_t var_118 = 0xffffffff
int32_t var_114 = 0
int64_t var_108 = 0
int32_t var_100 = 0
sub_140780cc0(&var_148, arg1 + 0x80)

if (sub_140a80f40() == 0)
    uint32_t rax_21
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_21.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_21.b == 0))
        void var_1e0
        void** rax_24 = sub_1407898d0(&var_1e0, nullptr, 0xff)
        void* rbx_1 = *rax_24
        *(rbx_1 + 0x10) = var_1c8
        *(rbx_1 + 0x18) = rax_19
        *(rbx_1 + 0x20) = zmm0_1
        *(rbx_1 + 0x30) = zmm1_1
        sub_14077e140(rbx_1 + 0x40, &var_198)
        sub_14077e140(rbx_1 + 0x90, &var_148)
        void* rcx_19 = *rax_24
        int32_t r8_2 = rax_24[2].d
        int64_t* rdx_11 = rax_24[1]
        int64_t* rbx_2 = *(rcx_19 + 0xe8)
        int64_t* var_1f0_1 = rbx_2
        int32_t* rdi_2 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_2 += 1
            rbx_2 = var_1f0_1
        
        sub_1407c9910(rcx_19, rdx_11, r8_2, 1)
        
        if (rbx_2 != 0)
            int32_t rsi_1 = *rdi_2
            *rdi_2 -= 1
            
            if (rsi_1 == 1)
                sub_140a2f6e0(var_1f0_1)
    else
        int64_t var_f8 = var_1c8
        int64_t var_f0_1 = rax_19
        uint128_t var_e8_1 = zmm0_1
        uint128_t var_d8_1 = zmm1_1
        void var_c8
        sub_14077e140(&var_c8, &var_198)
        void var_78
        sub_14077e140(&var_78, &var_148)
        sub_140781a10(&var_f8)
        sub_14077fae0(&var_f8)
else
    sub_140781a10(&var_1c8)

sub_14077fae0(&var_1c8)
void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_218)
return result
