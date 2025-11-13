// 函数: sub_1403ea5d0
// 地址: 0x1403ea5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
uint128_t zmm14 = 0xbe800000
void* rdi = arg3
int64_t r9 = arg4 - (sx.q(*(arg1 + 0x1210)) << 2)
int32_t rax_5 = *(arg1 + 0x128c) + *(arg1 + 0x1288)
uint128_t zmm9
zmm9.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x129c))).d f* 0.0078125f
uint128_t zmm15 = 0x3f000000
float zmm0[0x2] = zmm9.q
zmm0[0] = zmm0[0] - 20f
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax_5))
zmm0[0] = zmm0[0] * -0.25f
float _X[0x2] = _mm_cvtps_pd(zmm0)
zmm6.d = zmm6.d f* 0.5f
zmm6.d = zmm6.d f* 3.05175781e-05f
arg2[0xd6] = zmm6.d
uint128_t zmm11 = 0x3ff0000000000000
uint128_t zmm7 = 0x3f800000
uint128_t zmm0_1
zmm0_1.q = exp(_X).q f+ zmm11.q
uint128_t zmm1
zmm1.q = zmm11.q f/ zmm0_1.q
uint128_t zmm2
zmm2.d = fconvert.s(zmm1.q)
arg2[0xd7] = zmm2.d

if (*(arg1 + 0x1264) == 0)
    zmm6.d = zmm6.d f* 0.5f
    zmm2.d = zmm2.d f* 2f
    zmm6.d = zmm6.d f+ 0.5f
    zmm6.d = zmm6.d f* zmm2.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x11cc))).d f* 0.00390625f
    zmm1.d = 1f f- zmm0_1.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm6.d

char rax_6 = *(arg1 + 0x12cd)
int128_t zmm10 = 0x3ecccccd

if (rax_6 != 2)
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x129c))).d f* 0.400000006f
    zmm0_1.d = zmm0_1.d f* 0.0078125f
    zmm1.d = 6f f- zmm0_1.d
    zmm0_1.d = 1f f- arg2[0xd6]
    zmm1.d = zmm1.d f* zmm0_1.d
    zmm9.d = zmm9.d f+ zmm1.d
else
    zmm0_1.d = (*(arg1 + 0x2fe4)).d f* 2f
    zmm9.d = zmm9.d f+ zmm0_1.d

uint128_t zmm13 = 0x3f400000
int32_t i_6 = 0
uint128_t zmm12 = zx.o(0)
uint128_t zmm8

if (rax_6 != 2)
    zmm6 = zx.o(0)
    int32_t r15_2 = *(arg1 + 0x11f8) * 2
    zmm8 = zx.o(0)
    int32_t temp0_4
    int32_t temp1_1
    temp0_4:temp1_1 = sx.q(sx.d(*(arg1 + 0x11fc)) * 5)
    int32_t i = 0
    
    if ((temp1_1 - temp0_4) s>> 1 s> 0)
        zmm14 = _mm_cvtepi32_ps(zx.o(r15_2))
        int32_t temp2_1
        int32_t temp3_1
        
        do
            zmm1.d = fconvert.s(sub_1403ed620(rdi, r15_2))
            zmm1.d = zmm1.d f+ zmm14.d
            zmm0_1.q = log10(_mm_cvtps_pd(zmm1.q)).q f* 0x400a934f0979a36c
            zmm2.d = fconvert.s(zmm0_1.q)
            
            if (i s> 0)
                zmm0_1.d = zmm2.d f- zmm8.d
                zmm6.d =
                    zmm6.d f+ _mm_cvtpd_ps(_mm_and_pd(_mm_cvtps_pd(zmm0_1.q), 0x7fffffffffffffff)).d
            
            i += 1
            rdi += sx.q(r15_2) << 2
            zmm8 = zmm2
            temp2_1:temp3_1 = sx.q(sx.d(*(arg1 + 0x11fc)) * 5)
        while (i s< (temp3_1 - temp2_1) s>> 1)
        zmm14 = 0xbe800000
        zmm13 = 0x3f400000
        zmm15 = 0x3f000000
    
    zmm6.d = zmm6.d f- 5f
    zmm6.d = zmm6.d f* -0.400000006f
    zmm0_1.q = fconvert.d(zmm6.d)
    zmm0_1.q = exp(zmm0_1.q).q f+ zmm11.q
    zmm11.q = zmm11.q f/ zmm0_1.q
    zmm1.d = fconvert.s(zmm11.q)
    arg2[0xd8] = zmm1.d
    *(arg1 + 0x12ce) = zmm1.d f<= zmm13.d
    zmm0_1.d = arg2[0xd8].d f- zmm15.d
    zmm0_1.d = zmm0_1.d f* 2f
    zmm9.d = zmm9.d f+ zmm0_1.d
else
    *(arg1 + 0x12ce) = 0
    arg2[0xd8] = 0

zmm2 = arg2[0xd7]
int32_t rax_18 = *(arg1 + 0x1260)
zmm0_1.d = arg2[0xd9].d f* 0.00100000005f
zmm0_1.d = zmm0_1.d f* zmm0_1.d
zmm0_1.d = zmm0_1.d f+ 1f
zmm11.d = 0.949999988f f/ zmm0_1.d
zmm0_1.d = zmm2.d f* zmm13.d
zmm1.d = 1f f- zmm0_1.d
zmm1.d = zmm1.d f* 0.00999999978f
zmm13.d = zmm11.d f- zmm1.d
zmm11.d = zmm11.d f+ zmm1.d
zmm13.d = zmm13.d f/ zmm11.d

if (rax_18 s<= 0)
    zmm8 = zx.o(0)
else
    zmm2.d = zmm2.d f* 0.00999999978f
    zmm8.d = _mm_cvtepi32_ps(zx.o(rax_18)).d f* 1.52587891e-05f
    zmm8.d = zmm8.d f+ zmm2.d

int32_t i_7 = 0
int32_t i_4 = 1

if (*(arg1 + 0x11fc) s> 0)
    zmm15 = 0x3851b717
    int32_t r13_1 = 0
    int64_t r14 = r9
    int32_t* r12_3 = arg2
    int32_t i_1
    
    do
        uint32_t rdi_1 = *(arg1 + 0x11f8) * 3
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(*(arg1 + 0x1214) - rdi_1)
        int64_t rbx_1 = sx.q((temp5_1 - temp4_1) s>> 1)
        void var_4b8
        sub_1403ed9e0(&var_4b8, r14, 1, rbx_1.d)
        memcpy(&var_4b8 + (rbx_1 << 2), r14 + (rbx_1 << 2), rdi_1 << 2)
        int64_t rax_26 = sx.q(rbx_1.d + rdi_1)
        sub_1403ed9e0(&var_4b8 + (rax_26 << 2), r14 + (rax_26 << 2), 2, rbx_1.d)
        r14 += sx.q(*(arg1 + 0x1204)) << 2
        void* rdx_7 = &var_4b8
        float var_508
        int32_t* rcx_4 = &var_508
        
        if (*(arg1 + 0x1260) s<= 0)
            sub_1403ed590(rcx_4, rdx_7, *(arg1 + 0x1214), *(arg1 + 0x1234) + 1)
        else
            sub_1403ed750(rcx_4, rdx_7, zmm8.q, *(arg1 + 0x1214), *(arg1 + 0x1234))
        
        float zmm1_1 = var_508
        int32_t r8_3 = *(arg1 + 0x1234)
        int64_t rbx_2 = sx.q(r13_1)
        float* rdi_3 = &arg2[0x7d + rbx_2]
        var_508 = zmm1_1 + zmm1_1 f* zmm15.d
        int32_t zmm3_1 = fconvert.s(sqrt(fconvert.d(sub_1403ed2b0(rdi_3, &var_508, r8_3).d)))
        *r12_3 = zmm3_1
        
        if (*(arg1 + 0x1260) s> 0)
            *r12_3 = sub_1403eafa0(rdi_3, zmm8, *(arg1 + 0x1234)) f* zmm3_1
        
        sub_1403ecf60(rdi_3, *(arg1 + 0x1234), zmm11.d)
        int32_t* rbx_4 = (rbx_2 << 2) + 0xf4 + arg2
        memcpy(rbx_4, rdi_3, *(arg1 + 0x1234) << 2)
        sub_1403ecf60(rbx_4, *(arg1 + 0x1234), zmm13.d)
        int128_t zmm0_7
        int512_t zmm6_1
        zmm0_7, zmm6_1 = sub_1403ed010(rdi_3, *(arg1 + 0x1234))
        zmm6_1.o = zmm0_7
        float zmm0_8
        float zmm6_2
        float zmm7_1
        float zmm8_1[0x4]
        zmm0_8, zmm6_2, zmm7_1, zmm8_1 = sub_1403ed010(rbx_4, *(arg1 + 0x1234))
        r12_3[0xc5] = zmm7_1 - (zmm7_1 - zmm6_2 / zmm0_8) * 0.699999988f
        zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1403eb040(rdi_3, rbx_4, zmm8_1, 0x407fef9e, *(arg1 + 0x1234))
        i_1 = i_7 + 1
        r13_1 += 0x10
        r12_3 = &r12_3[1]
        i_7 = i_1
    while (i_1 s< *(arg1 + 0x11fc))
    zmm15 = 0x3f000000
    i_6 = 0

zmm9.d = zmm9.d f* -0.159999996f
zmm1.q = fconvert.d(zmm9.d)
zmm8.d = fconvert.s(pow(0x4000000000000000, zmm1.q))
int32_t i_2 = 0
zmm1.d = fconvert.s(pow(2.0, 0x3fd47ae140000000).q)
uint128_t result

if (*(arg1 + 0x11fc) s> 0)
    int32_t* rax_31 = arg2
    
    do
        i_2 += 1
        rax_31 = &rax_31[1]
        result.d = zmm8.d f* rax_31[-1]
        result.d = result.d f+ zmm1.d
        rax_31[-1] = result.d
    while (i_2 s< *(arg1 + 0x11fc))

int32_t i_3 = 0
zmm1.d = arg2[0xd7].d f* 0.100000001f
zmm1.d = zmm1.d f+ 1.04999995f

if (*(arg1 + 0x11fc) s> 0)
    void* rax_32 = &arg2[0xc5]
    
    do
        i_3 += 1
        rax_32 += 4
        result.d = zmm1.d f* *(rax_32 - 4)
        *(rax_32 - 4) = result.d
    while (i_3 s< *(arg1 + 0x11fc))

bool cond:3 = *(arg1 + 0x12cd) != 2
result = zx.o(*(arg1 + 0x11cc))
uint128_t zmm4
zmm4.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1288))).d f* 3.05175781e-05f
result.d = _mm_cvtepi32_ps(result).d f* 0.00390625f
zmm4.d = zmm4.d f- zmm7.d
zmm4.d = zmm4.d f* zmm15.d
zmm4.d = zmm4.d f+ zmm7.d
zmm4.d = zmm4.d f* 4f
zmm4.d = zmm4.d f* result.d

if (cond:3)
    zmm2.d = 1.29999995f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x11f8))).d
    zmm4.d = zmm4.d f* zmm2.d
    zmm1.d = zmm7.d f- zmm2.d
    zmm4.d = zmm4.d f* 0.600000024f
    result.d = zmm2.d f- zmm7.d
    arg2[0xbd] = result.d
    zmm1.d = zmm1.d f- zmm4.d
    arg2[0xc1] = zmm1.d
    
    if (*(arg1 + 0x11fc) s> 1)
        void* rcx_13 = &arg2[0xc2]
        
        do
            i_4 += 1
            rcx_13 += 4
            *(rcx_13 - 0x14) = arg2[0xbd]
            *(rcx_13 - 4) = arg2[0xc1]
        while (i_4 s< *(arg1 + 0x11fc))
else
    int32_t i_5 = 0
    
    if (*(arg1 + 0x11fc) s> 0)
        void* rax_33 = &arg2[0xbd]
        
        do
            zmm1 = zx.o(*(arg1 + 0x11f8))
            result = zx.o(*(rax_33 - 0x210))
            i_5 += 1
            rax_33 += 4
            uint128_t zmm3
            zmm3.d = 3f f/ _mm_cvtepi32_ps(result).d
            zmm2.d = 0.200000003f f/ _mm_cvtepi32_ps(zmm1).d
            zmm3.d = zmm3.d f+ zmm2.d
            zmm1.d = zmm7.d f- zmm3.d
            result.d = zmm3.d f- zmm7.d
            *(rax_33 - 4) = result.d
            result.d = zmm4.d f* zmm3.d
            zmm1.d = zmm1.d f- result.d
            *(rax_33 + 0xc) = zmm1.d
        while (i_5 s< *(arg1 + 0x11fc))
    
    result.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x11cc))).d f* 0.262499988f
    result.d = result.d f* 0.00390625f
    zmm14.d = zmm14.d f- result.d

zmm8 = arg2[0xd6]
zmm1 = *(arg1 + 0x2fe4)
zmm9.d = zmm7.d f- arg2[0xd7]
result.d = zmm7.d f- zmm8.d
result.d = result.d f* 0.100000001f
zmm6.d = zmm9.d f* 0.100000001f
zmm6.d = zmm6.d f* zmm1.d
zmm6.d = zmm6.d f+ result.d

if (*(arg1 + 0x12cd) == 2)
    result = sqrt(_mm_cvtps_pd(zmm1.q).q)
    zmm8.d = zmm8.d f* zmm9.d
    zmm7.d = zmm7.d f- zmm8.d
    zmm12.d = fconvert.s(result.q)
    zmm7.d = zmm7.d f* 0.200000003f
    zmm7.d = zmm7.d f+ 0.300000012f
    zmm12.d = zmm12.d f* zmm7.d

if (*(arg1 + 0x11fc) s> 0)
    void* rbp_1 = &arg2[0xd1]
    
    do
        result = *(arg1 + 0x1c3c)
        zmm1.d = zmm6.d f- result.d
        i_6 += 1
        rbp_1 += 4
        zmm1.d = zmm1.d f* zmm10.d
        zmm1.d = zmm1.d f+ result.d
        *(arg1 + 0x1c3c) = zmm1.d
        *(rbp_1 - 0x24) = zmm1.d
        result = *(arg1 + 0x1c40)
        zmm2.d = zmm12.d f- result.d
        zmm2.d = zmm2.d f* zmm10.d
        zmm2.d = zmm2.d f+ result.d
        *(arg1 + 0x1c40) = zmm2.d
        *(rbp_1 - 4) = zmm2.d
        result = *(arg1 + 0x1c44)
        zmm1.d = zmm14.d f- result.d
        zmm1.d = zmm1.d f* zmm10.d
        zmm1.d = zmm1.d f+ result.d
        *(arg1 + 0x1c44) = zmm1.d
        *(rbp_1 - 0x14) = zmm1.d
    while (i_6 s< *(arg1 + 0x11fc))

__security_check_cookie(rax_1 ^ &var_548)
return result
