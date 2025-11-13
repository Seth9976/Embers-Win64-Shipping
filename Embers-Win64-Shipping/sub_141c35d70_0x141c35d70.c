// 函数: sub_141c35d70
// 地址: 0x141c35d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)

if (arg2 == 0 || arg3 s<= 0)
    *arg1 = 0
    arg1[1] = 0
    return arg1

void*** rax_1 = j_sub_140a82f30(0x38)
uint64_t i = 0
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    *rbx = &data_143204ff8
    rbx[1] = 0
    rbx[2] = 0
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx[2].d))
    *(rbx + 0x1c) = 0x472c4400
    *(rbx + 0x24) = 0
    *(rbx + 0x2c) = 0x3f800000
    *(rbx + 0x34) = 0
    rbx[3].d = 0x43dc0000
    zmm0_1.d = zmm0_1.d f* 0.00997732393f
    rbx[5].d = zmm0_1.d

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

int64_t r15 = sx.q(rbx[2].d)
int32_t rax_3 = (r15 + r12).d
rbx[2].d = rax_3

if (rax_3 s> *(rbx + 0x14))
    sub_1406105e0(&rbx[1])

memset(rbx[1] + (r15 << 2), 0, r12 << 2)
*(rbx + 0x34) = arg2
rbx[4].d = 0
uint128_t zmm0_2
zmm0_2.d = _mm_cvtepi32_ps(zx.o(rbx[2].d)).d f* 0.25f
*(rbx + 0x24) = zmm0_2.d

if (arg2 - 1 u<= 6)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int128_t zmm11
    int128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    int128_t zmm13
    int128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    int128_t zmm15
    int128_t var_d8_1 = zmm15
    uint128_t zmm1
    
    switch (arg2)
        case 1
            if (r12.d s> 0)
                int64_t rbx_2 = 0
                zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12.d)).d
                
                do
                    zmm0_2.d = _mm_cvtepi32_ps(zx.o(i.d)).d f* 6.28318548f
                    zmm0_2.d = zmm0_2.d f* zmm6.d
                    rbx_2 += 4
                    i = zx.q(i.d + 1)
                    *(rbx_2 + rbx[1] - 4) = sinf(zmm0_2.d).d
                while (i.d s< r12.d)
        case 2
            int32_t temp0_5
            int32_t temp1_1
            temp0_5:temp1_1 = sx.q(r12.d)
            int64_t r10_1 = sx.q((temp1_1 - temp0_5) s>> 1)
            zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(r10_1.d)).d
            
            if (r12.d s>= 4)
                int64_t rdx_3 = 2
                int32_t* r8_2 = nullptr
                int32_t rsi_1 = 1 - r10_1.d
                
                do
                    if (rdx_3 - 2 s>= r10_1)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_1 - 2)).d f* zmm1.d
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(i.d)).d f* zmm1.d
                    
                    *(r8_2 + rbx[1]) = zmm0_2.d
                    
                    if (rdx_3 - 1 s>= r10_1)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_1 - 1)).d f* zmm1.d
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_1 + r10_1.d)).d f* zmm1.d
                    
                    *(rbx[1] + r8_2 + 4) = zmm0_2.d
                    
                    if (rdx_3 s>= r10_1)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* zmm1.d
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o((r10_1 + 1).d + rsi_1)).d f* zmm1.d
                    
                    *(r8_2 + rbx[1] + 8) = zmm0_2.d
                    
                    if (rdx_3 + 1 s>= r10_1)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_1 + 1)).d f* zmm1.d
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o((r10_1 + 2).d + rsi_1)).d f* zmm1.d
                    
                    rdx_3 += 4
                    i = zx.q(i.d + 4)
                    rsi_1 += 4
                    *(r8_2 + rbx[1] + 0xc) = zmm0_2.d
                    r8_2 = &r8_2[4]
                while (i.d s< (r12 - 3).d)
            
            if (i.d s< r12.d)
                int64_t rdx_4 = sx.q(i.d)
                
                do
                    if (rdx_4 s>= r10_1)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(not.d(r10_1.d) + i.d)).d f* zmm1.d
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(i.d)).d f* zmm1.d
                    
                    i = zx.q(i.d + 1)
                    *(rbx[1] + (rdx_4 << 2)) = zmm0_2.d
                    rdx_4 += 1
                while (i.d s< r12.d)
        case 3
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r12.d)
            int64_t r14_3 = sx.q((temp3_1 + (temp2_1 & 3)) s>> 2)
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q((r12 * 3).d)
            int64_t r11_2 = sx.q((temp5_1 + (temp4_1 & 3)) s>> 2)
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r12.d)
            float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(r14_3.d)).d
            float zmm3 = -2f f/ _mm_cvtepi32_ps(zx.o((temp7_1 - temp6_1) s>> 1)).d
            
            if (r12.d s>= 4)
                int32_t rsi_2 = 1 - r11_2.d
                int32_t rbx_5 = r11_2.d - r14_3.d
                int64_t rdx_10 = 2
                int32_t* r8_4 = nullptr
                int32_t rcx_10 = rbx_5 - 1
                
                do
                    if (rdx_10 - 2 s< r14_3)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(i.d)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    else if (rdx_10 - 2 s>= r11_2)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_2 - 1)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rcx_10 + rsi_2)).d f* zmm3
                        zmm0_2.d = zmm0_2.d f+ 1f
                    
                    *(r8_4 + rbx[1]) = zmm0_2.d
                    
                    if (rdx_10 - 1 s< r14_3)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_2 + r11_2.d)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    else if (rdx_10 - 1 s>= r11_2)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_2)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rbx_5 + rsi_2)).d f* zmm3
                        zmm0_2.d = zmm0_2.d f+ 1f
                    
                    *(rbx[1] + r8_4 + 4) = zmm0_2.d
                    
                    if (rdx_10 s>= r14_3)
                        if (rdx_10 s>= r11_2)
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_2 + 1)).d f* zmm2
                            zmm0_2.d = zmm0_2.d f- 1f
                        else
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rbx_5 + 1 + rsi_2)).d f* zmm3
                            zmm0_2.d = zmm0_2.d f+ 1f
                        
                        *(r8_4 + rbx[1] + 8) = zmm0_2.d
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o((r11_2 + 1).d + rsi_2)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                        *(rbx[1] + r8_4 + 8) = zmm0_2.d
                    
                    if (rdx_10 + 1 s< r14_3)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o((r11_2 + 2).d + rsi_2)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    else if (rdx_10 + 1 s>= r11_2)
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_2 + 2)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rsi_2 + rbx_5 + 2)).d f* zmm3
                        zmm0_2.d = zmm0_2.d f+ 1f
                    
                    rdx_10 += 4
                    i = zx.q(i.d + 4)
                    rsi_2 += 4
                    *(r8_4 + rbx[1] + 0xc) = zmm0_2.d
                    r8_4 = &r8_4[4]
                    rcx_10 = rbx_5 - 1
                while (i.d s< (r12 - 3).d)
                
                r12 = zx.q(arg3)
                r14_3 = zx.q(r14_3.d)
            
            if (i.d s< r12.d)
                int64_t rdx_11 = sx.q(i.d)
                
                do
                    if (rdx_11 s>= sx.q(r14_3.d))
                        int32_t rax_59 = i.d - r11_2.d
                        
                        if (rdx_11 s>= r11_2)
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_59)).d f* zmm2
                            zmm0_2.d = zmm0_2.d f- 1f
                        else
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_59 + r11_2.d - r14_3.d)).d f* zmm3
                            zmm0_2.d = zmm0_2.d f+ 1f
                    else
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(i.d)).d f* zmm2
                        zmm0_2.d = zmm0_2.d f- 1f
                    
                    i = zx.q(i.d + 1)
                    *(rbx[1] + (rdx_11 << 2)) = zmm0_2.d
                    rdx_11 += 1
                while (i.d s< r12.d)
        case 4
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r12.d)
            int64_t r10_3 = sx.q((temp9_1 - temp8_1) s>> 1)
            
            if (r12 s>= 4)
                int64_t rdx_13 = 2
                
                do
                    int64_t rcx_17 = rbx[1]
                    
                    if (i s>= r10_3)
                        *(rcx_17 + (i << 2)) = 0xbf800000
                    else
                        *(rcx_17 + (i << 2)) = 0x3f800000
                    
                    int64_t rcx_18 = rbx[1]
                    
                    if (rdx_13 - 1 s>= r10_3)
                        *(rcx_18 + (i << 2) + 4) = 0xbf800000
                    else
                        *(rcx_18 + (i << 2) + 4) = 0x3f800000
                    
                    int64_t rcx_19 = rbx[1]
                    
                    if (rdx_13 s>= r10_3)
                        *(rcx_19 + (i << 2) + 8) = 0xbf800000
                    else
                        *(rcx_19 + (i << 2) + 8) = 0x3f800000
                    
                    int64_t rcx_20 = rbx[1]
                    
                    if (rdx_13 + 1 s>= r10_3)
                        *(rcx_20 + (i << 2) + 0xc) = 0xbf800000
                    else
                        *(rcx_20 + (i << 2) + 0xc) = 0x3f800000
                    
                    i += 4
                    rdx_13 += 4
                while (i s< r12 - 3)
            
            for (; i s< r12; i += 1)
                int64_t rcx_21 = rbx[1]
                
                if (i s>= r10_3)
                    *(rcx_21 + (i << 2)) = 0xbf800000
                else
                    *(rcx_21 + (i << 2)) = 0x3f800000
        case 5
            zmm9 = zx.o(0)
            int32_t i_1 = 0
            
            if (r12.d s> 0)
                int32_t* rsi_3 = nullptr
                zmm8.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12.d)).d
                
                do
                    zmm6 = _mm_cvtepi32_ps(zx.o(i_1))
                    *(rsi_3 + rbx[1]) = 0
                    zmm6.d = zmm6.d f* 6.28318548f
                    float* rbx_6 = rbx[1]
                    zmm0_2.d = zmm8.d f* zmm6.d
                    *(rbx_6 + rsi_3) = sinf(zmm0_2.d) f+ *(rbx_6 + rsi_3)
                    uint128_t* rbx_7 = rbx[1]
                    float zmm0_4 = sinf((zmm6.d f+ zmm6.d) f* zmm8.d)
                    zmm1.d = (*(rbx_7 + rsi_3)).d f- zmm0_4 * 0.5f
                    *(rbx_7 + rsi_3) = zmm1.d
                    float* rbx_8 = rbx[1]
                    *(rbx_8 + rsi_3) =
                        sinf(zmm6.d * 3f f* zmm8.d) * 0.333333343f f+ *(rbx_8 + rsi_3)
                    uint128_t* rbx_9 = rbx[1]
                    float zmm0_6 = sinf(zmm6.d * 4f f* zmm8.d)
                    zmm1.d = (*(rbx_9 + rsi_3)).d f- zmm0_6 * 0.25f
                    *(rbx_9 + rsi_3) = zmm1.d
                    float* rbx_10 = rbx[1]
                    float zmm0_7 = sinf(zmm6.d * 5f f* zmm8.d) * 0.200000003f
                    zmm6.d = zmm6.d f* 6f
                    zmm6.d = zmm6.d f* zmm8.d
                    *(rbx_10 + rsi_3) = zmm0_7 f+ *(rbx_10 + rsi_3)
                    int32_t* rbx_11 = rbx[1]
                    zmm0_2.d = sinf(zmm6.d).d f* 0.166666672f
                    i_1 += 1
                    zmm1.d = (*(rbx_11 + rsi_3)).d f- zmm0_2.d
                    *(rbx_11 + rsi_3) = zmm1.d
                    zmm0_2 = *(rbx[1] + rsi_3)
                    rsi_3 = &rsi_3[1]
                    zmm9 = _mm_max_ss(zmm0_2.d, zmm9.d)
                while (i_1 s< r12.d)
            
            if (r12 s>= 4)
                zmm1.d = 1f f/ zmm9.d
                
                do
                    int64_t rcx_24 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_24 + (i << 2))
                    *(rcx_24 + (i << 2)) = zmm0_2.d
                    int64_t rcx_25 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_25 + (i << 2) + 4)
                    *(rcx_25 + (i << 2) + 4) = zmm0_2.d
                    int64_t rcx_26 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_26 + (i << 2) + 8)
                    *(rcx_26 + (i << 2) + 8) = zmm0_2.d
                    int64_t rcx_27 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_27 + (i << 2) + 0xc)
                    *(rcx_27 + (i << 2) + 0xc) = zmm0_2.d
                    i += 4
                while (i s< r12 - 3)
            
            if (i s< r12)
                zmm7.d = 1f f/ zmm9.d
                
                do
                    int64_t rcx_28 = rbx[1]
                    zmm0_2.d = zmm7.d f* *(rcx_28 + (i << 2))
                    *(rcx_28 + (i << 2)) = zmm0_2.d
                    i += 1
                while (i s< r12)
        case 6
            int32_t i_2 = 0
            int32_t i_4 = 0
            zmm14 = zx.o(0)
            
            if (r12.d s> 0)
                int32_t* r15_2 = nullptr
                zmm11.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12.d)).d
                
                do
                    int32_t j = 1
                    uint128_t zmm10 = _mm_cvtepi32_ps(zx.o(i_2))
                    *(r15_2 + rbx[1]) = 0
                    
                    do
                        zmm8.d = float.s(j)
                        int32_t* rbx_12 = rbx[1]
                        zmm0_2.d = zmm8.d f+ zmm8.d
                        zmm7 = zmm0_2
                        zmm0_2.d = zmm0_2.d f+ 1f
                        zmm7.d = zmm7.d f+ 1f
                        zmm0_2.d = zmm0_2.d f* 6.28318548f
                        zmm0_2.d = zmm0_2.d f* zmm10.d
                        zmm0_2.d = zmm0_2.d f* zmm11.d
                        zmm7.d = zmm7.d f* zmm7.d
                        zmm6.d = sinf(zmm0_2.d).d f/ zmm7.d
                        j += 1
                        zmm6.d = zmm6.d f* powf(0xbf800000.d, zmm8.d).d
                        zmm6.d = zmm6.d f+ *(rbx_12 + r15_2)
                        *(rbx_12 + r15_2) = zmm6.d
                    while (j s<= 6)
                    
                    i_2 = i_4 + 1
                    i_4 = i_2
                    zmm0_2 = *(rbx[1] + r15_2)
                    r15_2 = &r15_2[1]
                    zmm14 = _mm_max_ss(zmm0_2.d, zmm14.d)
                while (i_2 s< r12.d)
            
            if (r12 s>= 4)
                zmm1.d = 1f f/ zmm14.d
                
                do
                    int64_t rcx_31 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_31 + (i << 2))
                    *(rcx_31 + (i << 2)) = zmm0_2.d
                    int64_t rcx_32 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_32 + (i << 2) + 4)
                    *(rcx_32 + (i << 2) + 4) = zmm0_2.d
                    int64_t rcx_33 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_33 + (i << 2) + 8)
                    *(rcx_33 + (i << 2) + 8) = zmm0_2.d
                    int64_t rcx_34 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_34 + (i << 2) + 0xc)
                    *(rcx_34 + (i << 2) + 0xc) = zmm0_2.d
                    i += 4
                while (i s< r12 - 3)
            
            if (i s< r12)
                zmm9.d = 1f f/ zmm14.d
                
                do
                    int64_t rcx_35 = rbx[1]
                    zmm0_2.d = zmm9.d f* *(rcx_35 + (i << 2))
                    *(rcx_35 + (i << 2)) = zmm0_2.d
                    i += 1
                while (i s< r12)
        case 7
            zmm9 = zx.o(0)
            int32_t i_3 = 0
            
            if (r12.d s> 0)
                int32_t* rsi_4 = nullptr
                zmm8.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12.d)).d
                
                do
                    zmm6 = _mm_cvtepi32_ps(zx.o(i_3))
                    *(rsi_4 + rbx[1]) = 0
                    zmm6.d = zmm6.d f* 6.28318548f
                    float* rbx_13 = rbx[1]
                    zmm0_2.d = zmm8.d f* zmm6.d
                    *(rbx_13 + rsi_4) = sinf(zmm0_2.d) f+ *(rbx_13 + rsi_4)
                    float* rbx_14 = rbx[1]
                    *(rbx_14 + rsi_4) =
                        sinf((zmm6.d f+ zmm6.d) f* zmm8.d) * 0.5f f+ *(rbx_14 + rsi_4)
                    float* rbx_15 = rbx[1]
                    *(rbx_15 + rsi_4) =
                        sinf(zmm6.d * 3f f* zmm8.d) * 0.333333343f f+ *(rbx_15 + rsi_4)
                    float* rbx_16 = rbx[1]
                    *(rbx_16 + rsi_4) = sinf(zmm6.d * 4f f* zmm8.d) * 0.25f f+ *(rbx_16 + rsi_4)
                    float* rbx_17 = rbx[1]
                    float zmm0_13 = sinf(zmm6.d * 5f f* zmm8.d) * 0.200000003f
                    zmm6.d = zmm6.d f* 6f
                    zmm6.d = zmm6.d f* zmm8.d
                    *(rbx_17 + rsi_4) = zmm0_13 f+ *(rbx_17 + rsi_4)
                    int32_t* rbx_18 = rbx[1]
                    zmm0_2.d = sinf(zmm6.d).d f* 0.166666672f
                    i_3 += 1
                    zmm0_2.d = zmm0_2.d f+ *(rbx_18 + rsi_4)
                    *(rbx_18 + rsi_4) = zmm0_2.d
                    zmm0_2 = *(rbx[1] + rsi_4)
                    rsi_4 = &rsi_4[1]
                    zmm9 = _mm_max_ss(zmm0_2.d, zmm9.d)
                while (i_3 s< r12.d)
            
            if (r12 s>= 4)
                zmm1.d = 1f f/ zmm9.d
                
                do
                    int64_t rcx_38 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_38 + (i << 2))
                    *(rcx_38 + (i << 2)) = zmm0_2.d
                    int64_t rcx_39 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_39 + (i << 2) + 4)
                    *(rcx_39 + (i << 2) + 4) = zmm0_2.d
                    int64_t rcx_40 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_40 + (i << 2) + 8)
                    *(rcx_40 + (i << 2) + 8) = zmm0_2.d
                    int64_t rcx_41 = rbx[1]
                    zmm0_2.d = zmm1.d f* *(rcx_41 + (i << 2) + 0xc)
                    *(rcx_41 + (i << 2) + 0xc) = zmm0_2.d
                    i += 4
                while (i s< r12 - 3)
            
            if (i s< r12)
                zmm7.d = 1f f/ zmm9.d
                
                do
                    int64_t rcx_42 = rbx[1]
                    zmm0_2.d = zmm7.d f* *(rcx_42 + (i << 2))
                    *(rcx_42 + (i << 2)) = zmm0_2.d
                    i += 1
                while (i s< r12)

*arg1 = rbx
arg1[1] = rax_2
return arg1
