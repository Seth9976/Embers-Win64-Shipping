// 函数: sub_14176cf00
// 地址: 0x14176cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int64_t* r15 = nullptr
int64_t var_308 = 0

if (*(arg3 + 0xc) u>= 2)
    r15 = arg3

int32_t var_300 = 0

if (*(arg4 + 0xc) u>= 2)
    r14 = arg4

int64_t r13

if (r15 == 0 || *(sx.q(r15[1].d) + *(*r15 + 0x398)) != 4)
    r13.b = 0
else
    r13.b = 1

char arg_10

if (r14 == 0 || *(sx.q(r14[1].d) + *(*r14 + 0x398)) != 4)
    arg_10 = 0
else
    arg_10 = 1

uint32_t var_358
sub_14175dbf0(&var_358, arg3)
uint32_t var_320
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9
uint128_t zmm10
uint128_t zmm11
uint32_t zmm12[0x4]
zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_14175dbf0(&var_320, arg4)
float var_208[0x4]
sub_14175df90(&var_208, arg3)
uint32_t var_1f8[0x4]
sub_14175df90(&var_1f8, arg4)
int32_t var_344
int32_t rax_4 = *sub_1408296b0(arg5, &var_344, arg3)
int32_t rax_6 = *sub_1408296b0(arg5, &var_344, arg4)

if (not((*(arg7 + 4)).d f<= *(arg2 + 0x1c)))
    char rsi_1
    
    if (r13.b == 0 || rax_4 != 0xffffffff)
        rsi_1 = arg_10
        
        if (rsi_1 != 0 && rax_6 == 0xffffffff)
            goto label_14176d057
    else
        rsi_1 = arg_10
    label_14176d057:
        uint128_t var_58_1 = zmm7
        uint128_t var_68_1 = zmm8
        uint32_t var_78_1[0x4] = zmm9
        uint128_t var_88_1 = zmm10
        float var_98_1[0x4] = zmm11
        uint32_t var_a8_1[0x4] = zmm12
        uint128_t zmm13
        uint128_t var_b8_1 = zmm13
        float zmm14[0x4]
        float var_c8_1[0x4] = zmm14
        float zmm15[0x4]
        float var_d8_1[0x4] = zmm15
        int64_t var_2f8
        int32_t var_2f0
        int64_t var_2e8
        int32_t var_2e0
        int64_t var_2d8
        int32_t var_2d0
        int32_t var_1e8
        float* rax_8
        
        if (r13.b == 0)
            rax_8 = &var_2f8
            uint128_t var_2c8_1 = data_142d3f660
            var_2f8 = 0
            var_2e8 = 0
            var_2d8 = 0
            var_2f0 = 0
            var_2e0 = 0
            var_2d0 = 0
        else
            rax_8 = sub_1417349b0(&var_1e8, &var_208, (sx.q(r15[1].d) << 6) + *(*r15 + 0x2a8))
        
        uint128_t var_248 = *rax_8
        int96_t var_238_1 = (*(rax_8 + 0x10)).12
        int96_t var_228_1 = (*(rax_8 + 0x20)).12
        uint128_t var_218_1 = *(rax_8 + 0x30)
        int64_t var_2a8
        float* rax_10
        
        if (rsi_1 == 0)
            rax_10 = &var_2a8
            uint128_t var_278_1 = data_142d3f660
            __builtin_memset(&var_2a8, 0, 0x30)
        else
            rax_10 = sub_1417349b0(&var_1e8, &var_1f8, (sx.q(r14[1].d) << 6) + *(*r14 + 0x2a8))
        
        uint128_t zmm4_1 = *(arg2 + 0x10)
        uint128_t zmm3_1 = *(arg2 + 0x14)
        uint128_t zmm2_1 = *(arg2 + 0x18)
        var_2f8.o = *rax_10
        var_2e8.o = *(rax_10 + 0x10)
        var_2d8.o = *(rax_10 + 0x20)
        uint128_t var_2c8_2 = *(rax_10 + 0x30)
        uint128_t zmm0
        zmm0.d = zmm4_1.d f- var_358
        int32_t var_354
        uint128_t zmm1_1
        zmm1_1.d = zmm3_1.d f- var_354
        zmm4_1.d = zmm4_1.d f- var_320
        int32_t var_31c
        zmm3_1.d = zmm3_1.d f- var_31c
        int32_t var_340 = zmm0.d
        int32_t var_33c_1 = zmm1_1.d
        int32_t var_330 = zmm4_1.d
        int32_t var_32c_1 = zmm3_1.d
        int32_t var_350
        zmm0.d = zmm2_1.d f- var_350
        int32_t var_318
        zmm2_1.d = zmm2_1.d f- var_318
        int32_t var_338_1 = zmm0.d
        int32_t var_328_1 = zmm2_1.d
        float* rsi_2
        float var_118[0x10]
        
        if (rsi_1 == 0)
            rsi_2 = &var_2a8
            uint128_t var_278_2 = data_142d3f660
            __builtin_memset(&var_2a8, 0, 0x30)
        else
            rsi_2 =
                sub_14154a640(&var_118, &var_330, &var_2f8, *(*r14 + 0x2d8) + (sx.q(r14[1].d) << 2))
        void var_158
        float* rax_14
        
        if (r13.b == 0)
            int64_t var_1a8
            rax_14 = &var_1a8
            uint128_t var_178_1 = data_142d3f660
            zmm8 = zx.o(0)
            __builtin_memset(&var_1a8, 0, 0x30)
        else
            rax_14 =
                sub_14154a640(&var_158, &var_340, &var_248, *(*r15 + 0x2d8) + (sx.q(r15[1].d) << 2))
            zmm8 = *rax_14
        
        zmm0.d = rsi_2[9].d f+ rax_14[9]
        zmm8.d = zmm8.d f+ *rsi_2
        zmm10.d = rsi_2[4].d f+ rax_14[4]
        zmm13.d = rsi_2[8].d f+ rax_14[8]
        zmm14 = rsi_2[1]
        zmm14[0] = zmm14[0] + rax_14[1]
        zmm15 = rsi_2[5]
        zmm15[0] = zmm15[0] + rax_14[5]
        int32_t var_2b0_1 = zmm0.d
        int32_t var_1c4_1 = zmm0.d
        zmm0.d = rsi_2[2].d f+ rax_14[2]
        var_1e8 = zmm8.d
        int32_t var_1d8_1 = zmm10.d
        int32_t var_1c8_1 = zmm13.d
        float var_1e4_1 = zmm14[0]
        int32_t var_2b8_1 = zmm0.d
        int32_t var_1e0_1 = zmm0.d
        zmm0.d = rsi_2[6].d f+ rax_14[6]
        float var_1d4_1 = zmm15[0]
        int32_t var_1dc_1 = 0
        int32_t var_1cc_1 = 0
        int32_t var_1bc_1 = 0
        int32_t var_2b4_1 = zmm0.d
        int32_t var_1d0_1 = zmm0.d
        zmm0.d = rsi_2[0xa].d f+ rax_14[0xa]
        int32_t rax_15 = *(arg6 + 4)
        var_344 = zmm0.d
        int32_t var_1c0_1 = zmm0.d
        uint128_t var_1b8_1 = data_142d3f660
        zmm0 = _mm_cvtepi32_ps(zx.o(*(arg6 + 8)))
        zmm11.d = _mm_min_ss(_mm_cvtepi32_ps(zx.o(rax_15 + 2)).d, zmm0.d).d f/ zmm0.d
        int32_t var_258
        sub_14175e050(&var_258, arg3, &var_340)
        int32_t var_268
        uint128_t zmm6_1
        uint128_t zmm8_1
        zmm6_1, zmm8_1 = sub_14175e050(&var_268, arg4, &var_330)
        int32_t var_264
        int32_t var_254
        uint128_t zmm3_2
        zmm3_2.d = var_254.d f- var_264
        zmm9.d = var_258.d f- var_268
        int32_t var_260
        int32_t var_250
        uint128_t zmm7_1
        zmm7_1.d = var_250.d f- var_260
        zmm12 = 0x80000000
        uint128_t zmm2_2
        zmm2_2.d = zmm3_2.d f* *(arg2 + 8)
        uint128_t zmm0_1
        zmm0_1.d = zmm9.d f* *(arg2 + 4)
        zmm1_1.d = zmm7_1.d f* *(arg2 + 0xc)
        zmm2_2.d = zmm2_2.d f+ zmm0_1.d
        zmm2_2.d = zmm2_2.d f+ zmm1_1.d
        int32_t var_368
        void var_168
        char rsi_4
        
        if (zmm2_2.d f>= zmm6_1.d)
            rsi_4 = arg_10
        else
            **(arg6 + 0x18) = 1
            uint128_t zmm5_1 = *(arg2 + 8)
            uint128_t zmm4_2 = *(arg2 + 4)
            zmm6_1 = *(arg2 + 0xc)
            zmm2_2.d = zmm4_2.d f* zmm10.d
            zmm1_1.d = zmm6_1.d f* var_2b8_1
            zmm7_1.d = zmm7_1.d f* zmm6_1.d
            zmm9.d = zmm9.d f* zmm4_2.d
            zmm0_1.d = zmm5_1.d f* zmm14[0]
            zmm3_2.d = zmm3_2.d f* zmm5_1.d
            zmm9.d = zmm9.d f+ zmm3_2.d
            zmm3_2.d = zmm4_2.d f* zmm13.d
            zmm9.d = zmm9.d f+ zmm7_1.d
            zmm7_1.d = zmm4_2.d f* zmm8_1.d
            zmm7_1.d = zmm7_1.d f+ zmm0_1.d
            zmm9 ^= 0x80000000
            zmm0_1.d = zmm5_1.d f* zmm15[0]
            zmm10.d = zmm9.d f* zmm4_2.d
            zmm7_1.d = zmm7_1.d f+ zmm1_1.d
            zmm1_1.d = zmm6_1.d f* var_2b4_1
            zmm2_2.d = zmm2_2.d f+ zmm0_1.d
            zmm10.d = zmm10.d f* zmm11.d
            zmm0_1.d = zmm5_1.d f* var_2b0_1
            zmm2_2.d = zmm2_2.d f+ zmm1_1.d
            zmm7_1.d = zmm7_1.d f* zmm4_2.d
            zmm3_2.d = zmm3_2.d f+ zmm0_1.d
            zmm1_1.d = zmm6_1.d f* var_344
            zmm2_2.d = zmm2_2.d f* zmm5_1.d
            zmm3_2.d = zmm3_2.d f+ zmm1_1.d
            zmm7_1.d = zmm7_1.d f+ zmm2_2.d
            zmm2_2.d = zmm9.d f* zmm5_1.d
            zmm3_2.d = zmm3_2.d f* zmm6_1.d
            zmm9.d = zmm9.d f* zmm6_1.d
            zmm7_1.d = zmm7_1.d f+ zmm3_2.d
            zmm2_2.d = zmm2_2.d f* zmm11.d
            zmm9.d = zmm9.d f* zmm11.d
            
            if (not(__andps_xmmxud_memxud(zmm7_1, data_142d3f770).d f> 9.99999994e-09f))
                zmm7_1 = 0x3f800000
            
            bool cond:3_1 = data_1439b8dd8 == 0
            zmm1_1.d = 1f f/ zmm7_1.d
            zmm10.d = zmm10.d f* zmm1_1.d
            zmm5_1.d = zmm1_1.d f* zmm2_2.d
            zmm9.d = zmm9.d f* zmm1_1.d
            int32_t var_364_1 = zmm5_1.d
            var_368 = zmm10.d
            int32_t var_360_1 = zmm9.d
            
            if (not(cond:3_1))
                int64_t* rax_18 = nullptr
                int64_t* r8_12 = nullptr
                
                if (*(arg4 + 0xc) u>= 2)
                    r8_12 = arg4
                
                if (*(arg3 + 0xc) u>= 2)
                    rax_18 = arg3
                
                uint64_t* rax_19
                rax_19, zmm11, zmm12 = sub_141681b40(&var_168, rax_18, r8_12, &var_368, &var_340, 
                    &var_330, &var_258, &var_268)
                var_368.q = *rax_19
                zmm5_1 = var_364_1
                zmm10 = var_368
                var_360_1 = rax_19[1].d
                zmm9 = var_360_1
            
            var_308.d = zmm10.d
            var_308:4.d = zmm5_1.d
            var_300 = zmm9.d
            
            if (rax_4 == 0xffffffff && r13.b != 0)
                zmm7_1 = var_338_1
                zmm6_1.d = zmm5_1.d f* var_340
                void* rdx_17 = *r15
                zmm2_2 = var_33c_1
                int64_t rcx_18 = sx.q(r15[1].d)
                zmm8_1.d = zmm9.d f* zmm2_2.d
                zmm0_1.d = zmm5_1.d f* zmm7_1.d
                int64_t r8_13 = rcx_18 * 3
                zmm7_1.d = zmm7_1.d f* zmm10.d
                zmm8_1.d = zmm8_1.d f- zmm0_1.d
                zmm2_2.d = zmm2_2.d f* zmm10.d
                zmm0_1.d = zmm9.d f* var_340
                zmm6_1.d = zmm6_1.d f- zmm2_2.d
                zmm3_2 = zmm8_1
                zmm2_2 = zmm8_1
                zmm7_1.d = zmm7_1.d f- zmm0_1.d
                zmm0_1 = *(*(rdx_17 + 0x2d8) + (rcx_18 << 2))
                int64_t rax_22 = *(rdx_17 + 0x1b8)
                zmm5_1.d = zmm5_1.d f* zmm0_1.d
                zmm9.d = zmm9.d f* zmm0_1.d
                zmm10.d = zmm10.d f* zmm0_1.d
                zmm5_1.d = zmm5_1.d f+ *(rax_22 + (r8_13 << 2) + 4)
                zmm9.d = zmm9.d f+ *(rax_22 + (r8_13 << 2) + 8)
                zmm10.d = zmm10.d f+ *(rax_22 + (r8_13 << 2))
                *(rax_22 + (r8_13 << 2) + 4) = zmm5_1.d
                *(rax_22 + (r8_13 << 2) + 8) = zmm9.d
                *(rax_22 + (r8_13 << 2)) = zmm10.d
                zmm5_1.d = zmm7_1.d f* var_238_1:4.d
                zmm4_2.d = zmm7_1.d f* var_228_1:4.d
                zmm8_1.d = zmm8_1.d f* var_248.d
                int64_t rdx_18 = sx.q(r15[1].d) * 3
                zmm3_2.d = zmm3_2.d f* var_238_1.d
                zmm2_2.d = zmm2_2.d f* var_228_1.d
                int64_t rcx_19 = *(*r15 + 0x1d0)
                zmm7_1.d = zmm7_1.d f* var_248:4.d
                zmm5_1.d = zmm5_1.d f+ zmm3_2.d
                zmm1_1.d = zmm6_1.d f* var_238_1:8.d
                zmm4_2.d = zmm4_2.d f+ zmm2_2.d
                zmm0_1.d = zmm6_1.d f* var_228_1:8.d
                zmm8_1.d = zmm8_1.d f+ zmm7_1.d
                zmm6_1.d = zmm6_1.d f* var_248:8.d
                zmm5_1.d = zmm5_1.d f+ zmm1_1.d
                zmm4_2.d = zmm4_2.d f+ zmm0_1.d
                zmm8_1.d = zmm8_1.d f+ zmm6_1.d
                zmm5_1.d = zmm5_1.d f+ *(rcx_19 + (rdx_18 << 2) + 4)
                zmm4_2.d = zmm4_2.d f+ *(rcx_19 + (rdx_18 << 2) + 8)
                zmm8_1.d = zmm8_1.d f+ *(rcx_19 + (rdx_18 << 2))
                *(rcx_19 + (rdx_18 << 2) + 4) = zmm5_1.d
                *(rcx_19 + (rdx_18 << 2) + 8) = zmm4_2.d
                *(rcx_19 + (rdx_18 << 2)) = zmm8_1.d
                zmm9 = var_360_1
                zmm5_1 = var_364_1
                zmm10 = var_368
            
            rsi_4 = arg_10
            
            if (rax_6 == 0xffffffff && rsi_4 != 0)
                void* rdx_19 = *r14
                int64_t rcx_20 = sx.q(r14[1].d)
                zmm8_1 = zmm5_1 ^ zmm12
                zmm0_1.d = zmm8_1.d f* var_328_1
                zmm2_2 = zmm9 ^ zmm12
                zmm8_1.d = zmm8_1.d f* var_330
                int64_t r8_14 = rcx_20 * 3
                zmm1_1 = *(*(rdx_19 + 0x2d8) + (rcx_20 << 2))
                zmm4_2 = zmm10 ^ zmm12
                zmm7_1.d = zmm2_2.d f* var_32c_1
                zmm6_1 = zmm4_2
                int64_t rax_26 = *(rdx_19 + 0x1b8)
                zmm4_2.d = zmm4_2.d f* var_32c_1
                zmm6_1.d = zmm6_1.d f* var_328_1
                zmm7_1.d = zmm7_1.d f- zmm0_1.d
                zmm2_2.d = zmm2_2.d f* var_330
                zmm8_1.d = zmm8_1.d f- zmm4_2.d
                zmm5_1.d = zmm5_1.d f* zmm1_1.d
                zmm3_2 = zmm7_1
                zmm9.d = zmm9.d f* zmm1_1.d
                zmm6_1.d = zmm6_1.d f- zmm2_2.d
                zmm1_1.d = zmm1_1.d f* zmm10.d
                zmm0_1.d = (*(rax_26 + (r8_14 << 2))).d f- zmm1_1.d
                zmm1_1.d = (*(rax_26 + (r8_14 << 2) + 4)).d f- zmm5_1.d
                *(rax_26 + (r8_14 << 2)) = zmm0_1.d
                zmm0_1 = *(rax_26 + (r8_14 << 2) + 8)
                *(rax_26 + (r8_14 << 2) + 4) = zmm1_1.d
                zmm0_1.d = zmm0_1.d f- zmm9.d
                *(rax_26 + (r8_14 << 2) + 8) = zmm0_1.d
                zmm4_2.d = zmm6_1.d f* var_2e8:4.d
                zmm5_1.d = zmm7_1.d f* var_2d8.d
                zmm7_1.d = zmm7_1.d f* var_2f8.d
                int64_t rdx_20 = sx.q(r14[1].d) * 3
                zmm3_2.d = zmm3_2.d f* var_2e8.d
                zmm2_2.d = zmm6_1.d f* var_2d8:4.d
                int64_t rcx_21 = *(*r14 + 0x1d0)
                zmm6_1.d = zmm6_1.d f* var_2f8:4.d
                zmm4_2.d = zmm4_2.d f+ zmm3_2.d
                zmm1_1.d = zmm8_1.d f* var_2e0
                zmm5_1.d = zmm5_1.d f+ zmm2_2.d
                zmm0_1.d = zmm8_1.d f* var_2d0
                zmm7_1.d = zmm7_1.d f+ zmm6_1.d
                zmm8_1.d = zmm8_1.d f* var_2f0
                zmm4_2.d = zmm4_2.d f+ zmm1_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm7_1.d = zmm7_1.d f+ zmm8_1.d
                zmm4_2.d = zmm4_2.d f+ *(rcx_21 + (rdx_20 << 2) + 4)
                zmm5_1.d = zmm5_1.d f+ *(rcx_21 + (rdx_20 << 2) + 8)
                zmm7_1.d = zmm7_1.d f+ *(rcx_21 + (rdx_20 << 2))
                *(rcx_21 + (rdx_20 << 2) + 4) = zmm4_2.d
                *(rcx_21 + (rdx_20 << 2) + 8) = zmm5_1.d
                *(rcx_21 + (rdx_20 << 2)) = zmm7_1.d
        
        zmm8_1.d = (*(arg7 + 4)).d f- *(arg2 + 0x1c)
        zmm8_1.d = zmm8_1.d f* zmm11.d
        zmm7_1.d = zmm8_1.d f* *(arg2 + 4)
        zmm6_1.d = zmm8_1.d f* *(arg2 + 8)
        zmm8_1.d = zmm8_1.d f* *(arg2 + 0xc)
        uint32_t (* rax_30)[0x4]
        uint32_t zmm6_2[0x4]
        uint128_t zmm7_2
        uint128_t zmm8_2
        uint32_t zmm12_1[0x4]
        rax_30, zmm6_2, zmm7_2, zmm8_2, zmm12_1 = sub_140631b10(&var_1e8, &var_158)
        float zmm14_1[0x4] = data_143ef7c70
        float zmm15_1[0x4] = data_143ef7c60
        uint32_t zmm1_2[0x4] = *rax_30
        uint128_t zmm2_3 = rax_30[1]
        float zmm3_3[0x4] = rax_30[2]
        zmm0.d = zmm1_2.d f* zmm7_2.d
        uint128_t zmm10_1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
        uint32_t zmm9_1[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
        zmm10_1.d = zmm10_1.d f* zmm6_2[0]
        float zmm11_1[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
        zmm11_1[0] = zmm11_1[0] f* zmm6_2[0]
        zmm9_1[0] = zmm9_1[0] f* zmm6_2[0]
        zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
        zmm1_2[0] = zmm1_2[0] f* zmm8_2.d
        zmm9_1[0] = zmm9_1[0] f+ zmm0.d
        zmm0.d = zmm2_3.d f* zmm7_2.d
        zmm2_3.d = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa).d f* zmm8_2.d
        zmm10_1.d = zmm10_1.d f+ zmm0.d
        zmm0.d = zmm3_3.d f* zmm7_2.d
        zmm9_1[0] = zmm9_1[0] f+ zmm1_2[0]
        float temp0_10[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
        temp0_10[0] = temp0_10[0] f* zmm8_2.d
        zmm11_1[0] = zmm11_1[0] f+ zmm0.d
        zmm10_1.d = zmm10_1.d f+ zmm2_3.d
        uint32_t zmm4_3[0x4] = zmm9_1 ^ zmm12_1
        zmm9_1[0] = zmm9_1[0] f* var_338_1
        zmm11_1[0] = zmm11_1[0] + temp0_10[0]
        zmm0.d = zmm10_1.d f* var_338_1
        zmm7_2 = zmm10_1 ^ zmm12_1
        uint128_t zmm13_1
        zmm13_1.d = zmm10_1.d f* var_340
        zmm2_3 = zmm11_1 ^ zmm12_1
        zmm11_1[0] = zmm11_1[0] f* var_33c_1
        zmm8_2.d = zmm2_3.d f* var_32c_1
        zmm12_1 = zmm4_3
        zmm12_1[0] = zmm12_1[0] f* var_328_1
        zmm11_1[0] = zmm11_1[0] f- zmm0.d
        zmm2_3.d = zmm2_3.d f* var_330
        zmm0.d = zmm11_1.d f* var_340
        zmm4_3[0] = zmm4_3[0] f* var_32c_1
        zmm12_1[0] = zmm12_1[0] f- zmm2_3.d
        zmm9_1[0] = zmm9_1[0] f- zmm0.d
        zmm0.d = zmm9_1.d f* var_33c_1
        zmm13_1.d = zmm13_1.d f- zmm0.d
        zmm0.d = zmm7_2.d f* var_328_1
        zmm7_2.d = zmm7_2.d f* var_330
        zmm8_2.d = zmm8_2.d f- zmm0.d
        zmm7_2.d = zmm7_2.d f- zmm4_3[0]
        
        if (rax_4 != 0xffffffff || r13.b == 0)
            zmm13_1 = data_143ef7c50
        else
            zmm1_2 = var_358
            void* rax_31 = *r15
            int64_t rdx_22 = sx.q(r15[1].d)
            zmm11_1[0] = zmm11_1[0] f* var_238_1.d
            zmm2_3 = *(*(rax_31 + 0x2d8) + (rdx_22 << 2))
            zmm0.d = zmm2_3.d f* zmm9_1[0]
            zmm1_2[0] = zmm1_2[0] f+ zmm0.d
            var_358 = zmm1_2[0]
            zmm1_2 = zmm2_3
            zmm1_2[0] = zmm1_2[0] f* zmm10_1.d
            zmm0.d = var_354.d f+ zmm1_2[0]
            zmm1_2 = var_350
            int32_t var_354_1 = zmm0.d
            zmm0.d = zmm11_1.d f* zmm2_3.d
            zmm2_3.d = zmm11_1.d f* var_248.d
            zmm11_1[0] = zmm11_1[0] f* var_228_1.d
            zmm1_2[0] = zmm1_2[0] f+ zmm0.d
            zmm0.d = zmm9_1.d f* var_248:4.d
            uint32_t var_350_1 = zmm1_2[0]
            zmm1_2 = zmm13_1
            zmm1_2[0] = zmm1_2[0] f* var_248:8.d
            zmm2_3.d = zmm2_3.d f+ zmm0.d
            zmm0.d = zmm9_1.d f* var_238_1:4.d
            zmm9_1[0] = zmm9_1[0] f* var_228_1:4.d
            zmm2_3.d = zmm2_3.d f+ zmm1_2[0]
            zmm1_2 = zmm13_1
            zmm1_2[0] = zmm1_2[0] f* var_238_1:8.d
            zmm11_1[0] = zmm11_1[0] f+ zmm0.d
            zmm13_1.d = zmm13_1.d f* var_228_1:8.d
            zmm11_1[0] = zmm11_1[0] f+ zmm9_1[0]
            var_368 = zmm2_3.d
            zmm11_1[0] = zmm11_1[0] f+ zmm1_2[0]
            zmm11_1[0] = zmm11_1[0] f+ zmm13_1.d
            float var_364_2 = zmm11_1[0]
            float var_360_2 = zmm11_1[0]
            int32_t* rax_32 = sub_141778320(&var_168, &var_368)
            zmm3_3 = var_208
            zmm13_1 = data_143ef7c50
            float temp0_11[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x1b)
            float zmm2_4[0x4] = *rax_32
            float temp0_12[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x4e)
            float temp0_14[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm2_4, zmm2_4, 0))
            arg7.d = 0x322bcc77
            float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm3_3)
            float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm14_1)
            float temp0_18[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xb1)
            float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_16)
            float temp0_21[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55))
            float temp0_23[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa))
            float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm15_1)
            float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm13_1)
            float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_24), temp0_25)
            float temp0_28[0x4] = _mm_mul_ps(temp0_27, temp0_27)
            float temp0_30[0x4] = _mm_add_ps(temp0_28, _mm_shuffle_ps(temp0_28, temp0_28, 0x4e))
            float temp0_32[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x39), temp0_30)
            float zmm5_3[0x4] = data_143ef7c40
            float temp0_33[0x4] = _mm_mul_ps(temp0_32, zmm5_3)
            float temp0_34[0x4] = _mm_rsqrt_ps(temp0_32)
            float temp0_39[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_34, temp0_34), temp0_33)), 
                    temp0_34), 
                temp0_34)
            float temp0_42[0x4] =
                _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_39, temp0_39), temp0_33))
            float temp0_44[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_32, 2)
            var_208 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_42, temp0_39), temp0_39), temp0_27)
                    ^ data_143ef7c30, 
                temp0_44) ^ data_143ef7c30
            zmm7_2, zmm8_2, zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
                sub_14175f3f0(arg3, &var_358, &var_208)
        
        if (rax_6 == 0xffffffff && rsi_4 != 0)
            zmm1_2 = var_320
            zmm2_3.d = zmm8_2.d f* var_2f8.d
            zmm3_3 = zmm8_2
            void* rax_33 = *r14
            int64_t rdx_25 = sx.q(r14[1].d)
            zmm3_3[0] = zmm3_3[0] f* var_2e8.d
            zmm8_2.d = zmm8_2.d f* var_2d8.d
            zmm0 = *(*(rax_33 + 0x2d8) + (rdx_25 << 2))
            zmm9_1[0] = zmm9_1[0] f* zmm0.d
            zmm10_1.d = zmm10_1.d f* zmm0.d
            zmm1_2[0] = zmm1_2[0] f- zmm9_1[0]
            zmm11_1[0] = zmm11_1[0] f* zmm0.d
            zmm0.d = var_318.d f- zmm11_1[0]
            var_320 = zmm1_2[0]
            zmm1_2 = var_31c
            zmm1_2[0] = zmm1_2[0] f- zmm10_1.d
            int32_t var_318_1 = zmm0.d
            zmm0.d = zmm12_1.d f* var_2f8:4.d
            uint32_t var_31c_1 = zmm1_2[0]
            zmm1_2 = zmm7_2
            zmm1_2[0] = zmm1_2[0] f* var_2f0
            zmm2_3.d = zmm2_3.d f+ zmm0.d
            zmm0.d = zmm12_1.d f* var_2e8:4.d
            zmm12_1[0] = zmm12_1[0] f* var_2d8:4.d
            zmm2_3.d = zmm2_3.d f+ zmm1_2[0]
            zmm1_2 = zmm7_2
            zmm1_2[0] = zmm1_2[0] f* var_2e0
            zmm3_3[0] = zmm3_3[0] f+ zmm0.d
            zmm7_2.d = zmm7_2.d f* var_2d0
            zmm8_2.d = zmm8_2.d f+ zmm12_1[0]
            var_358 = zmm2_3.d
            zmm3_3[0] = zmm3_3[0] f+ zmm1_2[0]
            zmm8_2.d = zmm8_2.d f+ zmm7_2.d
            float var_354_2 = zmm3_3[0]
            int32_t var_350_2 = zmm8_2.d
            int32_t* rax_34 = sub_141778320(&var_168, &var_358)
            uint32_t zmm2_5[0x4] = var_1f8
            uint32_t zmm5_4[0x4] = data_143ef7c40
            float temp0_49[0x4] = _mm_shuffle_ps(zmm2_5, zmm2_5, 0x1b)
            zmm3_3 = *rax_34
            arg7.d = 0x322bcc77
            float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0), temp0_49)
            float temp0_52[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xff)
            float temp0_53[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
            float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm2_5)
            float temp0_55[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
            float temp0_57[0x4] = _mm_add_ps(_mm_mul_ps(temp0_51, zmm14_1), temp0_54)
            float temp0_59[0x4] = _mm_mul_ps(temp0_53, _mm_shuffle_ps(zmm2_5, zmm2_5, 0x4e))
            float temp0_61[0x4] = _mm_mul_ps(temp0_55, _mm_shuffle_ps(zmm2_5, zmm2_5, 0xb1))
            float temp0_62[0x4] = _mm_mul_ps(temp0_59, zmm15_1)
            float temp0_63[0x4] = _mm_mul_ps(temp0_61, zmm13_1)
            float temp0_65[0x4] = _mm_add_ps(_mm_add_ps(temp0_57, temp0_62), temp0_63)
            float temp0_66[0x4] = _mm_mul_ps(temp0_65, temp0_65)
            float temp0_68[0x4] = _mm_add_ps(temp0_66, _mm_shuffle_ps(temp0_66, temp0_66, 0x4e))
            float temp0_70[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0x39), temp0_68)
            float temp0_71[0x4] = _mm_rsqrt_ps(temp0_70)
            float temp0_72[0x4] = _mm_mul_ps(temp0_70, zmm5_4)
            zmm2_5 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_4, _mm_mul_ps(_mm_mul_ps(temp0_71, temp0_71), temp0_72)), 
                    temp0_71), 
                temp0_71)
            zmm5_4 = _mm_sub_ps(zmm5_4, _mm_mul_ps(_mm_mul_ps(zmm2_5, zmm2_5), temp0_72))
            float temp0_82[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_70, 2)
            var_1f8 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_4, zmm2_5), zmm2_5), temp0_65)
                    ^ data_143ef7c30, 
                temp0_82) ^ data_143ef7c30
            sub_14175f3f0(arg4, &var_320, &var_1f8)

*arg1 = var_308
arg1[1].d = var_300
return arg1
