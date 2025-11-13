// 函数: sub_14099e9d0
// 地址: 0x14099e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg2 + 0x18))
int64_t r10 = sx.q(*(arg2 + 0x1c))
int32_t i_4 = 0
int32_t r15 = 1
int32_t* rax = *arg3
arg3[3].d = 1
*(arg3 + 0x1c) = r11.d
arg3[4].d = r10.d
*(arg3 + 0x24) = 0
*rax = 0

if (r11.d s> 0 && r11.d u>= 4)
    int64_t rdi_1 = arg3[1]
    
    if (rdi_1 u> &arg3[1] || rdi_1 + (sx.q((r11 - 1).d) << 2) u< &arg3[1])
        int32_t rax_4 = r11.d & 0x80000003
        
        if (rax_4 s< 0)
            rax_4 = ((rax_4 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_2 = r11.d - rax_4
        
        do
            i_4 += 4
        while (i_4 s< rcx_2)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_2 + 3)
        __builtin_memset(rdi_1, 0, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2 << 2)

int64_t i = sx.q(i_4)

if (i s< r11)
    if (r11 - i s>= 4)
        do
            *(arg3[1] + (i << 2)) = 0
            *(arg3[1] + (i << 2) + 4) = 0
            *(arg3[1] + (i << 2) + 8) = 0
            *(arg3[1] + (i << 2) + 0xc) = 0
            i += 4
        while (i s< r11 - 3)
    
    for (; i s< r11; i += 1)
        *(arg3[1] + (i << 2)) = 0

int32_t i_5 = 0

if (r10.d s> 0 && r10.d u>= 4)
    int64_t rdi_2 = arg3[2]
    
    if (rdi_2 u> &arg3[2] || rdi_2 + (sx.q((r10 - 1).d) << 2) u< &arg3[2])
        int32_t rax_21 = r10.d & 0x80000003
        
        if (rax_21 s< 0)
            rax_21 = ((rax_21 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_8 = r10.d - rax_21
        
        do
            i_5 += 4
        while (i_5 s< rcx_8)
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_8 + 3)
        __builtin_memset(rdi_2, 0, sx.q((temp3_1 + (temp2_1 & 3)) s>> 2) << 4 u>> 2 << 2)

int64_t i_1 = sx.q(i_5)

if (i_1 s< r10)
    if (r10 - i_1 s>= 4)
        do
            *(arg3[2] + (i_1 << 2)) = 0
            *(arg3[2] + (i_1 << 2) + 4) = 0
            *(arg3[2] + (i_1 << 2) + 8) = 0
            *(arg3[2] + (i_1 << 2) + 0xc) = 0
            i_1 += 4
        while (i_1 s< r10 - 3)
    
    for (; i_1 s< r10; i_1 += 1)
        *(arg3[2] + (i_1 << 2)) = 0

int32_t rdx_8 = 0
*(arg3[1] + (sx.q(*arg5) << 2)) = 0x3f000000
*(arg3[1] + (sx.q(arg5[1]) << 2)) = 0xbf000000
arg4[3].d = 1
*(arg4 + 0x1c) = r11.d
arg4[4].d = r10.d
*(arg4 + 0x24) = 0
int32_t rax_37 = *arg5

if (rax_37 s> 0)
    int64_t rcx_14 = 0
    
    do
        rcx_14 += 4
        rdx_8 += 1
        *(rcx_14 + arg4[1] - 4) = 0
        *(rcx_14 + arg4[2] - 4) = 0
        rax_37 = *arg5
    while (rdx_8 s< rax_37)

uint128_t zmm8
uint128_t var_48 = zmm8
int32_t rcx_16 = arg5[1] - rax_37
int128_t zmm9
int128_t var_58 = zmm9
uint128_t zmm10
uint128_t var_68 = zmm10
uint128_t zmm11
uint128_t var_78 = zmm11

if (rcx_16 == 2)
    **arg4 = 0xbf2aaaab
    *(arg4[1] + (sx.q(*arg5) << 2)) = 0xbe2aaaab
    *(arg4[1] + (sx.q(*arg5) << 2) + 4) = 0x3f2aaaab
    *(arg4[1] + (sx.q(arg5[1]) << 2)) = 0xbe2aaaab
    *(arg4[2] + (sx.q(*arg5) << 2)) = 0x3e2aaaab
    *(arg4[2] + (sx.q(*arg5) << 2) + 4) = 0x3e2aaaab
else if (rcx_16 - 1 s<= 1)
    **arg4 = 0xc0c00000
    *(arg4[1] + (sx.q(*arg5) << 2)) = 0x40400000
    *(arg4[1] + (sx.q(arg5[1]) << 2)) = 0x40400000
    *(arg4[2] + (sx.q(*arg5) << 2)) = 0
else
    zmm9.q = float.d(rcx_16)
    zmm10.q = 0x400921fb60000000 f/ zmm9.q
    double zmm0_1[0x2]
    double zmm6_1[0x2]
    uint128_t zmm7_1
    zmm0_1, zmm6_1, zmm7_1, zmm9, zmm10 = __libm_sse2_sincos_(zmm10)
    uint128_t zmm4_1 = 0x3ff0000000000000
    int32_t* rax_47 = *arg4
    zmm11 = 0x4010000000000000
    double zmm5_1[0x2] = zmm0_1
    double zmm3_1[0x2] = _mm_shuffle_pd(zmm0_1, zmm0_1, 1)
    double zmm1_1 = zmm3_1[0] + 3.0
    double zmm2_1 = zmm3_1[0] f+ zmm4_1.q
    zmm3_1[0] = zmm3_1[0] f- zmm4_1.q
    zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
    zmm2_1 = zmm2_1 / zmm5_1[0]
    zmm8.q = zmm4_1.q f/ (zmm1_1 f* zmm9.q)
    zmm3_1[0] = zmm3_1[0] f+ zmm4_1.q
    zmm3_1[0] = zmm3_1[0] * zmm2_1
    zmm1_1 = zmm2_1 f* zmm11.q * zmm3_1[0]
    zmm0_1 = zx.o(0)
    zmm3_1[0] = zmm3_1[0] f* zmm8.q
    zmm3_1 ^= data_142d8e3c0
    zmm0_1[0].d = fconvert.s(zmm1_1 f* zmm8.q)
    *rax_47 = zmm0_1[0].d
    zmm0_1 = zx.o(0)
    zmm0_1[0].d = fconvert.s(zmm3_1[0])
    *(arg4[1] + (sx.q(*arg5) << 2)) = zmm0_1[0].d
    *(arg4[1] + (sx.q(arg5[1]) << 2)) = zmm0_1[0].d
    zmm0_1 = zmm8
    int64_t rcx_24 = sx.q(*arg5)
    int64_t rax_50 = arg4[2]
    zmm0_1[0] = zmm0_1[0] * zmm5_1[0]
    *(rax_50 + (rcx_24 << 2)) = _mm_cvtpd_ps(zmm0_1).q.d
    
    if (not(zmm9.q f<= zmm4_1.q))
        double var_28_1[0x2] = zmm6_1
        uint128_t var_38_1 = zmm7_1
        
        do
            zmm6_1 = zmm5_1
            zmm7_1 = _mm_cvtepi32_pd(zx.q(r15 + 1))
            zmm0_1 = zmm7_1
            zmm0_1[0] = zmm0_1[0] f* zmm10.q
            zmm5_1 = sin(zmm0_1[0])
            int64_t rcx_25 = sx.q(*arg5 + r15)
            int64_t rax_53 = arg4[1]
            zmm6_1[0] = zmm6_1[0] f* zmm11.q
            zmm6_1[0] = zmm6_1[0] f* zmm8.q
            zmm1_1.d = fconvert.s(zmm6_1[0])
            *(rax_53 + (rcx_25 << 2)) = zmm1_1.d
            zmm5_1[0] = zmm5_1[0] + zmm6_1[0]
            int32_t rax_55 = *arg5 + r15
            r15 += 1
            int64_t rax_56 = arg4[2]
            zmm5_1[0] = zmm5_1[0] f* zmm8.q
            zmm1_1.d = fconvert.s(zmm5_1[0])
            *(rax_56 + (sx.q(rax_55) << 2)) = zmm1_1.d
        while (zmm7_1.q f< zmm9.q)

int64_t i_2 = sx.q(arg5[1])

if (i_2 s< r10)
    if (r10 - i_2 s>= 4)
        do
            *(arg4[2] + (i_2 << 2)) = 0
            *(arg4[2] + (i_2 << 2) + 4) = 0
            *(arg4[2] + (i_2 << 2) + 8) = 0
            *(arg4[2] + (i_2 << 2) + 0xc) = 0
            i_2 += 4
        while (i_2 s< r10 - 3)
    
    for (; i_2 s< r10; i_2 += 1)
        *(arg4[2] + (i_2 << 2)) = 0

uint64_t result = zx.q(arg5[1] + 1)
int64_t i_3 = sx.q(result.d)

if (i_3 s< r11)
    result = r11 - i_3
    
    if (result s>= 4)
        do
            *(arg4[1] + (i_3 << 2)) = 0
            *(arg4[1] + (i_3 << 2) + 4) = 0
            *(arg4[1] + (i_3 << 2) + 8) = 0
            result = arg4[1]
            *(result + (i_3 << 2) + 0xc) = 0
            i_3 += 4
        while (i_3 s< r11 - 3)
    
    for (; i_3 s< r11; i_3 += 1)
        result = arg4[1]
        *(result + (i_3 << 2)) = 0

return result
