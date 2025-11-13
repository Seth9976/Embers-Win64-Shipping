// 函数: sub_1408c4f80
// 地址: 0x1408c4f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x278)

if (rcx != 0 && sub_140d23de0(rcx) != 0)
    char rax_1
    int128_t zmm0
    float zmm6
    float zmm7
    
    if (*(arg1 + 0x280) != 0)
    label_1408c5000:
        float var_18_1 = zmm6
        float var_28_1 = zmm7
        
        if (*(arg1 + 0x280) != 0 && not((*(arg1 + 0xd0)).d f>= *(arg1 + 0xc)))
            *(arg1 + 0xc) = 0
        
        zmm0 = *(arg1 + 0x114)
        void* rcx_2 = *(arg1 + 0x278)
        arg2[0] = arg2[0] f+ *(arg1 + 0xc)
        int128_t var_c8 = zmm0
        int32_t var_d8_1 = (*(arg1 + 0x54)).d
        *(arg1 + 0x24c) = 3
        *(arg1 + 0xc) = arg2[0]
        uint128_t zmm2
        zmm2.d = arg2.d f/ *(arg1 + 0xd0)
        *(arg1 + 0x10) = zmm2.d
        void var_b8
        int128_t* rax_2
        int512_t zmm6_1
        rax_2, zmm6_1 = sub_1408bee50(rcx_2 + 0x4f78, &var_b8, zmm2, arg2, var_d8_1, &var_c8)
        float zmm3_1[0x4] = *(arg1 + 0x54)
        uint128_t zmm2_1 = *(arg1 + 0xc)
        uint128_t zmm1 = *(arg1 + 0x10)
        void* rax_3 = *(arg1 + 0x278)
        *(arg1 + 0x38) = *rax_2
        int32_t arg_8
        float zmm6_3
        
        if (*(rax_3 + 0x5769) == 0)
            zmm6_3 = sub_1408bf070(rax_3 + 0x2fd8, zmm1, zmm2_1, zmm3_1, (*(arg1 + 0xf8)).d) f*
                *(arg1 + 0x58)
            *(arg1 + 0x18) = zmm6_3
        else
            zmm6_1.o = *(arg1 + 0x58)
            int32_t* rax_4
            float zmm6_2
            rax_4, zmm6_2 = sub_1408bf210(rax_3 + 0x2fd8, &arg_8, zmm1, zmm2_1, zmm3_1[0], 
                (*(arg1 + 0xfc)).d, var_c8.d)
            int32_t zmm0_2 = (*(arg1 + 0x104)).d
            char* rcx_6 = *(arg1 + 0x278) + 0x2fd8
            int32_t zmm1_1 = *(arg1 + 0x54)
            float zmm3_2[0x4] = *(arg1 + 0xc)
            uint128_t zmm2_2 = *(arg1 + 0x10)
            *(arg1 + 0x18) = zmm6_2 f* *rax_4
            *(arg1 + 0x58)
            int32_t* rax_5
            rax_5, zmm6_3 = sub_1408bf210(rcx_6, &arg_8, zmm2_2, zmm3_2, zmm1_1, zmm0_2)
            zmm6_3 = zmm6_3 f* rax_5[1]
        
        *(arg1 + 0x1c) = zmm6_3
        int32_t* rax_6
        uint128_t zmm10_1
        float zmm12_1
        rax_6, zmm10_1, zmm12_1 = sub_1408bf210(*(arg1 + 0x278) + 0x37c0, &arg_8, *(arg1 + 0x10), 
            *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x124)).d, var_c8.d)
        uint128_t zmm4_1 = 0x3e22f983
        uint128_t zmm1_3 = 0x40c90fdb
        char rax_7 = *(arg1 + 0xe4)
        uint128_t zmm2_4 = 0x3fc90fdb
        float zmm15[0x4] = 0x40490fdb
        uint128_t zmm8_1 = 0xbfc90fdb
        uint128_t zmm6_4 = 0xc0490fdb
        float zmm5_1[0x4] = 0x348bdd11
        float zmm11_1 = 2.47604949e-05f
        float zmm7_1 = 0.00138883782f
        uint128_t zmm9_1 = 0x3638b88e
        *(arg1 + 0x48) = *rax_6
        uint128_t zmm0_4 = 0x3c8efa35
        float zmm3_4[0x4]
        
        if (rax_7 == 0)
            int32_t zmm0_5 = sub_1408bf070(*(arg1 + 0x278) + 0x6f28, *(arg1 + 0x10), *(arg1 + 0xc), 
                *(arg1 + 0x54), (*(arg1 + 0x148)).d)
            float zmm3_5[0x4] = *(arg1 + 0x54)
            char* rcx_12 = *(arg1 + 0x278) + 0x7710
            uint128_t zmm2_5 = *(arg1 + 0xc)
            uint128_t zmm1_4 = *(arg1 + 0x10)
            *(arg1 + 0x1b0) = zmm0_5
            int32_t zmm0_6 = sub_1408bf070(rcx_12, zmm1_4, zmm2_5, zmm3_5, *(arg1 + 0x14c))
            int32_t zmm1_5 = *(arg1 + 0x54)
            char* rcx_14 = *(arg1 + 0x278) + 0x5770
            float zmm3_6[0x4] = *(arg1 + 0xc)
            uint128_t zmm2_6 = *(arg1 + 0x10)
            *(arg1 + 0x1b4) = zmm0_6
            int32_t* rax_8
            float zmm10_2[0x4]
            rax_8, zmm10_2, zmm11_1, zmm12_1 =
                sub_1408bf210(rcx_14, &arg_8, zmm2_6, zmm3_6, zmm1_5, (*(arg1 + 0x138)).d)
            *(arg1 + 0x1a0) = *rax_8
            float zmm8_2[0x4] = *(arg1 + 0x34)
            int64_t zmm7_2
            zmm7_2.d = (*(arg1 + 0x30)).d f- *(arg1 + 0x1a8)
            zmm8_2[0] = zmm8_2[0] f- *(arg1 + 0x1ac)
            zmm7_2.d = zmm7_2.d f- *(arg1 + 0x284)
            zmm8_2[0] = zmm8_2[0] f- *(arg1 + 0x288)
            int64_t zmm0_7
            zmm0_7.d = zmm7_2.d f* zmm7_2.d
            zmm8_2[0] = zmm8_2[0] * zmm8_2[0]
            zmm8_2[0] = zmm8_2[0] f+ zmm0_7.d
            uint128_t zmm2_7
            float zmm5_2[0x4]
            float zmm6_5[0x4]
            
            if (zmm8_2[0] <= 9.99999994e-09f)
                zmm6_5 = zx.o(0)
                zmm5_2 = zx.o(0)
            else
                zmm5_2 = _mm_rsqrt_ss(zmm8_2[0], zmm8_2[0])
                zmm8_2[0] = zmm8_2[0] * 0.5f
                zmm0_7.d = zmm5_2[0].q.d f* zmm5_2[0]
                zmm8_2[0] = zmm8_2[0] f* zmm0_7.d
                zmm2_7.d = 0.5f - zmm8_2[0]
                zmm0_7.d = zmm5_2[0].q.d f* zmm2_7.d
                zmm5_2[0] = zmm5_2[0] f+ zmm0_7.d
                zmm0_7 = zmm5_2[0].q
                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                zmm8_2[0] = zmm8_2[0] * zmm5_2[0]
                zmm0_7.d = zmm0_7.d f* (0.5f - zmm8_2[0])
                zmm5_2[0] = zmm5_2[0] f+ zmm0_7.d
                zmm6_5 = zmm5_2
                zmm5_2[0] = zmm5_2[0] * zmm8_2[0]
                zmm6_5[0] = zmm6_5[0] f* zmm7_2.d
            
            zmm0_7 = *(arg1 + 0x1a4)
            float zmm3_7[0x4] = *(arg1 + 0x1b0)
            zmm10_2[0] = zmm10_2[0] f* *(arg1 + 0x1a0)
            float zmm4_2 = *(arg1 + 0x1b4)
            zmm0_7.d = zmm0_7.d f* zmm10_2[0]
            zmm10_2[0] = zmm10_2[0] f+ *(arg1 + 0x28)
            zmm2_7.d = zmm6_5.d f* zmm3_7[0]
            zmm0_7.d = zmm0_7.d f+ *(arg1 + 0x2c)
            zmm6_5[0] = zmm6_5[0] * zmm4_2
            zmm2_7.d = zmm2_7.d f* zmm10_2[0]
            *(arg1 + 0x2c) = zmm0_7.d
            zmm0_7.d = zmm5_2[0].q.d f* zmm3_7[0]
            zmm2_7.d = zmm2_7.d f+ zmm10_2[0]
            zmm5_2[0] = zmm5_2[0] * zmm4_2
            zmm0_7.d = zmm0_7.d f* zmm10_2[0]
            zmm5_2[0] = zmm5_2[0] * zmm10_2[0]
            zmm0_7.d = zmm0_7.d f+ *(arg1 + 0x2c)
            zmm6_5[0] = zmm6_5[0] * zmm10_2[0]
            zmm2_7.d = zmm2_7.d f- zmm5_2[0]
            *(arg1 + 0x2c) = zmm0_7.d
            zmm6_5[0] = zmm6_5[0] f+ *(arg1 + 0x2c)
            *(arg1 + 0x28) = zmm2_7.d
            *(arg1 + 0x2c) = zmm6_5[0]
            uint128_t zmm0_8
            int32_t zmm10_3
            zmm0_8, zmm10_3 = sub_1408bf070(*(arg1 + 0x278) + 0x6740, *(arg1 + 0x10), 
                *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x144)).d)
            *(arg1 + 0x1c0) = zmm0_8.d
            
            if (not(zmm0_8.d f== zmm12_1))
                uint128_t zmm2_8 = *(arg1 + 0x28)
                uint128_t zmm4_3 = *(arg1 + 0x2c)
                float zmm3_8[0x4] = zmm2_8
                uint128_t zmm1_7
                zmm1_7.d = zmm0_8.d f* zmm2_8.d
                zmm0_8.d = zmm0_8.d f* zmm4_3.d
                zmm1_7.d = zmm1_7.d f* zmm10_3
                zmm0_8.d = zmm0_8.d f* zmm10_3
                zmm3_8[0] = zmm3_8[0] f- zmm1_7.d
                zmm4_3.d = zmm4_3.d f- zmm0_8.d
                zmm2_8.d = zmm2_8.d f* zmm3_8[0]
                
                if (not(zmm2_8.d f> zmm12_1))
                    zmm3_8 = zx.o(0)
                
                *(arg1 + 0x28) = zmm3_8[0]
                zmm0_8.d = zmm4_3.d f* *(arg1 + 0x2c)
                
                if (zmm0_8.d f> zmm12_1)
                    *(arg1 + 0x2c) = zmm4_3.d
                else
                    *(arg1 + 0x2c) = 0
            
            *(arg1 + 0x1bc) = sub_1408bf070(*(arg1 + 0x278) + 0xc660, *(arg1 + 0x10), 
                *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x164)).d)
            sub_140b21590(&arg_8)
            int64_t rcx_20 = arg_8.q
            float zmm3_9[0x4] = *(arg1 + 0x54)
            uint128_t zmm2_9 = *(arg1 + 0xc)
            int32_t var_d8_11 = (*(arg1 + 0x168)).d
            uint128_t zmm1_8 = *(arg1 + 0x10)
            uint128_t zmm6_6 = _mm_cvtepi32_ps(zx.o((rcx_20 s/ 0x989680 s% 0x3c).d * 0x3e8))
            void* rcx_25 = *(arg1 + 0x278)
            zmm6_6.d = zmm6_6.d f+ _mm_cvtepi32_ps(zx.o((rcx_20 s/ 0x2710 s% 0x3e8).d)).d
            zmm6_6.d = zmm6_6.d f* *(arg1 + 0x1bc)
            zmm6_6.d = zmm6_6.d f* 0.00100000005f
            zmm6_6.d = zmm6_6.d f+ *(arg1 + 0x1b8)
            float zmm0_11
            zmm0_11, zmm6_4, zmm9_1, zmm10_1 =
                sub_1408bf070(rcx_25 + 0xce48, zmm1_8, zmm2_9, zmm3_9, var_d8_11)
            zmm0_4 = sinf(zmm6_4.d)
            zmm3_4 = *(arg1 + 0x2c)
            zmm7_1 = zmm0_11 f* zmm0_4.d
            zmm1_3.d = zmm3_4.d f* 0.999999881f
            zmm0_4 = *(arg1 + 0x28)
            zmm3_4[0] = zmm3_4[0] * 1.1920929e-07f
            zmm8_1.d = zmm0_4.d f* 0.999999881f
            zmm6_4.d = zmm0_4.d f* -1.1920929e-07f
            zmm8_1.d = zmm8_1.d f- zmm3_4[0]
            zmm6_4.d = zmm6_4.d f- zmm1_3.d
            zmm1_3.d = zmm8_1.d f* zmm8_1.d
            zmm0_4.d = zmm6_4.d f* zmm6_4.d
            zmm1_3.d = zmm1_3.d f+ zmm0_4.d
            
            if (zmm1_3.d f<= 9.99999994e-09f)
                zmm1_3 = zx.o(0)
                zmm5_1 = zx.o(0)
            else
                zmm3_4 = zmm1_3
                zmm5_1 = _mm_rsqrt_ss(zmm1_3[0], zmm3_4[0])
                zmm3_4[0] = zmm3_4[0] * 0.5f
                zmm0_4.d = zmm5_1.d f* zmm5_1[0]
                zmm1_3.d = zmm3_4.d f* zmm0_4.d
                zmm2_4.d = 0.5f f- zmm1_3.d
                zmm0_4.d = zmm5_1.d f* zmm2_4.d
                zmm5_1[0] = zmm5_1[0] f+ zmm0_4.d
                zmm1_3.d = zmm5_1.d f* zmm5_1[0]
                zmm3_4[0] = zmm3_4[0] f* zmm1_3.d
                zmm4_1.d = 0.5f - zmm3_4[0]
                zmm0_4.d = zmm5_1.d f* zmm4_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm0_4.d
                zmm5_1[0] = zmm5_1[0] f* zmm8_1.d
                zmm1_3.d = zmm5_1.d f* zmm6_4.d
            
            zmm1_3.d = zmm1_3.d f* zmm7_1
            zmm5_1[0] = zmm5_1[0] * zmm7_1
            zmm1_3.d = zmm1_3.d f+ *(arg1 + 0x28)
            zmm5_1[0] = zmm5_1[0] f+ *(arg1 + 0x2c)
            *(arg1 + 0x28) = zmm1_3.d
            zmm1_3.d = zmm1_3.d f* zmm10_1.d
            *(arg1 + 0x2c) = zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] f* zmm10_1.d
            zmm1_3.d = zmm1_3.d f* *(arg1 + 0x58)
            zmm1_3.d = zmm1_3.d f+ *(arg1 + 0x30)
            *(arg1 + 0x30) = zmm1_3.d
            zmm5_1[0] = zmm5_1[0] f* *(arg1 + 0x58)
            zmm5_1[0] = zmm5_1[0] f+ *(arg1 + 0x34)
            *(arg1 + 0x34) = zmm5_1[0]
            goto label_1408c59c3
        
        if (rax_7 == 1)
            int128_t zmm0_12
            int512_t zmm7_3
            zmm0_12, zmm7_3 = sub_1408bf070(*(arg1 + 0x278) + 0x7ef8, *(arg1 + 0x10), 
                *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x1d8)).d)
            zmm7_3.o = zmm0_12
            zmm0_4, zmm6_4, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408bf070(
                *(arg1 + 0x278) + 0x86e0, *(arg1 + 0x10), *(arg1 + 0xc), *(arg1 + 0x54), 
                (*(arg1 + 0x1dc)).d)
            zmm5_1 = zmm0_4
            zmm0_4 = *(arg1 + 0x30)
            zmm5_1[0] = zmm5_1[0] f* zmm10_1.d
            arg_8 = zmm0_4.d
            zmm0_4 = *(arg1 + 0x34)
            zmm5_1[0] = zmm5_1[0] f+ *(arg1 + 0x24)
            int32_t arg_20 = zmm0_4.d
            *(arg1 + 0x24) = zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * 0.0174532924f
            zmm0_4.d = zmm5_1.d f* 0.159154937f
            
            if (zmm5_1[0] < zmm12_1)
                zmm0_4.d = zmm0_4.d f- 0.5f
            else
                zmm0_4.d = zmm0_4.d f+ 0.5f
            
            zmm0_4.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_4.d))).d f* 6.28318548f
            zmm5_1[0] = zmm5_1[0] f- zmm0_4.d
            
            if (not(zmm5_1[0] <= 1.57079637f))
                zmm1_3 = 0xbf800000
                zmm0_4.d = 3.14159274f - zmm5_1[0]
                zmm5_1 = zmm0_4
            else if (zmm5_1[0] f>= zmm8_1.d)
                zmm1_3 = 0x3f800000
            else
                zmm1_3 = 0xbf800000
                zmm0_4.d = zmm6_4.d f- zmm5_1[0]
                zmm5_1 = zmm0_4
            
            zmm2_4.d = zmm5_1.d f* zmm5_1[0]
            zmm0_4.d = zmm2_4.d f* 2.60516146e-07f
            zmm4_1.d = 2.47604949e-05f f- zmm0_4.d
            zmm0_4.d = zmm2_4.d f* 2.3889859e-08f
            zmm4_1.d = zmm4_1.d f* zmm2_4.d
            zmm4_1.d = zmm4_1.d f- 0.00138883782f
            zmm4_1.d = zmm4_1.d f* zmm2_4.d
            zmm4_1.d = zmm4_1.d f+ 0.0416666381f
            zmm4_1.d = zmm4_1.d f* zmm2_4.d
            zmm4_1.d = zmm4_1.d f- 0.5f
            zmm4_1.d = zmm4_1.d f* zmm2_4.d
            zmm4_1.d = zmm4_1.d f+ 1f
            zmm4_1.d = zmm4_1.d f* zmm1_3.d
            zmm1_3.d = zmm9_1.d f- zmm0_4.d
            zmm0_4.d = 1f f/ zmm10_1.d
            zmm1_3.d = zmm1_3.d f* zmm2_4.d
            zmm4_1.d = zmm4_1.d f* zmm7_1
            zmm1_3.d = zmm1_3.d f- 0.000198408743f
            zmm4_1.d = zmm4_1.d f* *(arg1 + 0x58)
            zmm1_3.d = zmm1_3.d f* zmm2_4.d
            zmm4_1.d = zmm4_1.d f+ *(arg1 + 0x284)
            zmm1_3.d = zmm1_3.d f+ 0.00833333097f
            zmm1_3.d = zmm1_3.d f* zmm2_4.d
            zmm1_3.d = zmm1_3.d f- 0.166666672f
            zmm1_3.d = zmm1_3.d f* zmm2_4.d
            zmm1_3.d = zmm1_3.d f+ 1f
            zmm1_3.d = zmm1_3.d f* zmm5_1[0]
            zmm1_3.d = zmm1_3.d f* zmm7_1
            zmm1_3.d = zmm1_3.d f* *(arg1 + 0x58)
            zmm1_3.d = zmm1_3.d f+ *(arg1 + 0x288)
            *(arg1 + 0x30) = zmm4_1.d
            zmm4_1.d = zmm4_1.d f- arg_8
            *(arg1 + 0x34) = zmm1_3.d
            zmm1_3.d = zmm1_3.d f- arg_20
            zmm4_1.d = zmm4_1.d f* zmm0_4.d
            zmm1_3.d = zmm1_3.d f* zmm0_4.d
            *(arg1 + 0x28) = zmm4_1.d
            *(arg1 + 0x2c) = zmm1_3.d
            goto label_1408c59d4
        
        if (rax_7 == 2)
            *(arg1 + 0x30)
            *(arg1 + 0x34)
            int128_t zmm0_13
            int512_t zmm6_7
            zmm0_13, zmm6_7 = sub_1408bf070(*(arg1 + 0x278) + 0x96b0, *(arg1 + 0x10), 
                *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x130)).d)
            zmm6_7.o = zmm0_13
            zmm0_4, zmm6_4, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408bf070(
                *(arg1 + 0x278) + 0x8ec8, *(arg1 + 0x10), *(arg1 + 0xc), *(arg1 + 0x54), 
                (*(arg1 + 0x12c)).d)
            zmm2_4 = *(arg1 + 0x58)
            zmm1_3 = zmm2_4
            zmm2_4.d = zmm2_4.d f* zmm6_4.d
            zmm1_3.d = zmm1_3.d f* zmm0_4.d
            zmm0_4.d = 1f f/ zmm10_1.d
            *(arg1 + 0x34) = zmm2_4.d
            zmm2_4.d = zmm2_4.d f- zmm8_1.d
            *(arg1 + 0x30) = zmm1_3.d
            zmm1_3.d = zmm1_3.d f- zmm7_1
            zmm2_4.d = zmm2_4.d f* zmm0_4.d
            zmm1_3.d = zmm1_3.d f* zmm0_4.d
            *(arg1 + 0x2c) = zmm2_4.d
            *(arg1 + 0x28) = zmm1_3.d
        label_1408c59c3:
            zmm8_1 = 0xbfc90fdb
            zmm6_4 = 0xc0490fdb
        label_1408c59d4:
            zmm1_3 = 0x40c90fdb
            zmm2_4 = 0x3fc90fdb
            zmm0_4 = 0x3c8efa35
            zmm4_1 = 0x3e22f983
            zmm5_1 = 0x348bdd11
            zmm7_1 = 0.00138883782f
        
        if (*(arg1 + 0xe5) == 1 && *(arg1 + 0x278) != 0 && *(arg1 + 0xf0) != 0)
            void* rcx_35 = *(arg1 + 0x298)
            
            if (rcx_35 != 0)
                char rax_25 = *(arg1 + 0xe4)
                
                if (rax_25 == 0)
                label_1408c5b7b:
                    zmm0_4.d = zmm10_1.d f* *(rcx_35 + 0x28)
                    zmm1_3.d = (*(rcx_35 + 0x2c)).d f* zmm10_1.d
                    zmm0_4.d = zmm0_4.d f+ *(arg1 + 0x30)
                    zmm1_3.d = zmm1_3.d f+ *(arg1 + 0x34)
                    *(arg1 + 0x34) = zmm1_3.d
                    *(arg1 + 0x30) = zmm0_4.d
                else if (rax_25 == 1)
                    zmm3_4 = *(arg1 + 0x24)
                    zmm3_4[0] = zmm3_4[0] f* zmm0_4.d
                    zmm0_4.d = zmm3_4.d f* zmm4_1.d
                    
                    if (zmm3_4[0] < zmm12_1)
                        zmm0_4.d = zmm0_4.d f- 0.5f
                    else
                        zmm0_4.d = zmm0_4.d f+ 0.5f
                    
                    zmm4_1 = zmm10_1
                    zmm0_4.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_4.d))).d f* zmm1_3.d
                    zmm3_4[0] = zmm3_4[0] f- zmm0_4.d
                    
                    if (not(zmm3_4[0] f<= zmm2_4.d))
                        zmm15[0] = 3.14159274f - zmm3_4[0]
                        zmm3_4 = zmm15
                        zmm4_1 ^= data_142d3f780
                    else if (not(zmm3_4[0] f>= zmm8_1.d))
                        zmm6_4.d = zmm6_4.d f- zmm3_4[0]
                        zmm3_4 = zmm6_4
                        zmm4_1 ^= data_142d3f780
                    
                    zmm2_4 = *(arg1 + 0x1d0)
                    zmm1_3.d = zmm3_4.d f* zmm3_4[0]
                    zmm0_4.d = zmm1_3.d f* zmm5_1[0]
                    zmm11_1 = zmm11_1 f- zmm0_4.d
                    zmm0_4.d = zmm1_3.d f* 2.3889859e-08f
                    zmm9_1.d = zmm9_1.d f- zmm0_4.d
                    zmm9_1.d = zmm9_1.d f* zmm1_3.d
                    zmm9_1.d = zmm9_1.d f- 0.000198408743f
                    zmm9_1.d = zmm9_1.d f* zmm1_3.d
                    zmm9_1.d = zmm9_1.d f+ 0.00833333097f
                    zmm9_1.d = zmm9_1.d f* zmm1_3.d
                    zmm9_1.d = zmm9_1.d f- 0.166666672f
                    zmm9_1.d = zmm9_1.d f* zmm1_3.d
                    zmm9_1.d = zmm9_1.d f+ 1f
                    zmm9_1.d = zmm9_1.d f* zmm3_4[0]
                    zmm9_1.d = zmm9_1.d f* zmm2_4.d
                    zmm9_1.d = zmm9_1.d f* zmm10_1.d
                    zmm9_1.d = zmm9_1.d f+ *(rcx_35 + 0x34)
                    *(arg1 + 0x30) = ((
                        ((zmm11_1 f* zmm1_3.d - zmm7_1) f* zmm1_3.d + 0.0416666381f) f* zmm1_3.d
                        - 0.5f) f* zmm1_3.d + 1f) f* zmm4_1.d f* zmm2_4.d f+ *(rcx_35 + 0x30)
                    *(arg1 + 0x34) = zmm9_1.d
                else if (rax_25 == 2)
                    goto label_1408c5b7b
        
        void* rcx_36 = *(arg1 + 0x278)
        float zmm0_14
        int512_t zmm6_8
        
        if (*(rcx_36 + 0x5768) == 0)
            float zmm10_4
            zmm0_14, zmm6_8, zmm10_4 = sub_1408bf070(rcx_36 + 0x4790, *(arg1 + 0x10), 
                *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x110)).d)
            zmm0_14 = zmm0_14 * zmm10_4 f+ *(arg1 + 0x20)
        else
            zmm0_14, zmm6_8 = sub_140a3f4a0(*(arg1 + 0x2c), *(arg1 + 0x28))
            zmm0_14 = zmm0_14 * 57.2957764f
        
        void* rcx_38 = *(arg1 + 0x278)
        float zmm3_12[0x4] = *(arg1 + 0x54)
        uint128_t zmm2_12 = *(arg1 + 0xc)
        uint128_t zmm1_11 = *(arg1 + 0x10)
        zmm6_8.o = 0x3c23d70a
        *(arg1 + 0x20) = zmm0_14
        uint128_t zmm1_12
        uint128_t zmm2_13
        float zmm3_13[0x4]
        
        if (*(rcx_38 + 0xa6b8) == 0)
            zmm3_13 = sub_1408bf070(rcx_38 + 0xb690, zmm1_11, zmm2_12, zmm3_12, *(arg1 + 0x158))
        else
            float zmm0_15[0x4]
            int32_t zmm6_9
            zmm0_15, zmm6_9 =
                sub_1408bf070(rcx_38 + 0xa6c0, zmm1_11, zmm2_12, zmm3_12, *(arg1 + 0x154))
            *(arg1 + 0x60) = zmm0_15[0]
            zmm1_12 = *(arg1 + 0x2c)
            zmm2_13 = *(arg1 + 0x28)
            zmm2_13.d = zmm2_13.d f* zmm2_13.d
            zmm1_12.d = zmm1_12.d f* zmm1_12.d
            zmm2_13.d = zmm2_13.d f+ zmm1_12.d
            zmm3_13 = _mm_sqrt_ss(0, zmm2_13.d)
            zmm3_13[0] = zmm3_13[0] f* zmm6_9
            zmm3_13[0] = zmm3_13[0] * zmm0_15[0]
        
        *(arg1 + 0xe0) = zmm3_13[0]
        void* rcx_41 = *(arg1 + 0x278)
        zmm3_13 = *(arg1 + 0x54)
        zmm2_13 = *(arg1 + 0xc)
        zmm1_12 = *(arg1 + 0x10)
        
        if (*(rcx_41 + 0x9ec9) == 0)
            int32_t zmm0_17
            zmm0_17, rax_1 =
                sub_1408bf070(rcx_41 + 0xaea8, zmm1_12, zmm2_13, zmm3_13, (*(arg1 + 0x15c))[0])
            *(arg1 + 0xdc) = zmm0_17
        else
            float zmm0_16
            float zmm6_10
            zmm0_16, rax_1, zmm6_10 =
                sub_1408bf070(rcx_41 + 0x9ed0, zmm1_12, zmm2_13, zmm3_13, (*(arg1 + 0x150))[0])
            *(arg1 + 0x5c) = zmm0_16
            float zmm1_13 = *(arg1 + 0x2c)
            float zmm2_14 = *(arg1 + 0x28)
            *(arg1 + 0xdc) =
                _mm_sqrt_ss(0, zmm2_14 * zmm2_14 + zmm1_13 * zmm1_13) * zmm6_10 * zmm0_16
    else
        if (*(arg1 + 0x282) == 0)
            zmm0 = *(arg1 + 0xd0)
        
        if (*(arg1 + 0x282) == 0 && not(zmm0.d f<= *(arg1 + 0xc)) && zmm0.d f> 0f)
            goto label_1408c5000
        
        rax_1, zmm6, zmm7 = sub_1408c0320(arg1)
        
        if (rax_1 == 0)
            goto label_1408c5000
    return 

*(arg1 + 0x281) = 1
