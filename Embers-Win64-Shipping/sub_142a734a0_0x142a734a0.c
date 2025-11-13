// 函数: sub_142a734a0
// 地址: 0x142a734a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t* rbp_1 = arg4

if (*arg4 s> 0)
    return 

int64_t rbx
rbx.b = 0
int32_t rsi_1 = 0
int32_t r13_1 = 0
uint128_t zmm6 = zx.o(0)
uint128_t zmm8 = 0x4194997000000000

if (sub_142a695b0(arg1, 0x13, arg4) == arg1[0x50].d && arg2 - 4 u<= 1)
    int32_t rax_4 = (*(*arg1 + 0x198))(arg1, zx.q(*(arg1 + 0x14)))
    double zmm1 = arg1[0x4d]
    int32_t rcx_1 = 0
    zmm6 = zx.o(arg1[0x1c])
    
    if (zmm6.q f>= zmm1)
        rcx_1 = 0xa
    
    r13_1 = arg1[4].d - rcx_1
    zmm6.q = zmm6.q f- _mm_cvtepi32_pd(zx.q(r13_1 - 1)) f* zmm8.q
    
    if (not(zmm1 f<= zmm6.q))
        rsi_1 = rax_4 - 0xa
        rbx = 0
        
        if (_mm_cvtepi32_pd(zx.q(rsi_1)) f* zmm8.q f+ zmm6.q f>= zmm1)
            rbx = 1

if (arg2 == 3)
    int32_t rax_20 = sub_142a695b0(arg1, 3, rbp_1)
    int32_t rax_21 = sub_142a695b0(arg1, 0x11, rbp_1)
    int32_t rbp_2 = *(arg1 + 0x24)
    
    if (*(arg1 + 0x14) != 0)
        if (rax_20 == 1)
            rbp_2 -= (*(*arg1 + 0x110))(arg1, zx.q(rax_21 - 1))
    else if (rax_20 s>= 0x34)
        int64_t r8_10 = *arg1
        rbp_2 += (*(r8_10 + 0x110))(arg1, zx.q(rax_21), r8_10)
    
    int32_t rsi_4 = rax_20 + arg3
    
    if (rsi_4 - 1 u> 0x33)
        int32_t r14_2 = (*(*arg1 + 0x110))(arg1, zx.q(rax_21))
        int32_t rbx_7 = arg1[5].d - rbp_2 + r14_2 - sub_14183ece0(arg1)
        int32_t rbx_8 = rbx_7 s% 7
        int32_t rbp_3 = rbx_8 + 7
        
        if (rbx_7 s% 7 s>= 0)
            rbp_3 = rbx_8
        
        if (6 - rbp_3 s>= zx.d(sub_142032690(arg1)))
            r14_2 -= 7
        
        int32_t rax_34 = sub_142a6c9f0(arg1, r14_2, r14_2, rbp_3 + 1)
        rsi_4 = mods.dp.d(sx.q(rsi_4 - 1 + rax_34), rax_34) + 1
    
    sub_142a6c030(arg1, 3, rsi_4)
    sub_142a6c030(arg1, 0x11, rax_21)
else if (arg2 == 4)
    if (rbx.b != 0)
        int32_t rbx_1 = arg1[5].d
        int32_t rax_5 = sub_14183ece0(arg1)
        int32_t rbx_2 = rbx_1 - rax_5
        int32_t r15_2 = rbx_2 + 7
        
        if (rbx_1 - rax_5 s>= 0)
            r15_2 = rbx_2
        
        int32_t rcx_13 = (r15_2 - r13_1 + 1) s% 7
        int32_t rbx_3 = rcx_13 + 7
        
        if ((r15_2 - r13_1 + 1) s% 7 s>= 0)
            rbx_3 = rcx_13
        
        int32_t r8_5 = 8
        
        if (7 - rbx_3 s>= zx.d(sub_142032690(arg1)))
            r8_5 = 1
        
        int32_t r8_6 = r8_5 - rbx_3
        int32_t r15_4 = r15_2 - r13_1 + rsi_1
        int32_t temp1_1 = mods.dp.d(sx.q(arg3 * 7 - r8_6 + r13_1), rsi_1 - r15_4 s% 7 - r8_6 + 7)
        int32_t rax_18 = temp1_1 + rsi_1 - r15_4 s% 7 - r8_6 + 7
        
        if (temp1_1 s>= 0)
            rax_18 = temp1_1
        
        int32_t rax_19 = rax_18 + r8_6
        
        if (rax_19 s< 1)
            rax_19 = 1
        
        if (rax_19 s<= rsi_1)
            rsi_1 = rax_19
        
        sub_142a6c1a0(arg1, _mm_cvtepi32_pd(zx.q(rsi_1 - 1)) f* zmm8.q f+ zmm6.q, rbp_1)
    else
        sub_142a6b8d0(arg1, 4, arg3, rbp_1)
else if (arg2 != 5)
    sub_142a6b8d0(arg1, arg2, arg3, rbp_1)
else if (rbx.b != 0)
    uint64_t _X = arg1[0x1c] f- zmm6.q f+ _mm_cvtepi32_pd(zx.q(arg3)) f* zmm8.q
    uint128_t zmm7
    zmm7.q = _mm_cvtepi32_pd(zx.q(rsi_1)).q f* zmm8.q
    double zmm0 = sub_142a4b9c0(_X, zmm7.q)
    
    if (not(0.0 <= zmm0))
        zmm0 = zmm0 f+ zmm7.q
    
    sub_142a6c1a0(arg1, zmm0 f+ zmm6.q, rbp_1)
else
    sub_142a6b8d0(arg1, 5, arg3, rbp_1)
