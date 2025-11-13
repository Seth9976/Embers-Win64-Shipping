// 函数: sub_1403fab70
// 地址: 0x1403fab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(*(arg1 + 8))
int64_t r14 = *(arg1 + 0x20)
int32_t r10 = r12.d

if (arg6 != 0)
    r10 = arg6

int32_t rbx = arg3
uint64_t r11_1 = zx.q(sx.d(*(r14 + (sx.q(r10) << 1))) << arg4)

if (arg7 == 2)
    int32_t rax_2 = r10
    
    if (arg8 s< r10)
        rax_2 = arg8
    
    r11_1 = zx.q(r11_1.d + (sx.d(*(r14 + (sx.q(rax_2) << 1))) << arg4))

uint128_t zmm1
uint128_t zmm2

if (*arg2 != 0)
    zmm2 = arg2[4]
    
    if (not(0x3fd999999999999a f<= _mm_cvtps_pd(zmm2.q).q))
        zmm1.d = 0.400000006f f- zmm2.d
        zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o((r11_1 << 3).d)).d
        arg3 -= int.d(zmm1.d)

uint128_t zmm0
uint128_t zmm3

if (arg7 == 2)
    zmm1 = arg10
    
    if (arg8 s< r10)
        r10 = arg8
    
    uint64_t rax_9 = zx.q((sx.d(*(r14 + (sx.q(r10) << 1))) << arg4) - r10)
    zmm0 = _mm_cvtepi32_ps(zx.o(r11_1.d))
    zmm3.d = _mm_cvtepi32_ps(zx.o(rax_9.d)).d f* 0.800000012f
    zmm3.d = zmm3.d f/ zmm0.d
    
    if (not(1f f> zmm1.d))
        zmm1 = 0x3f800000
    
    zmm1.d = zmm1.d f- 0.100000001f
    zmm2.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* zmm3.d
    zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o((rax_9 << 3).d)).d
    
    if (not(zmm1.d f> zmm2.d))
        zmm2 = zmm1
    
    arg3 -= int.d(zmm2.d)

int32_t r8 = arg3 + arg11 - (0x10 << arg4)

zmm0 = arg15 != 0x1392 ? 0x3d23d70a : 0x3ca3d70a

uint128_t zmm4 = arg12
zmm1.d = zmm4.d f- zmm0.d
zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o(r8)).d
int32_t rax_14 = int.d(zmm1.d)
zmm1 = zx.o(0)
int32_t r8_1 = r8 + rax_14

if (*arg2 != 0 && arg16 == 0)
    zmm2.d = arg2[1].d f- 0.150000006f
    
    if (not(0f f<= zmm2.d))
        zmm2 = zx.o(0)
    
    zmm2.d = zmm2.d f- 0.0900000036f
    zmm3 = _mm_cvtepi32_ps(zx.o((r11_1 << 3).d))
    zmm0.d = zmm3.d f* -1.20000005f
    zmm2.d = zmm2.d f* zmm0.d
    r8_1 -= int.d(zmm2.d)
    
    if (arg13 != 0)
        zmm3.d = zmm3.d f* 0.800000012f
        r8_1 += int.d(zmm3.d)

if (arg17 != 0 && arg16 == 0)
    int32_t temp0_9
    int32_t temp1_1
    temp0_9:temp1_1 = sx.q(r8_1)
    int32_t rax_21 = (temp1_1 + (temp0_9 & 3)) s>> 2
    zmm0.d = _mm_cvtepi32_ps(zx.o((r11_1 << 3).d)).d f* arg18
    int32_t rcx_5 = int.d(zmm0.d) + r8_1
    r8_1 = rcx_5
    
    if (rax_21 s> rcx_5)
        r8_1 = rax_21

int32_t rax_23 = r8_1 s>> 2
zmm0.d = _mm_cvtepi32_ps(zx.o(((sx.d(*(r14 + (r12 << 1) - 4)) << arg4) * arg7) << 3)).d f* arg14
int32_t rdx_9 = int.d(zmm0.d)

if (rdx_9 s<= rax_23)
    rdx_9 = rax_23

if (r8_1 s< rdx_9)
    rdx_9 = r8_1

if ((arg17 == 0 || arg16 != 0) && (arg9 != 0 || arg5 s< 0xfa00))
    zmm0.d = _mm_cvtepi32_ps(zx.o(arg5 - 0x7d00)).d f* 3.05175781e-05f
    
    if (not(0f f> zmm0.d))
        zmm1 = zmm0
    
    if (arg9 != 0 && not(0.670000017f f> zmm1.d))
        zmm1 = 0x3f2b851f
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_9 - rbx)).d f* zmm1.d
    rdx_9 = int.d(zmm0.d) + rbx

if (arg17 == 0 && not(0.200000003f f<= zmm4.d))
    int32_t rax_25 = 0x17700 - arg5
    bool cond:3_1 = rax_25 s> 0x7d00
    
    if (rax_25 s> 0x7d00)
        goto label_1403fae63
    
    if (rax_25 s>= 0)
        cond:3_1 = rax_25 s> 0x7d00
    label_1403fae63:
        
        if (cond:3_1)
            rax_25 = 0x7d00
    else
        rax_25 = 0
    
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_25)).d f* 3.09999996e-06f
    zmm1.d = zmm1.d f* arg19
    zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o(rdx_9)).d
    rdx_9 += int.d(zmm1.d)

int32_t rcx_9 = rbx * 2

if (rcx_9 s< rdx_9)
    rdx_9 = rcx_9

return zx.q(rdx_9)
