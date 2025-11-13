// 函数: sub_1426338e0
// 地址: 0x1426338e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_588
int64_t rax_1 = __security_cookie ^ &var_588
int128_t* r15 = arg1
int32_t* var_530 = arg2
void* var_518 = arg6
uint128_t zmm6 = 0x3f800000
uint128_t zmm14 = arg4
uint128_t zmm7_1
zmm7_1.d = sub_14262df10(r15, arg2, arg6).d f* zmm14.d
int32_t var_548 = zmm7_1.d
*r15 = *arg8
r15[1].q = arg8[1].q
*(r15 + 0x18) = *(arg8 + 0x18)
r15[2].d = zmm7_1.d
uint128_t zmm0
zmm0.d = 1f f/ *(r15 + 0x14)
*(r15 + 0x1c) = zmm0.d
zmm0.d = 1f f/ zmm7_1.d
*(r15 + 0x24) = zmm0.d
*arg7 = 0
arg7[1].d = 0

if (arg9 != 0)
    *arg9 = 0

uint32_t i_5 = zx.d(*(r15 + 0x19))
int32_t r12 = 1
uint32_t r14 = zx.d(*(r15 + 0x1a))
char i_6 = *(r15 + 0x1b)

if (i_5 u< 1)
    i_5 = 1
else if (i_5 u> 0x20)
    i_5 = 0x20

if (r14 u< 1)
    r14 = 1
else if (r14 u> 4)
    r14 = 4

uint128_t zmm11 = arg6[2]
uint128_t zmm12 = *arg6
uint128_t zmm8
zmm8.d = 3.14159274f f/ _mm_cvtepi32_ps(zx.o(i_5)).d
zmm8.d = zmm8.d f+ zmm8.d
uint128_t zmm0_1 = atan2f(zmm11.d, zmm12.d)
int32_t rsi_1 = 0
int64_t var_4f8 = 0
uint128_t zmm10 = zmm0_1
zmm0_1 = 0x3f000000
uint128_t zmm13 = zx.o(0)
uint128_t zmm1
uint128_t zmm9_1
uint128_t zmm15

if (r14 != 0)
    int64_t rdi_1 = 1
    uint32_t r15_1 = r14
    zmm9_1.d = 1f f/ _mm_cvtepi32_ps(zx.o(r14)).d
    
    do
        zmm7_1.d = _mm_cvtepi32_ps(zx.o(r15_1)).d f* zmm9_1.d
        zmm6.d = _mm_cvtepi32_ps(zx.o(rsi_1) & 1).d f* zmm0_1.d
        zmm6.d = zmm6.d f* zmm8.d
        zmm6.d = zmm6.d f+ zmm10.d
        
        if (i_5 != 0)
            uint64_t i_2 = zx.q(i_5)
            r12 += i_5
            uint64_t i
            
            do
                zmm0_1.d = zmm6.d
                zmm0_1, zmm6, zmm7_1, zmm8, zmm9_1, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    __libm_sse2_sincosf_(zmm0_1)
                zmm6.d = zmm6.d f+ zmm8.d
                zmm1.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 1).d f* zmm7_1.d
                zmm0_1.d = zmm0_1.d f* zmm7_1.d
                (&var_4f8)[rdi_1].d = zmm1.d
                *(&var_4f8:4 + (rdi_1 << 3)) = zmm0_1.d
                rdi_1 += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
            zmm0_1 = 0x3f000000
        
        rsi_1 += 1
        r15_1 -= 1
    while (rsi_1 s< r14)
    
    zmm6 = 0x3f800000
    zmm7_1 = var_548
    r15 = arg1

zmm8 = *r15
zmm9_1.d = zmm6.d f- zmm8.d
int64_t rdi_2 = sx.q(r12)
zmm6.d = zmm6.d f/ zmm14.d
int32_t rsi_2 = 0
zmm9_1.d = zmm9_1.d f* zmm7_1.d
int32_t var_534 = zmm6.d
zmm10.d = zmm8.d f* zmm12.d
zmm8.d = zmm8.d f* zmm11.d

if (i_6 != 0)
    zmm14 = zmm10
    uint64_t i_3 = zx.q(i_6)
    int32_t* r13 = var_530
    uint128_t var_d8_1 = zmm15
    zmm15 = zmm8
    uint64_t i_4 = i_3
    uint64_t i_1
    
    do
        int64_t rbx_1 = 0
        zmm10 = zmm13
        zmm8 = zmm13
        
        if (rdi_2 s> 0)
            zmm12.d = zmm7_1.d f+ 0.00100000005f
            var_530:4.d = 0
            zmm12.d = zmm12.d f* zmm12.d
            
            do
                zmm6.d = zmm9_1.d f* (&var_4f8)[rbx_1].d
                zmm7_1.d = zmm9_1.d f* *(&var_4f8:4 + (rbx_1 << 3))
                zmm6.d = zmm6.d f+ zmm14.d
                zmm7_1.d = zmm7_1.d f+ zmm15.d
                var_530.d = zmm6.d
                zmm1.d = zmm6.d f* zmm6.d
                int32_t var_528_1 = zmm7_1.d
                zmm0_1.d = zmm7_1.d f* zmm7_1.d
                zmm1.d = zmm1.d f+ zmm0_1.d
                
                if (not(zmm1.d f> zmm12.d))
                    float zmm2[0x4] = zmm9_1
                    zmm2[0] = zmm2[0] * 0.100000001f
                    zmm0_1, zmm6, zmm7_1, zmm8, zmm9_1, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                        sub_14262e0e0(r15, &var_530, zmm2, r13, arg3.d, arg5, var_518, arg9)
                    rsi_2 += 1
                    
                    if (not(zmm0_1.d f>= zmm11.d) && not(zmm0_1.d f< zmm13.d))
                        zmm10 = zmm6
                        zmm8 = zmm7_1
                
                rbx_1 += 1
            while (rbx_1 s< rdi_2)
            
            zmm6 = var_534
            zmm0_1 = 0x3f000000
            zmm7_1 = var_548
            i_3 = i_4
        
        zmm10.d = zmm10.d f* zmm6.d
        i_1 = i_3
        i_3 -= 1
        i_4 = i_3
        zmm8.d = zmm8.d f* zmm6.d
        zmm14 = zmm10
        zmm9_1.d = zmm9_1.d f* zmm0_1.d
        zmm15 = zmm8
    while (i_1 != 1)

int32_t* rax_6 = arg7
*rax_6 = zmm10.d
rax_6[2] = zmm8.d
rax_6[1] = 0
__security_check_cookie(rax_1 ^ &var_588)
return zx.q(rsi_2)
