// 函数: sub_1403886d0
// 地址: 0x1403886d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm6[0x2]
double var_58[0x2] = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
uint128_t zmm10
uint128_t var_98 = zmm10
uint128_t zmm11
uint128_t var_a8 = zmm11
int128_t zmm12
int128_t var_b8 = zmm12
uint128_t zmm13
uint128_t var_c8 = zmm13
int128_t zmm14
int128_t var_d8 = zmm14
int32_t var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
*(arg1 + 0x1acc) += 1
var_2c8 = zx.o(0).d
int32_t rdx = *(arg1 + 0x1ad0)
int32_t rcx = rdx + 1
int32_t rax_2 = rcx

if (rcx s> 0x14)
    rax_2 = 0x14

int32_t rax_3 = rcx

if (rcx s> 0x32)
    rax_3 = 0x32

uint128_t zmm2
zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_2)).d

if (rcx s> 0x3e8)
    rcx = 0x3e8

float var_278 = zmm2.d
zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_3)).d
int32_t var_2a8 = zmm2.d
float var_2b8 = 1f f/ _mm_cvtepi32_ps(zx.o(rcx)).d

if (rdx s< 4)
    *(arg1 + 0x1ab8) = 0x3f000000

int32_t* rax_4 = *(arg3 + 0x58)

if (rdx == 0)
    *(arg1 + 0x1680) = 0xf0

int64_t rax_5 = sx.q(*(arg1 + 0x1680))
int32_t r8 = 0x2d0 - rax_5.d

if (arg5 s< r8)
    r8 = arg5

int32_t result = arg11(arg4, arg1 + 0xb40 + (rax_5 << 2), r8, zx.q(arg6), arg7, arg8, arg9)
int32_t rcx_3 = *(arg1 + 0x1680) + arg5

if (rcx_3 s>= 0x2d0)
    int64_t rax_9 = sx.q(*(arg1 + 0x2134))
    void* rcx_6 = (rax_9 + 0x130) * 0x1c + arg1
    *(arg1 + 0x2134) = rax_9.d + 1
    
    if (rax_9.d + 1 s>= 0xc8)
        *(arg1 + 0x2134) = rax_9.d - 0xc7
    
    int32_t var_11c8
    int32_t* var_250_1 = &var_11c8
    int32_t var_20c8[0x3b0]
    int32_t (* var_260_1)[0x3b0] = &var_20c8
    int32_t var_2488
    int32_t* var_270_1 = &var_2488
    int32_t var_2848
    int32_t* var_258_1 = &var_2848
    int64_t r15_1 = &data_1435fdac4 - arg1
    void var_11c0
    void* rcx_7 = &var_11c0
    void var_2cc
    void* rdx_3 = &var_2cc
    void* rax_12 = arg1 + 0xf00
    void* r9_1 = arg1 + 0x1678
    int64_t i_17 = 0x18
    int64_t i
    
    do
        zmm2 = *(&data_1435fdab0 - arg1 + rax_12 - 0xf00)
        uint128_t zmm0
        zmm0.d = zmm2.d f* *(rax_12 - 0x3c0)
        *(rcx_7 - 8) = zmm0.d
        *(rcx_7 - 4) = zmm2.d f* *rax_12
        zmm0.d = zmm2.d f* *(r9_1 - 0x3bc)
        *(rdx_3 - 4) = zmm0.d
        zmm2.d = zmm2.d f* *(r9_1 + 4)
        *rdx_3 = zmm2.d
        uint128_t zmm3 = *("wN39" - arg1 + rax_12 - 0xf00)
        zmm0.d = zmm3.d f* *(rax_12 - 0x3bc)
        *rcx_7 = zmm0.d
        *(rcx_7 + 4) = zmm3.d f* *(rax_12 + 4)
        zmm0.d = zmm3.d f* *(r9_1 - 0x3c0)
        *(rdx_3 - 0xc) = zmm0.d
        zmm3.d = zmm3.d f* *r9_1
        *(rdx_3 - 8) = zmm3.d
        zmm2 = *(&data_1435fdab8 - arg1 + rax_12 - 0xf00)
        zmm0.d = zmm2.d f* *(rax_12 - 0x3b8)
        *(rcx_7 + 8) = zmm0.d
        *(rcx_7 + 0xc) = zmm2.d f* *(rax_12 + 8)
        zmm0.d = zmm2.d f* *(r9_1 - 0x3c4)
        *(rdx_3 - 0x14) = zmm0.d
        zmm2.d = zmm2.d f* *(r9_1 - 4)
        *(rdx_3 - 0x10) = zmm2.d
        zmm3 = *(&data_1435fdabc - arg1 + rax_12 - 0xf00)
        zmm0.d = zmm3.d f* *(rax_12 - 0x3b4)
        *(rcx_7 + 0x10) = zmm0.d
        *(rcx_7 + 0x14) = zmm3.d f* *(rax_12 + 0xc)
        zmm0.d = zmm3.d f* *(r9_1 - 0x3c8)
        *(rdx_3 - 0x1c) = zmm0.d
        zmm3.d = zmm3.d f* *(r9_1 - 8)
        *(rdx_3 - 0x18) = zmm3.d
        zmm2 = *(&data_1435fdac0 - arg1 + rax_12 - 0xf00)
        zmm0.d = zmm2.d f* *(rax_12 - 0x3b0)
        *(rcx_7 + 0x18) = zmm0.d
        *(rcx_7 + 0x1c) = zmm2.d f* *(rax_12 + 0x10)
        zmm0.d = zmm2.d f* *(r9_1 - 0x3cc)
        *(rdx_3 - 0x24) = zmm0.d
        zmm2.d = zmm2.d f* *(r9_1 - 0xc)
        *(rdx_3 - 0x20) = zmm2.d
        zmm3 = *(r15_1 + rax_12 - 0xf00)
        zmm0.d = zmm3.d f* *(rax_12 - 0x3ac)
        *(rcx_7 + 0x20) = zmm0.d
        *(rcx_7 + 0x24) = zmm3.d f* *(rax_12 + 0x14)
        zmm0.d = zmm3.d f* *(r9_1 - 0x3d0)
        *(rdx_3 - 0x2c) = zmm0.d
        zmm3.d = zmm3.d f* *(r9_1 - 0x10)
        *(rdx_3 - 0x28) = zmm3.d
        zmm2 = *(&data_1435fdac8 - arg1 + rax_12 - 0xf00)
        zmm0.d = zmm2.d f* *(rax_12 - 0x3a8)
        *(rcx_7 + 0x28) = zmm0.d
        *(rcx_7 + 0x2c) = zmm2.d f* *(rax_12 + 0x18)
        zmm0.d = zmm2.d f* *(r9_1 - 0x3d4)
        *(rdx_3 - 0x34) = zmm0.d
        zmm2.d = zmm2.d f* *(r9_1 - 0x14)
        rdx_3 -= 0x50
        rax_12 += 0x28
        rcx_7 += 0x50
        *(rdx_3 + 0x20) = zmm2.d
        zmm3 = *(&data_1435fdacc - arg1 + rax_12 - 0xf28)
        r9_1 -= 0x28
        zmm0.d = zmm3.d f* *(rax_12 - 0x3cc)
        *(rcx_7 - 0x20) = zmm0.d
        *(rcx_7 - 0x1c) = zmm3.d f* *(rax_12 - 0xc)
        zmm0.d = zmm3.d f* *(r9_1 - 0x3b0)
        *(rdx_3 + 0x14) = zmm0.d
        zmm3.d = zmm3.d f* *(r9_1 + 0x10)
        *(rdx_3 + 0x18) = zmm3.d
        zmm2 = *(&data_1435fdad0 - arg1 + rax_12 - 0xf28)
        zmm0.d = zmm2.d f* *(rax_12 - 0x3c8)
        *(rcx_7 - 0x18) = zmm0.d
        *(rcx_7 - 0x14) = zmm2.d f* *(rax_12 - 8)
        zmm0.d = zmm2.d f* *(r9_1 - 0x3b4)
        *(rdx_3 + 0xc) = zmm0.d
        zmm2.d = zmm2.d f* *(r9_1 + 0xc)
        *(rdx_3 + 0x10) = zmm2.d
        zmm3 = *(&data_1435fdad4 - arg1 + rax_12 - 0xf28)
        r15_1 = &data_1435fdac4 - arg1
        zmm0.d = zmm3.d f* *(rax_12 - 0x3c4)
        *(rcx_7 - 0x10) = zmm0.d
        *(rcx_7 - 0xc) = zmm3.d f* *(rax_12 - 4)
        zmm0.d = zmm3.d f* *(r9_1 - 0x3b8)
        *(rdx_3 + 4) = zmm0.d
        zmm3.d = zmm3.d f* *(r9_1 + 8)
        *(rdx_3 + 8) = zmm3.d
        i = i_17
        i_17 -= 1
    while (i != 1)
    memmove(arg1 + 0xb40, arg1 + 0x12c0, 0x3c0)
    int32_t rax_13 = *(arg1 + 0x1680)
    int32_t rbx_3 = arg5 + rax_13
    arg11(arg4, arg1 + 0xf00, zx.q(rbx_3 - 0x2d0), zx.q(arg6 - rax_13 + 0x2d0), arg7, arg8, arg9)
    *(arg1 + 0x1680) = rbx_3 - 0x1e0
    uint128_t zmm15_1 = sub_1403fff80(rax_4, var_250_1, var_260_1)
    double zmm14_1 = 0.5
    int32_t* r15_3 = &(*var_260_1)[3]
    int32_t* r12_2 = &(*var_260_1)[0x3bf]
    int32_t* rax_19 = arg1 + 0x3c0 - var_258_1
    int64_t r14_3 = var_270_1 - var_258_1
    void* r13_3 = arg1 - var_258_1
    void* rbx_4 = &var_258_1[1]
    int64_t i_10 = 0xef
    void* rsi_4 = arg1 + 0x780 - var_258_1
    uint128_t zmm0_1
    uint128_t zmm1_1
    uint128_t zmm6_1
    uint128_t zmm7_1
    uint128_t zmm8_2
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    uint128_t zmm12_1
    int64_t i_1
    
    do
        zmm10_1 = r15_3[-1]
        zmm11_1 = r12_2[-1]
        zmm9_1 = *r12_2
        zmm1_1.d = zmm10_1.d f+ zmm11_1.d
        zmm0_1.d = (*r15_3).d f- zmm9_1.d
        uint128_t zmm0_2
        int32_t zmm6_2
        zmm0_2, zmm6_2 = sub_1403883d0(zmm0_1, zmm1_1)
        zmm9_1.d = zmm9_1.d f+ zmm6_2
        zmm11_1.d = zmm11_1.d f- zmm10_1.d
        uint128_t zmm8_1
        zmm8_1.d = zmm0_2.d f* 0.159154937f
        zmm7_1.d = zmm8_1.d f- *(r13_3 + rbx_4)
        zmm12_1.d = zmm7_1.d f- *(rax_19 + rbx_4)
        uint128_t zmm0_3
        zmm0_3, zmm8_2 = sub_1403883d0(zmm11_1, zmm9_1)
        zmm9_1.d = zmm0_3.d f* 0.159154937f
        zmm0_3.q = fconvert.d(zmm12_1.d)
        zmm0_3.q = zmm0_3.q f+ zmm14_1
        zmm10_1.d = zmm9_1.d f- zmm8_2.d
        zmm6_1.d = zmm10_1.d f- zmm7_1.d
        zmm1_1.d = fconvert.s(floor(zmm0_3.q))
        zmm12_1.d = zmm12_1.d f- zmm1_1.d
        zmm7_1 = zmm12_1
        
        if (not(zmm15_1.d f<= zmm12_1.d))
            zmm7_1 ^= 0x80000000
        
        zmm12_1.d = zmm12_1.d f* zmm12_1.d
        *rbx_4 = zmm7_1.d
        zmm12_1.d = zmm12_1.d f* zmm12_1.d
        zmm1_1.d = fconvert.s(floor(fconvert.d(zmm6_1.d) + zmm14_1).q)
        zmm6_1.d = zmm6_1.d f- zmm1_1.d
        zmm0_1 = zmm6_1
        
        if (not(zmm15_1.d f<= zmm6_1.d))
            zmm0_1 ^= 0x80000000
        
        zmm12_1.d = zmm12_1.d f* 2f
        zmm0_1.d = zmm0_1.d f+ zmm7_1.d
        zmm6_1.d = zmm6_1.d f* zmm6_1.d
        r12_2 -= 8
        r15_3 = &r15_3[2]
        zmm12_1.d = zmm12_1.d f+ *(rsi_4 + rbx_4)
        *rbx_4 = zmm0_1.d
        *(r13_3 + rbx_4) = zmm9_1.d
        zmm6_1.d = zmm6_1.d f* zmm6_1.d
        zmm12_1.d = zmm12_1.d f+ zmm6_1.d
        *(rax_19 + rbx_4) = zmm10_1.d
        *(rsi_4 + rbx_4) = zmm6_1.d
        rbx_4 += 4
        i_1 = i_10
        i_10 -= 1
        zmm12_1.d = zmm12_1.d f* 0.25f
        zmm12_1.d = zmm12_1.d f* 62341.8164f
        zmm12_1.d = zmm12_1.d f+ 1f
        zmm0_1.d = 1f f/ zmm12_1.d
        zmm0_1.d = zmm0_1.d f- 0.0149999997f
        *(r14_3 + rbx_4 - 4) = zmm0_1.d
    while (i_1 != 1)
    int64_t var_298
    var_298.d = zmm15_1.d
    zmm12_1 = zmm15_1
    int64_t var_2b0_1
    var_2b0_1.d = zmm15_1.d
    uint128_t zmm5_1 = zmm15_1
    *(rcx_6 + 0x10) = 0
    
    if (*(arg1 + 0x1ad0) == 0)
        void* rax_20 = arg1 + 0x1958
        int64_t i_13 = 0x12
        int64_t i_2
        
        do
            *(rax_20 - 0x48) = 0x501502f9
            *rax_20 = 0xd01502f9
            rax_20 += 4
            i_2 = i_13
            i_13 -= 1
        while (i_2 != 1)
    
    zmm7_1 = 0x26901d7d
    int64_t r13_4 = 0
    zmm9_1 = zmm15_1
    int64_t var_2a0_1
    var_2a0_1.d = zmm15_1.d
    void var_148
    int64_t rcx_12 = &var_148 - arg1
    int64_t rax_21 = &data_1435fde70 - arg1
    int32_t r15_4 = -0x12
    int64_t rcx_13 = &data_1435fde74 - arg1
    void* rbx_5 = arg1 + 0x1910
    int64_t var_250_2 = rax_21
    int64_t var_240_1 = rcx_13
    int64_t var_290_1
    int64_t var_280_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    float zmm4_1
    
    do
        int64_t r9_5 = sx.q(*(rbx_5 + rax_21 - 0x1910))
        int32_t r11_2 = *(rbx_5 + rcx_13 - 0x1910)
        zmm6_1 = zmm15_1
        zmm8_2 = zmm15_1
        zmm4_1 = zmm15_1.d
        int64_t r10_6 = r9_5
        
        if (r9_5.d s< r11_2)
            if (r11_2 - r9_5.d s>= 4)
                void* rcx_15 = &var_258_1[1 + r9_5]
                void* rdx_9 = &(*var_260_1)[2 + r9_5 * 2]
                void* r8_4 = &(*var_260_1)[(0x1df - r9_5) * 2]
                uint64_t i_11 = zx.q(((r11_2 - r9_5.d - 4) u>> 2) + 1)
                r9_5 = zx.q((r9_5 + (i_11 << 2)).d)
                r10_6 += i_11 << 2
                uint64_t i_3
                
                do
                    zmm3_1 = *(rdx_9 - 8)
                    zmm0_1 = *(r8_4 + 8)
                    zmm1_1 = *(rdx_9 - 4)
                    rcx_15 += 0x10
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    zmm2_1 = *(r8_4 + 0xc)
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1.d = 0.5f f- *(rcx_15 - 0x14)
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm2_1 = *(r8_4 + 4)
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm0_1.d = zmm3_1.d f* *(r14_3 + rcx_15 - 0x14)
                    zmm6_1.d = zmm6_1.d f+ zmm3_1.d
                    zmm3_1.d = zmm3_1.d f* 2f
                    zmm8_2.d = zmm8_2.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm3_1.d
                    zmm3_1 = *rdx_9
                    zmm0_1 = *r8_4
                    zmm4_1 = zmm4_1 f+ zmm1_1.d
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1 = *(rdx_9 + 4)
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1.d = 0.5f f- *(rcx_15 - 0x10)
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm2_1 = *(r8_4 - 4)
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm0_1.d = zmm3_1.d f* *(r14_3 + rcx_15 - 0x10)
                    zmm6_1.d = zmm6_1.d f+ zmm3_1.d
                    zmm3_1.d = zmm3_1.d f* 2f
                    zmm8_2.d = zmm8_2.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm3_1.d
                    zmm3_1 = *(rdx_9 + 8)
                    zmm0_1 = *(r8_4 - 8)
                    zmm4_1 = zmm4_1 f+ zmm1_1.d
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1 = *(rdx_9 + 0xc)
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1.d = 0.5f f- *(rcx_15 - 0xc)
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm2_1 = *(r8_4 - 0xc)
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm0_1.d = zmm3_1.d f* *(r14_3 + rcx_15 - 0xc)
                    zmm6_1.d = zmm6_1.d f+ zmm3_1.d
                    zmm3_1.d = zmm3_1.d f* 2f
                    zmm8_2.d = zmm8_2.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm3_1.d
                    zmm0_1 = *(r8_4 - 0x10)
                    zmm3_1 = *(rdx_9 + 0x10)
                    zmm4_1 = zmm4_1 f+ zmm1_1.d
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1 = *(rdx_9 + 0x14)
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1.d = 0.5f f- *(rcx_15 - 8)
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm0_1.d = zmm3_1.d f* *(r14_3 + rcx_15 - 8)
                    zmm6_1.d = zmm6_1.d f+ zmm3_1.d
                    zmm3_1.d = zmm3_1.d f* 2f
                    zmm8_2.d = zmm8_2.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm3_1.d
                    zmm4_1 = zmm4_1 f+ zmm1_1.d
                    rdx_9 += 0x20
                    r8_4 -= 0x20
                    i_3 = i_11
                    i_11 -= 1
                while (i_3 != 1)
            
            if (r9_5.d s< r11_2)
                void* rcx_16 = &var_258_1[r10_6]
                void* rdx_10 = &(*var_260_1)[r10_6 * 2]
                void* r8_5 = &(*var_260_1)[(0x1e0 - r10_6) * 2]
                int64_t i_12 = sx.q(r11_2 - r9_5.d)
                int64_t i_4
                
                do
                    zmm0_1 = *r8_5
                    zmm3_1 = *rdx_10
                    zmm1_1 = *(rdx_10 + 4)
                    rdx_10 += 8
                    rcx_16 += 4
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm2_1 = *(r8_5 + 4)
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    r8_5 -= 8
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1.d = 0.5f f- *(rcx_16 - 4)
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm0_1.d = zmm3_1.d f* *(rcx_16 + r14_3 - 4)
                    zmm6_1.d = zmm6_1.d f+ zmm3_1.d
                    zmm3_1.d = zmm3_1.d f* 2f
                    zmm8_2.d = zmm8_2.d f+ zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm3_1.d
                    zmm4_1 = zmm4_1 f+ zmm1_1.d
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
        
        zmm10_1.d = zmm6_1.d f+ zmm7_1.d
        *(arg1 + ((sx.q(*(arg1 + 0x1ac4)) * 0x12 + r13_4) << 2) + 0x16d0) = zmm6_1.d
        zmm6_1.d = zmm6_1.d f+ 1.00000001e-10f
        zmm5_1.d = zmm5_1.d f+ zmm4_1 f/ zmm10_1.d
        zmm0_1.q = fconvert.d(zmm6_1.d)
        var_280_1.d = zmm5_1.d
        zmm1_1.d = fconvert.s(sqrt(zmm0_1.q))
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        var_290_1.d = zmm9_1.d
        double zmm0_6 = log(fconvert.d(zmm6_1.d))
        zmm2_1.d = (*rbx_5).d f+ 0.00999999978f
        zmm3_1.d = fconvert.s(zmm0_6)
        void var_198
        *(rbx_5 + &var_198 - arg1 - 0x1910) = zmm3_1.d
        
        if (not(zmm2_1.d f<= zmm3_1.d))
            zmm2_1 = zmm3_1
        
        zmm1_1 = *(rbx_5 + 0x48)
        *rbx_5 = zmm2_1.d
        zmm1_1.d = zmm1_1.d f- 0.100000001f
        
        if (not(zmm3_1.d f<= zmm1_1.d))
            zmm1_1 = zmm3_1
        
        *(rbx_5 + 0x48) = zmm1_1.d
        zmm0_6.d = zmm2_1.q.d f+ 1f
        
        if (not(zmm0_6.d f<= zmm1_1.d))
            zmm1_1.d = zmm1_1.d f+ 0.5f
            zmm2_1.d = zmm2_1.d f- 0.5f
            *(rbx_5 + 0x48) = zmm1_1.d
            *rbx_5 = zmm2_1.d
        
        zmm1_1.d = zmm1_1.d f+ zmm7_1.d
        zmm7_1 = *(rbx_5 - 0x240)
        zmm1_1.d = zmm1_1.d f- zmm2_1.d
        zmm3_1.d = zmm3_1.d f- zmm2_1.d
        zmm3_1.d = zmm3_1.d f/ zmm1_1.d
        zmm0_6.d = var_2a0_1.d.d f+ zmm3_1.d
        var_2a0_1.d = zmm0_6.d
        double zmm0_7 = sqrt(_mm_cvtps_pd(zmm7_1.q))
        zmm6_1 = *(rbx_5 - 0x1f8)
        zmm9_1.d = fconvert.s(zmm0_7)
        zmm7_1.d = zmm7_1.d f+ zmm15_1.d
        zmm9_1.d = zmm9_1.d f+ zmm15_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(rbx_5 - 0x1b0)
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(rbx_5 - 0x168)
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(rbx_5 - 0x120)
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(rbx_5 - 0xd8)
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(rbx_5 - 0x90)
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(rbx_5 - 0x48)
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6_1.q)))
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm7_1.d = zmm7_1.d f* 8f
        zmm9_1.d = zmm9_1.d f+ zmm1_1.d
        zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm7_1.q) + 1.0000000000000001e-15).q)
        zmm9_1.d = zmm9_1.d f/ zmm1_1.d
        
        if (not(zmm9_1.d f<= 0.99000001f))
            zmm9_1 = 0x3f7d70a4
        
        zmm9_1.d = zmm9_1.d f* zmm9_1.d
        zmm8_2.d = zmm8_2.d f/ zmm10_1.d
        zmm9_1.d = zmm9_1.d f* zmm9_1.d
        zmm2_1.d = var_298.d.d f+ zmm9_1.d
        zmm9_1.d = zmm9_1.d f* *(rbx_5 - 0x28c)
        var_298.d = zmm2_1.d
        
        if (not(zmm8_2.d f> zmm9_1.d))
            zmm8_2 = zmm9_1
        
        zmm12_1.d = zmm12_1.d f+ zmm8_2.d
        *(rbx_5 + rcx_12 - 0x1910) = zmm8_2.d
        
        if (r15_4 + 0x12 s>= 9)
            zmm12_1.d = zmm12_1.d f- *(rbx_5 + rcx_12 - 0x1934)
        
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(r15_4)).d f* 0.0299999993f
        zmm0_1.d = zmm0_1.d f+ 1f
        zmm0_1.d = zmm0_1.d f* zmm12_1.d
        
        if (not(var_2b0_1.d.d f> zmm0_1.d))
            var_2b0_1.d = zmm0_1.d
        
        zmm1_1 = var_2c8
        zmm7_1 = 0x26901d7d
        zmm5_1 = var_280_1.d
        rcx_13 = var_240_1
        int32_t rax_35 = r15_4 + 0xa
        r15_4 += 1
        r13_4 += 1
        zmm9_1 = var_290_1.d
        *(rbx_5 - 0x28c) = zmm8_2.d
        rbx_5 += 4
        rax_21 = var_250_2
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_35)).d f* zmm8_2.d
        zmm1_1.d = zmm1_1.d f+ zmm0_1.d
        var_2c8 = zmm1_1.d
    while (r15_4 + 0x12 s< 0x12)
    
    char rcx_20 = arg10.b - 8
    zmm6_1 = zmm15_1
    zmm7_1 = zmm15_1
    
    if (arg10 - 8 s< 0)
        rcx_20 = 0
    
    int32_t i_18 = 0
    zmm10_1.d = 1f - var_2b8
    int32_t i_5 = 0
    void* r10_7 = arg1 + 0x19a0
    int64_t rax_38 = &data_1435fdec4 - arg1
    int64_t var_2c0_2 = rax_38
    zmm8_2.d = 0.000569999975f f/ _mm_cvtepi32_ps(zx.o(1 << rcx_20)).d
    zmm8_2.d = zmm8_2.d f* zmm8_2.d
    
    do
        int64_t r15_5 = sx.q(*(&data_1435fdec0 - arg1 + r10_7 - 0x19a0))
        int64_t r11_4 = sx.q(*(rax_38 + r10_7 - 0x19a0))
        zmm5_1 = zmm15_1
        int64_t rcx_21 = r15_5
        
        if (r15_5 s< r11_4)
            if (r11_4 - rcx_21 s>= 4)
                void* rdx_12 = &(*var_260_1)[2 + r15_5 * 2]
                void* r8_6 = &(*var_260_1)[(0x1df - rcx_21) * 2]
                int64_t j_2 = ((r11_4 - rcx_21 - 4) u>> 2) + 1
                rcx_21 = r15_5 + (j_2 << 2)
                int64_t j
                
                do
                    zmm3_1 = *(r8_6 + 8)
                    zmm0_1 = *(rdx_12 - 8)
                    zmm1_1 = *(rdx_12 - 4)
                    rdx_12 += 0x20
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm2_1 = *(r8_6 + 0xc)
                    zmm4_1 = *r8_6
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    r8_6 -= 0x20
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm0_1 = *(rdx_12 - 0x20)
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1 = *(rdx_12 - 0x1c)
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm2_1 = *(r8_6 + 0x24)
                    zmm4_1 = zmm4_1 * zmm4_1 f+ zmm0_1.d
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm0_1 = *(rdx_12 - 0x18)
                    zmm4_1 = zmm4_1 f+ zmm1_1.d
                    zmm1_1 = *(rdx_12 - 0x14)
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm4_1 = zmm4_1 f+ zmm2_1.d
                    zmm2_1 = *(r8_6 + 0x1c)
                    zmm5_1.d = zmm5_1.d f+ zmm3_1.d
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm3_1 = *(r8_6 + 0x18)
                    zmm5_1.d = zmm5_1.d f+ zmm4_1
                    zmm4_1 = *(r8_6 + 0x10)
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    zmm0_1 = *(rdx_12 - 0x10)
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm1_1 = *(rdx_12 - 0xc)
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm2_1 = *(r8_6 + 0x14)
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm3_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm4_1 * zmm4_1 f+ zmm0_1.d f+ zmm1_1.d f+ zmm2_1.d
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            if (rcx_21 s< r11_4)
                void* rdx_13 = &(*var_260_1)[(0x1e0 - rcx_21) * 2]
                
                do
                    zmm0_1 = *rdx_13
                    zmm3_1 = (*var_260_1)[rcx_21 * 2]
                    zmm1_1 = (*var_260_1)[rcx_21 * 2 + 1]
                    rcx_21 += 1
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm2_1 = *(rdx_13 + 4)
                    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                    rdx_13 -= 8
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm3_1.d
                while (rcx_21 s< r11_4)
            
            rax_38 = var_2c0_2
        
        if (not(zmm7_1.d f> zmm5_1.d))
            zmm7_1 = zmm5_1
        
        zmm0_1.d = zmm10_1.d f* *r10_7
        
        if (not(zmm0_1.d f> zmm5_1.d))
            zmm0_1 = zmm5_1
        
        *r10_7 = zmm0_1.d
        
        if (not(zmm5_1.d f> zmm0_1.d))
            zmm5_1 = zmm0_1
        
        zmm6_1.d = zmm6_1.d f* 0.0500000007f
        
        if (not(zmm6_1.d f> zmm5_1.d))
            zmm6_1 = zmm5_1
        
        zmm0_1.q = fconvert.d(zmm6_1.d)
        zmm0_1.q = zmm0_1.q f* 0x3fb999999999999a
        zmm1_1.q = fconvert.d(zmm5_1.d)
        
        if (not(zmm1_1.q f<= zmm0_1.q))
            zmm0_1.d = zmm5_1.d f* 1e+09f
            
            if (not(zmm0_1.d f<= zmm7_1.d))
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(r11_4.d - r15_5.d)).d f* zmm8_2.d
                
                if (zmm5_1.d f> zmm0_1.d)
                    i_18 = i_5
        
        i_5 += 1
        r10_7 += 4
    while (i_5 s< 0x15)
    
    int32_t rbx_6 = *(arg1 + 0x1ad0)
    int64_t i_15 = 0x14
    zmm0_1 = _mm_cvtps_pd(var_290_1.d.q)
    
    if (rbx_6 s<= 2)
        i_18 = 0x14
    
    uint128_t zmm0_15 = log10(zmm0_1.q)
    zmm1_1.d = (*(arg1 + 0x1abc)).d f- 0.0299999993f
    zmm2_1.d = fconvert.s(zmm0_15.q)
    zmm2_1.d = zmm2_1.d f* 20f
    
    if (not(zmm1_1.d f> zmm2_1.d))
        zmm1_1 = zmm2_1
    
    zmm3_1 = var_2a8
    *(arg1 + 0x1abc) = zmm1_1.d
    zmm1_1.d = zmm1_1.d f- 30f
    zmm0_15.d = 1f f- zmm3_1.d
    zmm0_15.d = zmm0_15.d f* *(arg1 + 0x1ac0)
    *(arg1 + 0x1ac0) = zmm0_15.d
    
    if (not(zmm1_1.d f<= zmm2_1.d))
        zmm0_15.d = zmm0_15.d f+ zmm3_1.d
        *(arg1 + 0x1ac0) = zmm0_15.d
    
    void* const i_6 = &data_1435fd8b4
    int32_t var_228
    int32_t* r8_7 = &var_228
    void var_1435fda48
    void* rcx_22 = &var_1435fda48
    
    do
        zmm2_1 = zmm15_1
        int64_t j_3 = 2
        int64_t j_1
        
        do
            zmm1_1 = *(i_6 + rcx_22 - 4)
            zmm0_15 = *(i_6 + rcx_22)
            i_6 += 0x20
            zmm1_1.d = zmm1_1.d f* *(i_6 - 0x24)
            zmm0_15.d = zmm0_15.d f* *(i_6 - 0x20)
            zmm1_1.d = zmm1_1.d f+ zmm2_1.d
            zmm2_1.d = zmm1_1.d f+ zmm0_15.d
            zmm1_1.d = (*(i_6 + rcx_22 - 0x1c)).d f* *(i_6 - 0x1c)
            zmm0_15.d = (*(i_6 + rcx_22 - 0x18)).d f* *(i_6 - 0x18)
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm1_1.d = (*(i_6 + rcx_22 - 0x14)).d f* *(i_6 - 0x14)
            zmm2_1.d = zmm2_1.d f+ zmm0_15.d
            zmm0_15.d = (*(i_6 + rcx_22 - 0x10)).d f* *(i_6 - 0x10)
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm1_1.d = (*(i_6 + rcx_22 - 0xc)).d f* *(i_6 - 0xc)
            zmm2_1.d = zmm2_1.d f+ zmm0_15.d
            zmm0_15.d = (*(i_6 + rcx_22 - 8)).d f* *(i_6 - 8)
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_15.d
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
        *r8_7 = zmm2_1.d
        r8_7 = &r8_7[1]
        rcx_22 -= 0x40
    while (i_6 s< "wN39")
    
    zmm1_1.d = var_298.d.d f/ 18f
    zmm2_1.d = var_2a0_1.d.d f/ 18f
    var_298.d = zmm1_1.d
    
    if (rbx_6 s< 0xa)
        zmm2_1 = 0x3f000000
    
    zmm1_1.d = var_280_1.d.d f/ 18f
    zmm0_15.d = 1f f- zmm1_1.d
    var_280_1.d = zmm1_1.d
    zmm0_15.d = zmm0_15.d f* zmm2_1.d
    zmm0_15.d = zmm0_15.d f+ zmm1_1.d
    zmm1_1.d = var_2b0_1.d.d f/ 9f
    *(rcx_6 + 0x10) = zmm0_15.d
    zmm0_15.d = (*(arg1 + 0x16cc)).d f* 0.800000012f
    
    if (not(zmm1_1.d f> zmm0_15.d))
        zmm1_1 = zmm0_15
    
    zmm0_15 = var_2c8
    *(arg1 + 0x16cc) = zmm1_1.d
    zmm0_15.d = zmm0_15.d f* 0.015625f
    *(rcx_6 + 8) = zmm0_15.d
    int32_t rax_49 = (*(arg1 + 0x1ac4) + 1) & 0x80000007
    
    if (rax_49 s< 0)
        rax_49 = ((rax_49 - 1) | 0xfffffff8) + 1
    
    *(arg1 + 0x1ad0) += 1
    *(arg1 + 0x1ac4) = rax_49
    zmm8_2 = var_228
    *(rcx_6 + 4) = zmm1_1.d
    zmm0_15.d = zmm8_2.d f+ *(arg1 + 0x1a54)
    zmm0_15.d = zmm0_15.d f* 0.122989997f
    zmm7_1.d = (*(arg1 + 0x1a34)).d f+ *(arg1 + 0x19f4)
    zmm6_1 = *(arg1 + 0x1a74)
    int32_t var_224
    zmm9_1 = var_224
    zmm7_1.d = zmm7_1.d f* 0.491950005f
    zmm1_1.d = zmm6_1.d f* 1.43490005f
    zmm7_1.d = zmm7_1.d f- zmm0_15.d
    float var_220
    zmm10_1 = var_220
    zmm0_15.d = (*(arg1 + 0x1a14)).d f* 0.696929991f
    zmm7_1.d = zmm7_1.d f+ zmm0_15.d
    zmm0_15.d = zmm9_1.d f+ *(arg1 + 0x1a58)
    zmm7_1.d = zmm7_1.d f- zmm1_1.d
    zmm1_1.d = (*(arg1 + 0x1a78)).d f* 1.43490005f
    zmm0_15.d = zmm0_15.d f* 0.122989997f
    int32_t var_2a8_1 = zmm7_1.d
    int32_t var_208 = zmm7_1.d
    zmm7_1.d = (*(arg1 + 0x1a38)).d f+ *(arg1 + 0x19f8)
    zmm7_1.d = zmm7_1.d f* 0.491950005f
    zmm7_1.d = zmm7_1.d f- zmm0_15.d
    zmm0_15.d = (*(arg1 + 0x1a18)).d f* 0.696929991f
    zmm7_1.d = zmm7_1.d f+ zmm0_15.d
    zmm0_15.d = zmm10_1.d f+ *(arg1 + 0x1a5c)
    zmm7_1.d = zmm7_1.d f- zmm1_1.d
    zmm1_1.d = (*(arg1 + 0x1a7c)).d f* 1.43490005f
    zmm0_15.d = zmm0_15.d f* 0.122989997f
    var_290_1.d = zmm7_1.d
    int32_t var_204_1 = zmm7_1.d
    zmm7_1.d = (*(arg1 + 0x19fc)).d f+ *(arg1 + 0x1a3c)
    zmm7_1.d = zmm7_1.d f* 0.491950005f
    zmm7_1.d = zmm7_1.d f- zmm0_15.d
    zmm0_15.d = (*(arg1 + 0x1a1c)).d f* 0.696929991f
    zmm7_1.d = zmm7_1.d f+ zmm0_15.d
    zmm7_1.d = zmm7_1.d f- zmm1_1.d
    zmm1_1.d = (*(arg1 + 0x1a80)).d f* 1.43490005f
    var_2c8 = zmm7_1.d
    int32_t var_200_1 = zmm7_1.d
    zmm7_1.d = (*(arg1 + 0x1a40)).d f+ *(arg1 + 0x1a00)
    zmm7_1.d = zmm7_1.d f* 0.491950005f
    float var_21c
    uint128_t zmm5_2 = var_21c
    zmm0_15.d = zmm5_2.d f+ *(arg1 + 0x1a60)
    zmm0_15.d = zmm0_15.d f* 0.122989997f
    zmm7_1.d = zmm7_1.d f- zmm0_15.d
    zmm0_15.d = (*(arg1 + 0x1a20)).d f* 0.696929991f
    zmm7_1.d = zmm7_1.d f+ zmm0_15.d
    zmm3_1.d = 1f - var_278
    zmm7_1.d = zmm7_1.d f- zmm1_1.d
    int32_t var_2b8_1 = zmm3_1.d
    zmm0_15.d = zmm3_1.d f* zmm6_1.d
    zmm1_1.d = zmm8_2.d f* var_278
    zmm1_1.d = zmm1_1.d f+ zmm0_15.d
    var_2b0_1.d = zmm7_1.d
    int32_t var_1fc_1 = zmm7_1.d
    *(arg1 + 0x1a74) = zmm1_1.d
    zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1a78)
    zmm1_1.d = zmm3_1.d f* *(arg1 + 0x1a7c)
    zmm2_1.d = zmm9_1.d f* var_278
    zmm2_1.d = zmm2_1.d f+ zmm0_15.d
    *(arg1 + 0x1a78) = zmm2_1.d
    zmm0_15.d = zmm10_1.d f* var_278
    zmm1_1.d = zmm1_1.d f+ zmm0_15.d
    zmm2_1.d = zmm5_2.d f* var_278
    zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1a80)
    *(arg1 + 0x1a7c) = zmm1_1.d
    zmm2_1.d = zmm2_1.d f+ zmm0_15.d
    zmm0_15 = zmm8_2
    *(arg1 + 0x1a80) = zmm2_1.d
    zmm7_1 = *(arg1 + 0x1a34)
    zmm3_1 = *(arg1 + 0x1a54)
    zmm12_1 = *(arg1 + 0x19f4)
    zmm10_1 = *(arg1 + 0x19f8)
    zmm8_2 = *(arg1 + 0x1a38)
    zmm5_2 = *(arg1 + 0x1a58)
    zmm11_1 = *(arg1 + 0x19fc)
    zmm6_1 = *(arg1 + 0x1a5c)
    zmm0_15.d = zmm0_15.d f- zmm3_1.d
    zmm0_15.d = zmm0_15.d f* 0.632459998f
    float zmm4_2 = (zmm12_1.d f- zmm7_1.d) * 0.316229999f f+ zmm0_15.d
    zmm12_1.d = zmm12_1.d f+ zmm7_1.d
    zmm7_1 = var_224
    var_2a0_1.d = zmm4_2
    float var_1f8_1 = zmm4_2
    zmm0_15.d = zmm10_1.d f- zmm8_2.d
    zmm4_2 = zmm9_1.d
    zmm0_15.d = zmm0_15.d f* 0.316229999f
    zmm9_1 = *(arg1 + 0x1a3c)
    zmm4_2 = (zmm4_2 f- zmm5_2.d) * 0.632459998f f+ zmm0_15.d
    var_258_1.d = zmm4_2
    float var_1f4_1 = zmm4_2
    zmm0_15.d = zmm11_1.d f- zmm9_1.d
    zmm0_15.d = zmm0_15.d f* 0.316229999f
    zmm4_2 = (var_220 f- zmm6_1.d) * 0.632459998f f+ zmm0_15.d
    zmm0_15.d = (*(arg1 + 0x1a00)).d f- *(arg1 + 0x1a40)
    var_260_1.d = zmm4_2
    float var_1f0_1 = zmm4_2
    zmm0_15.d = zmm0_15.d f* 0.316229999f
    zmm1_1.d = var_228.d f+ zmm3_1.d
    zmm12_1.d = zmm12_1.d f* 0.267259985f
    zmm4_2 = (var_21c f- *(arg1 + 0x1a60)) * 0.632459998f f+ zmm0_15.d
    void* var_268
    var_268.d = zmm4_2
    float var_1ec_1 = zmm4_2
    zmm1_1.d = zmm1_1.d f* 0.53451997f
    zmm0_15.d = (*(arg1 + 0x1a14)).d f* 0.53451997f
    zmm1_1.d = zmm1_1.d f- zmm12_1.d
    zmm1_1.d = zmm1_1.d f- zmm0_15.d
    var_2c0_2.d = zmm1_1.d
    int32_t var_1e8_1 = zmm1_1.d
    zmm1_1.d = zmm7_1.d f+ zmm5_2.d
    zmm0_15.d = (*(arg1 + 0x1a18)).d f* 0.53451997f
    zmm5_2 = var_220
    zmm1_1.d = zmm1_1.d f* 0.53451997f
    zmm10_1.d = zmm10_1.d f+ zmm8_2.d
    zmm10_1.d = zmm10_1.d f* 0.267259985f
    zmm2_1.d = zmm5_2.d f+ zmm6_1.d
    zmm11_1.d = zmm11_1.d f+ zmm9_1.d
    zmm2_1.d = zmm2_1.d f* 0.53451997f
    zmm11_1.d = zmm11_1.d f* 0.267259985f
    zmm1_1.d = zmm1_1.d f- zmm10_1.d
    zmm2_1.d = zmm2_1.d f- zmm11_1.d
    zmm1_1.d = zmm1_1.d f- zmm0_15.d
    zmm0_15.d = (*(arg1 + 0x1a1c)).d f* 0.53451997f
    zmm2_1.d = zmm2_1.d f- zmm0_15.d
    int32_t var_1e4_1 = zmm1_1.d
    int32_t var_1e0_1 = zmm2_1.d
    
    if (*(arg1 + 0x1ad0) s> 5)
        zmm3_1 = var_2b8_1
        zmm0_15 = var_2a8_1
        zmm1_1.d = zmm0_15.d f* var_278
        zmm1_1.d = zmm1_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1a94)
        zmm1_1.d = zmm1_1.d f+ zmm0_15.d
        zmm0_15 = var_290_1.d
        *(arg1 + 0x1a94) = zmm1_1.d
        zmm2_1.d = zmm0_15.d f* var_278
        zmm2_1.d = zmm2_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1a98)
        zmm2_1.d = zmm2_1.d f+ zmm0_15.d
        zmm0_15 = var_2c8
        *(arg1 + 0x1a98) = zmm2_1.d
        zmm1_1.d = zmm0_15.d f* var_278
        zmm1_1.d = zmm1_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1a9c)
        zmm1_1.d = zmm1_1.d f+ zmm0_15.d
        zmm0_15 = var_2b0_1.d
        *(arg1 + 0x1a9c) = zmm1_1.d
        zmm2_1.d = zmm0_15.d f* var_278
        zmm2_1.d = zmm2_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1aa0)
        zmm2_1.d = zmm2_1.d f+ zmm0_15.d
        zmm0_15 = var_2a0_1.d
        *(arg1 + 0x1aa0) = zmm2_1.d
        zmm1_1.d = zmm0_15.d f* var_278
        zmm1_1.d = zmm1_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1aa4)
        zmm1_1.d = zmm1_1.d f+ zmm0_15.d
        zmm0_15 = var_258_1.d
        *(arg1 + 0x1aa4) = zmm1_1.d
        zmm2_1.d = zmm0_15.d f* var_278
        zmm2_1.d = zmm2_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1aa8)
        zmm2_1.d = zmm2_1.d f+ zmm0_15.d
        zmm0_15 = var_260_1.d
        *(arg1 + 0x1aa8) = zmm2_1.d
        zmm1_1.d = zmm0_15.d f* var_278
        zmm1_1.d = zmm1_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1aac)
        zmm1_1.d = zmm1_1.d f+ zmm0_15.d
        zmm0_15 = var_268.d
        *(arg1 + 0x1aac) = zmm1_1.d
        zmm1_1 = var_2c0_2.d
        zmm2_1.d = zmm0_15.d f* var_278
        zmm2_1.d = zmm2_1.d f* zmm0_15.d
        zmm0_15.d = zmm3_1.d f* *(arg1 + 0x1ab0)
        zmm3_1.d = zmm3_1.d f* *(arg1 + 0x1ab4)
        zmm2_1.d = zmm2_1.d f+ zmm0_15.d
        *(arg1 + 0x1ab0) = zmm2_1.d
        zmm0_15.d = zmm1_1.d f* var_278
        zmm0_15.d = zmm0_15.d f* zmm1_1.d
        zmm0_15.d = zmm0_15.d f+ zmm3_1.d
        *(arg1 + 0x1ab4) = zmm0_15.d
    
    zmm0_15 = var_228
    *(arg1 + 0x1a54) = *(arg1 + 0x1a34)
    *(arg1 + 0x1a34) = *(arg1 + 0x1a14)
    *(arg1 + 0x1a14) = *(arg1 + 0x19f4)
    int32_t rax_55 = *(arg1 + 0x1a38)
    *(arg1 + 0x19f4) = zmm0_15.d
    *(arg1 + 0x1a58) = rax_55
    *(arg1 + 0x1a38) = *(arg1 + 0x1a18)
    *(arg1 + 0x1a18) = *(arg1 + 0x19f8)
    int32_t rax_58 = *(arg1 + 0x1a3c)
    *(arg1 + 0x19f8) = zmm7_1.d
    *(arg1 + 0x1a5c) = rax_58
    *(arg1 + 0x1a3c) = *(arg1 + 0x1a1c)
    *(arg1 + 0x1a1c) = *(arg1 + 0x19fc)
    int32_t rax_61 = *(arg1 + 0x1a40)
    *(arg1 + 0x19fc) = zmm5_2.d
    *(arg1 + 0x1a60) = rax_61
    *(arg1 + 0x1a40) = *(arg1 + 0x1a20)
    *(arg1 + 0x1a20) = *(arg1 + 0x1a00)
    int32_t rax_64 = *(arg1 + 0x1a44)
    *(arg1 + 0x1a00) = var_21c.d
    *(arg1 + 0x1a64) = rax_64
    *(arg1 + 0x1a44) = *(arg1 + 0x1a24)
    *(arg1 + 0x1a24) = *(arg1 + 0x1a04)
    int32_t rax_67 = *(arg1 + 0x1a48)
    int32_t var_218
    *(arg1 + 0x1a04) = var_218.d
    *(arg1 + 0x1a68) = rax_67
    *(arg1 + 0x1a48) = *(arg1 + 0x1a28)
    *(arg1 + 0x1a28) = *(arg1 + 0x1a08)
    int32_t rax_70 = *(arg1 + 0x1a4c)
    int32_t var_214
    *(arg1 + 0x1a08) = var_214.d
    *(arg1 + 0x1a6c) = rax_70
    *(arg1 + 0x1a4c) = *(arg1 + 0x1a2c)
    *(arg1 + 0x1a2c) = *(arg1 + 0x1a0c)
    int32_t rax_73 = *(arg1 + 0x1a50)
    int32_t var_210
    *(arg1 + 0x1a0c) = var_210.d
    *(arg1 + 0x1a70) = rax_73
    *(arg1 + 0x1a50) = *(arg1 + 0x1a30)
    int32_t rax_75 = *(arg1 + 0x1a10)
    int32_t var_20c
    *(arg1 + 0x1a10) = var_20c.d
    *(arg1 + 0x1a30) = rax_75
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd((*(arg1 + 0x1a94)).q).q))
    int32_t var_1dc_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1a98))))
    int32_t var_1d8_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1a9c))))
    int32_t var_1d4_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1aa0))))
    int32_t var_1d0_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1aa4))))
    int32_t var_1cc_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1aa8))))
    int32_t var_1c8_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1aac))))
    int32_t var_1c4_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1ab0))))
    int32_t var_1c0_1 = zmm1_1.d
    zmm1_1.d = fconvert.s(sqrt(_mm_cvtps_pd(*(arg1 + 0x1ab4))))
    int32_t var_1bc_1 = zmm1_1.d
    int32_t var_1b8_1 = (*(rcx_6 + 4)).d
    int32_t var_1b0_1 = var_298.d.d
    int32_t var_1b4_1 = (*(rcx_6 + 0x10)).d
    int32_t var_1ac_1 = (*(rcx_6 + 8)).d
    int32_t var_1a8_1 = (*(arg1 + 0x1ac0)).d
    int32_t var_288
    int32_t zmm15_2
    zmm13, zmm14, zmm15_2 = sub_14038ad80(&data_1435fe958, &var_208, &var_288)
    double zmm0_25[0x2] = var_288
    zmm0_25[0].d = zmm0_25[0].d f+ zmm13.d
    zmm0_25[0].d = zmm0_25[0].d f* zmm14.d
    zmm0_25[0].d = zmm0_25[0].d f* 1.21000004f
    zmm0_25[0].d = zmm0_25[0].d f* zmm0_25[0].d
    double temp0_26[0x2] = _mm_cvtps_pd(zmm0_25[0])
    zmm0_25[0].d = zmm0_25[0].d f+ 0.00999999978f
    int32_t var_284
    zmm11.d = var_284.d f* zmm14.d
    uint128_t zmm2_2 = 0x3f733333
    uint128_t zmm1_3
    zmm1_3.d = fconvert.s(pow(temp0_26[0], 0x4024000000000000).q)
    zmm1_3.d = zmm1_3.d f* 0.230000004f
    zmm11.d = zmm11.d f+ zmm14.d
    zmm9.d = zmm13.d f- zmm11.d
    zmm0_25[0].d = zmm0_25[0].d f- zmm1_3.d
    uint128_t zmm0_26
    zmm0_26.d = zmm11.d f* zmm0_25[0].d
    zmm9.d = zmm9.d f* zmm14.d
    zmm9.d = zmm9.d f+ zmm0_26.d
    int32_t var_284_1 = zmm11.d
    zmm11.d = zmm11.d f* 4.99999987e-05f
    var_288 = zmm9.d
    uint128_t zmm3_2
    
    if (zmm9.d f> 0.949999988f)
        zmm3_2 = 0x3f733333
    else if (not(0.0500000007f f<= zmm9.d))
        zmm3_2 = 0x3d4ccccd
    else if (zmm9.d f> 0.949999988f)
        zmm3_2 = 0x3f733333
    else
        zmm3_2 = zmm9
    
    zmm0_26 = *(arg1 + 0x1ab8)
    
    if (not(zmm0_26.d f> 0.949999988f))
        if (not(0.0500000007f f<= zmm0_26.d))
            zmm2_2 = 0x3d4ccccd
        else if (not(zmm0_26.d f> 0.949999988f))
            zmm2_2 = zmm0_26
    
    zmm8.d = zmm3_2.d f- zmm2_2.d
    
    if (not(zmm15_2 f<= zmm8.d))
        zmm8 ^= data_142d3f780
    
    zmm6 = *(arg1 + 0x1ab8)
    zmm8.d = zmm8.d f* 0.0500000007f
    zmm1_3.d = zmm13.d f- zmm2_2.d
    zmm0_26.d = zmm13.d f- zmm3_2.d
    zmm10.d = zmm13.d f- zmm11.d
    zmm1_3.d = zmm1_3.d f* zmm3_2.d
    zmm0_26.d = zmm0_26.d f* zmm2_2.d
    zmm1_3.d = zmm1_3.d f+ zmm0_26.d
    zmm0_26.q = fconvert.d(zmm9.d)
    zmm8.d = zmm8.d f/ zmm1_3.d
    zmm8.d = zmm8.d f+ 0.00999999978f
    zmm1_3.q = fconvert.d(zmm8.d)
    double zmm0_27 = pow(zmm0_26.q, zmm1_3.q)
    zmm1_3.d = zmm13.d f- zmm6[0].d
    zmm7.d = fconvert.s(zmm0_27)
    zmm1_3.d = zmm1_3.d f* zmm11.d
    zmm0_27.d = zmm10.q.d f* zmm6[0].d
    zmm1_3.d = zmm1_3.d f+ zmm0_27.d
    zmm0_27.d = zmm13.q.d f- zmm9.d
    zmm7.d = zmm7.d f* zmm1_3.d
    zmm1_3.q = fconvert.d(zmm8.d)
    double zmm0_28 = pow(fconvert.d(zmm0_27.d), zmm1_3.q)
    zmm1_3.d = zmm13.d f- zmm6[0].d
    zmm2_2.d = fconvert.s(zmm0_28)
    zmm1_3.d = zmm1_3.d f* zmm10.d
    zmm0_28.d = zmm11.q.d f* zmm6[0].d
    zmm6 = 0x1e3ce508
    zmm1_3.d = zmm1_3.d f+ zmm0_28.d
    zmm2_2.d = zmm2_2.d f* zmm1_3.d
    zmm1_3.q = fconvert.d(zmm8.d)
    zmm2_2.d = zmm2_2.d f+ zmm7.d
    zmm7.d = zmm7.d f/ zmm2_2.d
    *(arg1 + 0x1ab8) = zmm7.d
    *(rcx_6 + 0x14) = zmm7.d
    zmm9 = var_288
    zmm0_28.d = zmm13.q.d f- zmm9.d
    double zmm0_29 = pow(fconvert.d(zmm0_28.d), zmm1_3.q)
    zmm1_3.q = fconvert.d(zmm8.d)
    zmm7.d = fconvert.s(zmm0_29)
    zmm2_2.d = fconvert.s(pow(_mm_cvtps_pd(zmm9.q), zmm1_3.q).q)
    
    if (*(arg1 + 0x1ad0) == 1)
        *(arg1 + 0x1ae4) = 0x3f000000
        *(arg1 + 0x1e04) = 0x3f000000
    
    void* rdx_15 = arg1 + 0x1ae4
    void* rax_76 = arg1 + 0x1e04
    void* rcx_23 = arg1 + 0x1aec
    int64_t i_16 = 0x16
    zmm3_2.d = (*(arg1 + 0x1ae8)).d f+ *rdx_15
    uint128_t zmm4_3
    zmm4_3.d = (*(arg1 + 0x1e08)).d f+ *rax_76
    uint128_t zmm0_30
    zmm0_30.d = zmm3_2.d f* zmm10.d
    zmm0_30.d = zmm0_30.d f* zmm7.d
    zmm1_3.d = zmm4_3.d f* zmm10.d
    *rdx_15 = zmm0_30.d
    zmm1_3.d = zmm1_3.d f* zmm2_2.d
    *rax_76 = zmm1_3.d
    int64_t i_7
    
    do
        rcx_23 += 0x24
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0x24)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x2fc)
        *(rcx_23 - 0x28) = zmm0_30.d
        *(rcx_23 + 0x2f8) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0x20)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x300)
        *(rcx_23 - 0x24) = zmm0_30.d
        *(rcx_23 + 0x2fc) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0x1c)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x304)
        *(rcx_23 - 0x20) = zmm0_30.d
        *(rcx_23 + 0x300) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0x18)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x308)
        *(rcx_23 - 0x1c) = zmm0_30.d
        *(rcx_23 + 0x304) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0x14)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x30c)
        *(rcx_23 - 0x18) = zmm0_30.d
        *(rcx_23 + 0x308) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0x10)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x310)
        *(rcx_23 - 0x14) = zmm0_30.d
        *(rcx_23 + 0x30c) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 0xc)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x314)
        *(rcx_23 - 0x10) = zmm0_30.d
        *(rcx_23 + 0x310) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 8)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x318)
        *(rcx_23 - 0xc) = zmm0_30.d
        *(rcx_23 + 0x314) = zmm1_3.d
        zmm0_30.d = zmm7.d f* *(rcx_23 - 4)
        zmm1_3.d = zmm2_2.d f* *(rcx_23 + 0x31c)
        *(rcx_23 - 8) = zmm0_30.d
        *(rcx_23 + 0x318) = zmm1_3.d
        i_7 = i_16
        i_16 -= 1
    while (i_7 != 1)
    zmm4_3.d = zmm4_3.d f* zmm11.d
    zmm3_2.d = zmm3_2.d f* zmm11.d
    int64_t i_14 = 0x14
    zmm4_3.d = zmm4_3.d f* zmm7.d
    zmm3_2.d = zmm3_2.d f* zmm2_2.d
    *(arg1 + 0x1e00) = zmm4_3.d
    *(arg1 + 0x2120) = zmm3_2.d
    int64_t i_8
    
    do
        zmm1_3 = *(rdx_15 + 0x324)
        zmm0_30 = *(rdx_15 + 0x320)
        rdx_15 += 0x28
        zmm0_30.d = zmm0_30.d f+ *(rdx_15 - 0x28)
        zmm1_3.d = zmm1_3.d f+ *(rdx_15 - 0x24)
        zmm0_30.d = zmm0_30.d f+ zmm6[0].d
        zmm6 = zmm1_3
        zmm6[0].d = zmm6[0].d f+ zmm0_30.d
        zmm0_30.d = (*(rdx_15 + 0x300)).d f+ *(rdx_15 - 0x20)
        zmm1_3.d = (*(rdx_15 + 0x304)).d f+ *(rdx_15 - 0x1c)
        zmm6[0].d = zmm6[0].d f+ zmm0_30.d
        zmm0_30.d = (*(rdx_15 + 0x308)).d f+ *(rdx_15 - 0x18)
        zmm6[0].d = zmm6[0].d f+ zmm1_3.d
        zmm1_3.d = (*(rdx_15 + 0x30c)).d f+ *(rdx_15 - 0x14)
        zmm6[0].d = zmm6[0].d f+ zmm0_30.d
        zmm0_30.d = (*(rdx_15 + 0x310)).d f+ *(rdx_15 - 0x10)
        zmm6[0].d = zmm6[0].d f+ zmm1_3.d
        zmm1_3.d = (*(rdx_15 + 0x314)).d f+ *(rdx_15 - 0xc)
        zmm6[0].d = zmm6[0].d f+ zmm0_30.d
        zmm0_30.d = (*(rdx_15 + 0x318)).d f+ *(rdx_15 - 8)
        zmm6[0].d = zmm6[0].d f+ zmm1_3.d
        zmm1_3.d = (*(rdx_15 + 0x31c)).d f+ *(rdx_15 - 4)
        zmm6[0].d = zmm6[0].d f+ zmm0_30.d
        zmm6[0].d = zmm6[0].d f+ zmm1_3.d
        i_8 = i_14
        i_14 -= 1
    while (i_8 != 1)
    zmm2_2.d = zmm13.d f/ zmm6[0].d
    int64_t i_9
    
    do
        rax_76 += 0x28
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x348)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x28)
        *(rax_76 - 0x348) = zmm0_30.d
        *(rax_76 - 0x28) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x344)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x24)
        *(rax_76 - 0x344) = zmm0_30.d
        *(rax_76 - 0x24) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x340)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x20)
        *(rax_76 - 0x340) = zmm0_30.d
        *(rax_76 - 0x20) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x33c)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x1c)
        *(rax_76 - 0x33c) = zmm0_30.d
        *(rax_76 - 0x1c) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x338)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x18)
        *(rax_76 - 0x338) = zmm0_30.d
        *(rax_76 - 0x18) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x334)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x14)
        *(rax_76 - 0x334) = zmm0_30.d
        *(rax_76 - 0x14) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x330)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0x10)
        *(rax_76 - 0x330) = zmm0_30.d
        *(rax_76 - 0x10) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x32c)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 0xc)
        *(rax_76 - 0x32c) = zmm0_30.d
        *(rax_76 - 0xc) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x328)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 8)
        *(rax_76 - 0x328) = zmm0_30.d
        *(rax_76 - 8) = zmm1_3.d
        zmm0_30.d = zmm2_2.d f* *(rax_76 - 0x324)
        zmm1_3.d = zmm2_2.d f* *(rax_76 - 4)
        *(rax_76 - 0x324) = zmm0_30.d
        *(rax_76 - 4) = zmm1_3.d
        i_9 = i_15
        i_15 -= 1
    while (i_9 != 1)
    
    if (var_284_1.d f<= 0.75f)
        if (*(arg1 + 0x2130) == 0)
            __builtin_strncpy(arg1 + 0x2128, "fff?", 4)
        
        if (*(arg1 + 0x212c) == 0)
            *(arg1 + 0x2124) = 0x3dcccccd
    else
        zmm3_2 = *(arg1 + 0x1ab8)
        int32_t rdx_16 = 0x1f4
        
        if (not(_mm_cvtps_pd(zmm3_2.q).q f<= 0.90000000000000002))
            *(arg1 + 0x2130) += 1
            int32_t rcx_24 = *(arg1 + 0x2130)
            zmm4_3 = *(arg1 + 0x2128)
            zmm1_3.d = zmm9.d f- zmm4_3.d
            int32_t rax_77 = 0x1f4
            
            if (rcx_24 s< 0x1f4)
                rax_77 = rcx_24
            
            *(arg1 + 0x2130) = rax_77
            zmm2_2.d = zmm13.d f/ _mm_cvtepi32_ps(zx.o(rcx_24)).d
            zmm0_30 = 0xbe4ccccd
            
            if (not(-0.200000003f f> zmm1_3.d))
                zmm0_30 = zmm1_3
            
            zmm0_30.d = zmm0_30.d f* zmm2_2.d
            zmm0_30.d = zmm0_30.d f+ zmm4_3.d
            *(arg1 + 0x2128) = zmm0_30.d
        
        if (not(0x3fb999999999999a f<= _mm_cvtps_pd(zmm3_2.q).q))
            *(arg1 + 0x212c) += 1
            int32_t rax_78 = *(arg1 + 0x212c)
            zmm1_3 = *(arg1 + 0x2124)
            zmm9.d = zmm9.d f- zmm1_3.d
            
            if (rax_78 s< 0x1f4)
                rdx_16 = rax_78
            
            *(arg1 + 0x212c) = rdx_16
            zmm13.d = zmm13.d f/ _mm_cvtepi32_ps(zx.o(rax_78)).d
            zmm0_30 = 0x3e4ccccd
            
            if (not(zmm9.d f> 0.200000003f))
                zmm0_30 = zmm9
            
            zmm0_30.d = zmm0_30.d f* zmm13.d
            zmm0_30.d = zmm0_30.d f+ zmm1_3.d
            *(arg1 + 0x2124) = zmm0_30.d
    
    result.b = (*(arg1 + 0x1ab8)).d f> zmm14.d
    
    if (*(arg1 + 0x1ac8) != result)
        *(arg1 + 0x1acc) = 0
    
    *(arg1 + 0x1ac8) = result
    *(rcx_6 + 0x18) = i_18
    *rcx_6 = 1
    *(rcx_6 + 0xc) = var_280_1.d.d
    
    if (arg2 != 0)
        *arg2 = *rcx_6
        arg2[1] = *(rcx_6 + 4)
        arg2[2] = *(rcx_6 + 8)
        arg2[3] = *(rcx_6 + 0xc)
        arg2[4] = *(rcx_6 + 0x10)
        arg2[5] = *(rcx_6 + 0x14)
        result = *(rcx_6 + 0x18)
        arg2[6] = result
else
    *(arg1 + 0x1680) = rcx_3

__security_check_cookie(rax_1 ^ &var_2c8)
return result
