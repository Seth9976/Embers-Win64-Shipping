// 函数: sub_1408bc6b0
// 地址: 0x1408bc6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* r13 = arg2
int64_t r8 = sx.q(data_143982b28)
int64_t* r12_2 = sx.q(arg3) * 0x50 + *(arg1 + 0xc0)
char rax_1 = r12_2[7].b
void* rdx = *r12_2
int128_t zmm14 = *(r12_2 + 0x3c)
int32_t rax_2 = r12_2[6].d
int32_t rax_3 = *(rdx + 0xd638)
void* r15_1

if (rax_3 s<= 0 || r8.d s< 0 || r8.d s>= rax_3)
label_1408bc757:
    r15_1 = rdx
else
    int64_t r9_1 = *(rdx + 0xd630)
    int64_t rcx = r8
    r15_1 = *(r9_1 + (r8 << 3))
    int64_t* rax_4 = r9_1 + (r8 << 3)
    
    if (r15_1 == 0)
        while (*rax_4 == 0)
            r8 = zx.q(r8.d - 1)
            rax_4 -= 8
            int64_t temp0_1 = rcx
            rcx -= 1
            
            if (temp0_1 - 1 s< 0)
                goto label_1408bc757
        
        r15_1 = *(r9_1 + (sx.q(r8.d) << 3))

void* result
void* result_1

if (r12_2[5].d s<= 0)
label_1408bc897:
    void*** rax_14 = data_143ceb928
    
    if (rax_14 == 0)
        rax_14 = j_sub_140a82f30(zx.q((&rax_14[6]).d))
        
        if (rax_14 != 0)
            rax_14, arg4 = sub_1408b9380(rax_14)
        
        data_143ceb928 = rax_14
    
    result = sub_1408bd750(rax_14, *(arg1 + 0x2a0), *(arg1 + 0x1c8))
    result_1 = result
    
    if (result != 0)
        int64_t rbx_3 = sx.q(r12_2[3].d)
        int32_t rax_15 = (rbx_3 + 1).d
        r12_2[3].d = rax_15
        
        if (rax_15 s> *(r12_2 + 0x1c))
            sub_140638870(&r12_2[2])
        
        *(r12_2[2] + (rbx_3 << 3)) = result_1
        goto label_1408bc90a
else
    int64_t rdx_1 = sx.q(r12_2[5].d)
    int64_t rbx_1 = sx.q(*(r12_2[4] + (rdx_1 << 2) - 4))
    r12_2[5].d = (rdx_1 - 1).d
    sub_1405dac90(&r12_2[4])
    
    if (rbx_1.d s>= r12_2[3].d)
        goto label_1408bc897
    
    result_1 = *(r12_2[2] + (rbx_1 << 3))
    int64_t* arg_20
    
    if (result_1 == 0 || *(result_1 + 0x282) == 0)
        r12_2[5].d = 0
        
        if (*(r12_2 + 0x2c) != 0)
            sub_1405dadb0(&r12_2[4], 0)
        
        int32_t i = 0
        
        if (r12_2[3].d s> 0)
            int64_t* rdx_2 = nullptr
            arg_20 = nullptr
            
            do
                if (*(*(rdx_2 + r12_2[2]) + 0x282) != 0)
                    int64_t r13_1 = sx.q(r12_2[5].d)
                    int32_t rax_9 = (r13_1 + 1).d
                    r12_2[5].d = rax_9
                    
                    if (rax_9 s> *(r12_2 + 0x2c))
                        sub_1405a4cf0(&r12_2[4])
                        rdx_2 = arg_20
                    
                    *(r12_2[4] + (r13_1 << 2)) = i
                
                rdx_2 = &rdx_2[1]
                i += 1
                arg_20 = rdx_2
            while (i s< r12_2[3].d)
            
            r13 = arg2
        
        if (r12_2[5].d s> 0)
            int64_t r8_1 = sx.q(r12_2[5].d)
            int64_t rbx_2 = sx.q(*(r12_2[4] + (r8_1 << 2) - 4))
            r12_2[5].d = (r8_1 - 1).d
            sub_1405dac90(&r12_2[4])
            result_1 = *(r12_2[2] + (rbx_2 << 3))
        
        if (result_1 != 0)
            goto label_1408bc90a
        
        goto label_1408bc897
    
label_1408bc90a:
    *(result_1 + 0x282) = 0
    *(result_1 + 0xe4) = *(r15_1 + 0x34)
    *(result_1 + 0xe5) = *(r15_1 + 0x27ed)
    *(result_1 + 0xe6) = *(r15_1 + 0x9ec8)
    uint128_t zmm0_1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0xf8) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0xfc) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x100) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x104) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x108) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x12c) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x130) = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x110) = zmm0_1.d
    sub_1408c1a00(result_1 + 0x114)
    uint128_t zmm0_2
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x124) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x128) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x134) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x10c) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x138) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x13c) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x140) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x144) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x148) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x14c) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x1d8) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x1dc) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x154) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x150) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x158) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x15c) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x160) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x164) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x16c) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x170) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x174) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x198) = zmm0_2.d
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    *(result_1 + 0x19c) = zmm0_2.d
    int64_t rbx_4 = sx.q(*(result_1 + 0x190))
    int32_t rax_51 = *(r15_1 + 0x9ec0)
    
    if (rax_51 s> rbx_4.d)
        *(result_1 + 0x190) = rax_51
        
        if (rax_51 s> *(result_1 + 0x194))
            sub_1406105e0(result_1 + 0x188)
        
        memset(*(result_1 + 0x188) + (rbx_4 << 2), 0, sx.q(rax_51 - rbx_4.d) << 2)
    else if (rax_51 s< rbx_4.d && rax_51 != rbx_4.d)
        *(result_1 + 0x190) = rax_51
        sub_1405dac90(result_1 + 0x188)
    
    int32_t i_1 = 0
    
    if (*(result_1 + 0x190) s> 0)
        int64_t rbx_5 = 0
        
        do
            i_1 += 1
            rbx_5 += 4
            zmm0_2 = zx.o(rand())
            int64_t rax_55 = *(result_1 + 0x188)
            zmm0_2.d = _mm_cvtepi32_ps(zmm0_2).d f* 3.05185094e-05f
            *(rbx_5 + rax_55 - 4) = zmm0_2.d
        while (i_1 s< *(result_1 + 0x190))
    
    int32_t rax_56 = *(r15_1 + 0x9eb0)
    int64_t rbx_6 = sx.q(*(result_1 + 0x180))
    
    if (rax_56 s> rbx_6.d)
        *(result_1 + 0x180) = rax_56
        
        if (rax_56 s> *(result_1 + 0x184))
            sub_1406105e0(result_1 + 0x178)
        
        memset(*(result_1 + 0x178) + (rbx_6 << 2), 0, sx.q(rax_56 - rbx_6.d) << 2)
    else if (rax_56 s< rbx_6.d && rax_56 != rbx_6.d)
        *(result_1 + 0x180) = rax_56
        sub_1405dac90(result_1 + 0x178)
    
    int32_t i_2 = 0
    
    if (*(result_1 + 0x180) s> 0)
        int64_t rbx_7 = 0
        
        do
            i_2 += 1
            rbx_7 += 4
            zmm0_2 = zx.o(rand())
            int64_t rax_59 = *(result_1 + 0x178)
            zmm0_2.d = _mm_cvtepi32_ps(zmm0_2).d f* 3.05185094e-05f
            *(rbx_7 + rax_59 - 4) = zmm0_2.d
        while (i_2 s< *(result_1 + 0x180))
    
    int32_t zmm0_3 =
        sub_1408bf070(r15_1 + 0x27f0, zx.o(0), zx.o(0), *(arg1 + 0x54), (*(result_1 + 0x134)).d)
    int32_t var_178_2 = (*(result_1 + 0x10c)).d
    *(result_1 + 0xd0) = zmm0_3
    int32_t zmm0_4 = sub_1408bf070(r15_1 + 0x3fa8, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_2)
    int32_t var_178_3 = (*(result_1 + 0x148)).d
    *(result_1 + 0xd8) = zmm0_4
    int32_t zmm0_5 = sub_1408bf070(r15_1 + 0x6f28, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_3)
    int32_t var_178_4 = (*(result_1 + 0x14c)).d
    *(result_1 + 0x1b0) = zmm0_5
    *(result_1 + 0x1b4) = sub_1408bf070(r15_1 + 0x7710, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_4)
    uint128_t zmm0_7
    int32_t zmm10_1
    zmm0_7, zmm10_1 =
        sub_1408bf070(r15_1 + 0xbe78, zx.o(0), zx.o(0), *(arg1 + 0x54), (*(arg1 + 0x160)).d)
    *(result_1 + 0x1b8) = zmm0_7.d
    zmm0_7.d = _mm_cvtepi32_ps(zx.o(rand())).d f* zmm10_1
    *(result_1 + 0x168) = zmm0_7.d
    int32_t zmm0_8 =
        sub_1408bf070(r15_1 + 0xc660, zx.o(0), zx.o(0), *(arg1 + 0x54), (*(arg1 + 0x164)).d)
    int32_t var_178_7 = (*(result_1 + 0x144)).d
    *(result_1 + 0x1bc) = zmm0_8
    int32_t zmm0_9 = sub_1408bf070(r15_1 + 0x6740, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_7)
    int32_t var_178_8 = (*(result_1 + 0x15c)).d
    *(result_1 + 0x1c0) = zmm0_9
    int32_t zmm0_10 = sub_1408bf070(r15_1 + 0xaea8, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_8)
    int32_t var_178_9 = (*(result_1 + 0x158)).d
    *(result_1 + 0xdc) = zmm0_10
    int32_t zmm0_11 = sub_1408bf070(r15_1 + 0xb690, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_9)
    int32_t var_178_10 = (*(result_1 + 0x154)).d
    *(result_1 + 0xe0) = zmm0_11
    int32_t zmm0_12 = sub_1408bf070(r15_1 + 0xa6c0, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_10)
    int32_t var_178_11 = (*(result_1 + 0x150)).d
    *(result_1 + 0x60) = zmm0_12
    int32_t zmm0_13 = sub_1408bf070(r15_1 + 0x9ed0, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_11)
    int32_t var_178_12 = (*(result_1 + 0x1dc)).d
    *(result_1 + 0x5c) = zmm0_13
    int32_t zmm0_14 = sub_1408bf070(r15_1 + 0x86e0, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_12)
    int32_t var_178_13 = (*(result_1 + 0x174)).d
    *(result_1 + 0x1d4) = zmm0_14
    int32_t zmm0_15
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    zmm0_15, zmm6_1, zmm7_1, zmm8_1 =
        sub_1408bf070(r15_1 + 0x1010, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_13)
    *(result_1 + 0xd4) = zmm0_15
    
    if (*(arg1 + 0x280) != 0)
        void* rax_61 = *(arg1 + 0x270)
        
        if (rax_61 != 0 && *(rax_61 + 0x27ec) != 0)
            uint128_t zmm1_13
            zmm1_13.d = (*(arg1 + 0x6c)).d f* 57.2957764f
            zmm1_13.d = zmm1_13.d f+ zmm0_15
            *(result_1 + 0xd4) = zmm1_13.d
    
    int128_t zmm0_16 =
        sub_1408bf070(r15_1 + 0x5f58, zx.o(0), zx.o(0), *(arg1 + 0x54), *(result_1 + 0x140))
    void** const var_168
    int32_t* rax_62
    float zmm9
    float zmm10_2
    rax_62, zmm9, zmm10_2 = sub_1408bf210(r15_1 + 0x5770, &arg_20, zx.o(0), zx.o(0), 
        (*(arg1 + 0x54)).d, (*(result_1 + 0x138)).d, var_168.d)
    *(result_1 + 0x1a0) = *rax_62
    float zmm3_15[0x4] = *(r13 + 4)
    uint128_t zmm1_15 = *r13
    zmm3_15[0] = zmm3_15[0] * 0.5f
    zmm1_15.d = zmm1_15.d f* 0.5f
    zmm3_15[0] = zmm3_15[0] f* *(r13 + 0x24)
    uint128_t zmm2_15
    zmm2_15.d = zmm3_15.d f* *(r13 + 0x28)
    uint128_t zmm0_17
    zmm0_17.d = zmm1_15.d f* r13[2].d
    zmm1_15.d = zmm1_15.d f* *(r13 + 0x1c)
    zmm2_15.d = zmm2_15.d f+ zmm0_17.d
    zmm3_15[0] = zmm3_15[0] f+ zmm1_15.d
    zmm2_15.d = zmm2_15.d f+ r13[3].d
    zmm3_15[0] = zmm3_15[0] f+ *(r13 + 0x2c)
    *(result_1 + 0x290) = zmm2_15.d
    *(result_1 + 0x28c) = zmm3_15[0]
    char rax_63 = *(arg1 + 0xe5)
    uint128_t zmm4_1
    float zmm5_1
    float zmm8_2
    
    if (rax_63 == 0)
        int128_t zmm0_18
        int32_t zmm6_3
        float zmm7_3[0x4]
        int512_t zmm8_3
        zmm0_18, zmm6_3, zmm7_3, zmm8_3 =
            sub_1408bf070(r15_1 + 0x1810, zx.o(0), zx.o(0), *(arg1 + 0x54), *(result_1 + 0x198))
        zmm8_3.o = zmm0_18
        zmm0_17, zmm8_2, zmm9, zmm10_2 =
            sub_1408bf070(r15_1 + 0x1ff8, zx.o(0), zx.o(0), zmm7_3, zmm6_3)
        zmm5_1 = *(arg1 + 0x58)
        zmm4_1 = zmm0_17
        zmm0_17.d = 1f f/ *(r13 + 8)
        zmm1_15.d = (*(arg1 + 0x290)).d f- *(result_1 + 0x290)
        zmm2_15.d = (*(arg1 + 0x28c)).d f- *(result_1 + 0x28c)
        zmm3_15 = zmm0_17
        zmm4_1.d = zmm4_1.d f* zmm5_1
        zmm3_15[0] = zmm3_15[0] f* zmm1_15.d
        zmm0_17.d = zmm0_17.d f* zmm2_15.d
        zmm3_15[0] = zmm3_15[0] f+ *(arg1 + 0x34)
        zmm0_17.d = zmm0_17.d f+ *(arg1 + 0x30)
        zmm3_15[0] = zmm3_15[0] f+ zmm4_1.d
        *(result_1 + 0x288) = zmm3_15[0]
        *(result_1 + 0x284) = zmm5_1 * zmm8_2 f+ zmm0_17.d
    else if (rax_63 == 1)
        int128_t zmm0_19
        int32_t zmm6_4
        float zmm7_4[0x4]
        int512_t zmm8_4
        zmm0_19, zmm6_4, zmm7_4, zmm8_4 =
            sub_1408bf070(r15_1 + 0x1810, zx.o(0), zx.o(0), *(arg1 + 0x54), *(result_1 + 0x198))
        zmm8_4.o = zmm0_19
        zmm0_17, zmm8_2, zmm9, zmm10_2 =
            sub_1408bf070(r15_1 + 0x1ff8, zx.o(0), zx.o(0), zmm7_4, zmm6_4)
        zmm0_17.d = zmm0_17.d f* *(arg1 + 0x58)
        zmm0_17.d = zmm0_17.d f+ *(arg1 + 0x34)
        zmm8_2 = zmm8_2 f* *(arg1 + 0x58) f+ *(arg1 + 0x30)
        *(result_1 + 0x288) = zmm0_17.d
        *(result_1 + 0x284) = zmm8_2
    
    zmm4_1.d = (*(result_1 + 0xd4)).d f* 0.0174532924f
    zmm0_17.d = zmm4_1.d f* 0.159154937f
    
    if (zmm4_1.d f< zmm9)
        zmm0_17.d = zmm0_17.d f- 0.5f
    else
        zmm0_17.d = zmm0_17.d f+ 0.5f
    
    zmm0_17.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_17.d))).d f* 6.28318548f
    zmm4_1.d = zmm4_1.d f- zmm0_17.d
    
    if (not(zmm4_1.d f<= 1.57079637f))
        zmm5_1 = -1f
        zmm0_17.d = 3.14159274f f- zmm4_1.d
        zmm4_1 = zmm0_17
    else if (zmm4_1.d f>= -1.57079637f)
        zmm5_1 = 1f
    else
        zmm5_1 = -1f
        zmm0_17.d = -3.14159274f f- zmm4_1.d
        zmm4_1 = zmm0_17
    
    zmm3_15 = 0x37cfb4c2
    char var_e8
    char var_e8_1 = var_e8 & 0xfc
    var_168 = &data_142d8ad18
    zmm2_15.d = zmm4_1.d f* zmm4_1.d
    int64_t var_150_1 = 0
    char var_138_1 = 0
    zmm0_17.d = zmm2_15.d f* 2.60516146e-07f
    char var_100_1 = 0
    int32_t var_fc_1 = 3
    zmm3_15[0] = 2.47604949e-05f f- zmm0_17.d
    zmm0_17.d = zmm2_15.d f* 2.3889859e-08f
    zmm1_15.d = 2.75255616e-06f f- zmm0_17.d
    zmm3_15[0] = zmm3_15[0] f* zmm2_15.d
    uint128_t var_160_1 = data_142e05200
    zmm3_15[0] = zmm3_15[0] - 0.00138883782f
    zmm1_15.d = zmm1_15.d f* zmm2_15.d
    zmm1_15.d = zmm1_15.d f- 0.000198408743f
    zmm3_15[0] = zmm3_15[0] f* zmm2_15.d
    zmm3_15[0] = zmm3_15[0] + 0.0416666381f
    zmm1_15.d = zmm1_15.d f* zmm2_15.d
    zmm1_15.d = zmm1_15.d f+ 0.00833333097f
    zmm3_15[0] = zmm3_15[0] f* zmm2_15.d
    zmm1_15.d = zmm1_15.d f* zmm2_15.d
    zmm3_15[0] = zmm3_15[0] - 0.5f
    zmm1_15.d = zmm1_15.d f- 0.166666672f
    zmm3_15[0] = zmm3_15[0] f* zmm2_15.d
    zmm1_15.d = zmm1_15.d f* zmm2_15.d
    zmm3_15[0] = zmm3_15[0] + 1f
    zmm1_15.d = zmm1_15.d f+ 1f
    zmm3_15[0] = zmm3_15[0] * zmm5_1
    zmm1_15.d = zmm1_15.d f* zmm4_1.d
    zmm3_15[0] = zmm3_15[0] f* zmm0_16.d
    zmm1_15.d = zmm1_15.d f* zmm0_16.d
    *(result_1 + 0xe8) = zmm3_15[0]
    *(result_1 + 0xec) = zmm1_15.d
    zmm0_17 = data_14399f5c0
    int128_t var_130
    __builtin_memset(&var_130, 0, 0x20)
    zmm1_15 = zx.o(data_143dbb1f0)
    uint128_t var_148_1 = zmm0_17
    arg_20 = zmm1_15.q
    zmm0_17 = arg_20:4.d
    int32_t var_104_1 = zmm0_17.d
    int32_t var_10c_1 = zmm0_17.d
    int128_t var_f8_1 = zx.o(0)
    int32_t var_108_1 = zmm1_15.d
    int32_t var_110_1 = zmm1_15.d
    sub_140693270(result_1 + 0x1e0, &var_168)
    int64_t* rbx_8 = var_f8_1:8.q
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp3_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rbx_9 = var_130:8.q
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp4_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    *(result_1 + 0x24c) = 3
    int64_t* rbx_10
    
    if (*(r15_1 + 0x9eb0) s> 0 || *(r15_1 + 0x9ec0) s> 0)
        rbx_10 = *(r15_1 + 0x5760)
        
        if (rbx_10 == 0)
            *(result_1 + 0x268) = rbx_10
        else
            void* rax_69 = sub_142543940()
            void* rdx_10 = rbx_10[2]
            int64_t rax_70 = sx.q(*(rax_69 + 0x38))
            
            if (rax_70.d s> *(rdx_10 + 0x38)
                    || *(*(rdx_10 + 0x30) + (rax_70 << 3)) != rax_69 + 0x30)
                rbx_10 = *(r15_1 + 0x5760)
                *(result_1 + 0x268) = rbx_10
            else
                void* rsi_5 = *(result_1 + 0x268)
                void* rax_72
                int64_t rax_73
                void* rcx_42
                
                if (rsi_5 != 0)
                    rax_72 = sub_142542e20()
                    rcx_42 = *(rsi_5 + 0x10)
                    rax_73 = sx.q(*(rax_72 + 0x38))
                
                if (rsi_5 == 0 || rax_73.d s> *(rcx_42 + 0x38)
                        || *(*(rcx_42 + 0x30) + (rax_73 << 3)) != rax_72 + 0x30
                        || *(rsi_5 + 0xd0) != rbx_10)
                    void* rax_75
                    rax_75, zmm10_2, zmm14 = sub_142121cc0(rbx_10, nullptr)
                    *(result_1 + 0x268) = rax_75
                
                rbx_10 = *(result_1 + 0x268)
    else
        rbx_10 = *(r15_1 + 0x5760)
        *(result_1 + 0x268) = rbx_10
    
    sub_140e24dd0(result_1 + 0x1e0, rbx_10)
    
    if (*(result_1 + 0xe4) == 0)
    label_1408bd606:
        float zmm7_2[0x4] = *(r15_1 + 0x17fc)
        zmm8_2 = float.s(rand()) * zmm10_2 * (*(r15_1 + 0x1804) - zmm7_2[0])
        float zmm6_2 = *(r15_1 + 0x1800)
        zmm8_2 = zmm8_2 + zmm7_2[0]
        zmm7_2 = *(r15_1 + 0x17f8)
        int32_t rax_78 = rand()
        *(result_1 + 0x1ac) = zmm8_2
        int64_t zmm0_20
        zmm0_20.d = float.s(rax_78)
        zmm0_20.d = zmm0_20.d f* zmm10_2
        zmm0_20.d = zmm0_20.d f* (zmm6_2 - zmm7_2[0])
        zmm0_20.d = zmm0_20.d f+ zmm7_2[0]
        *(result_1 + 0x1a8) = zmm0_20.d
    else
        char rax_76 = *(arg1 + 0xe4)
        
        if (rax_76 == 1)
            int32_t var_178_20 = (*(result_1 + 0x1d8)).d
            *(result_1 + 0x1a8) = *(r15_1 + 0x17f8)
            *(result_1 + 0x1d0) =
                sub_1408bf070(r15_1 + 0x7ef8, zx.o(0), zx.o(0), *(arg1 + 0x54), var_178_20)
        else if (rax_76 == 2)
            goto label_1408bd606
    
    *(result_1 + 0xf0) = rax_1
    *(result_1 + 0xf4) = zmm14.d
    sub_1408bfe70(result_1, r15_1)
    *(result_1 + 0x298) = arg1
    *(result_1 + 0x2a0) = *(arg1 + 0x2a0)
    *(result_1 + 0x54) = *(arg1 + 0x54)
    int512_t zmm6_5
    int512_t zmm7_5
    int512_t zmm8_5
    int512_t zmm9_1
    zmm6_5, zmm7_5, zmm8_5, zmm9_1 = sub_1408c2d10(result_1)
    zmm9_1.o = arg4
    zmm8_5.o = zmm8_1
    zmm7_5.o = zmm7_1
    zmm6_5.o = zmm6_1
    *(result_1 + 0x280) = 0
    *(result_1 + 0x54) = *(arg1 + 0x54)
    *(result_1 + 0x1c8) = *(arg1 + 0x1c8) + 1
    result = result_1
    *(result_1 + 0x1cc) = rax_2 + *(arg1 + 0x1cc)
    *(result_1 + 0x70) = 1
return result
