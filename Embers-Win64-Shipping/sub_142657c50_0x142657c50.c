// 函数: sub_142657c50
// 地址: 0x142657c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6

if (arg3[1].d == 0)
    zmm6.d = 144f * 0.5f
    arg3[1].d = 1
    
    if (*(arg3 + 0xc) s< 1)
        sub_1406105e0(arg3)
    
    **arg3 = zmm6.d

int64_t* r15 = arg6
void* rax_2 = r15[0xc]
void* rcx_1 = &r15[0xa]
int64_t r12 = sx.q(arg5)
int128_t zmm7 = 0x40600000

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t* rax_3 = *(rcx_1 + (r12 << 3))
int64_t* rax_4 = arg1
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
arg6.d = 0
int64_t var_2e8
float var_2dc
float var_2d8
int32_t var_2d0
int32_t var_2c4
int32_t var_2b8
float var_2b4
float var_2ac
int32_t var_2a0
int64_t var_29c
int64_t var_294
int64_t var_288
int32_t var_27c
int64_t var_270
float var_264
int64_t var_260
int64_t var_258
int64_t var_24c
float var_240
int64_t var_23c
int64_t var_234
void* var_228
int32_t var_218
int64_t var_208
int64_t var_1f8
int32_t var_1e8
int64_t var_1d8
float zmm0
float zmm1
float zmm2

if (rax_4[1].d s> 0)
    zmm10 = 0x3d23d70a
    void* rdi_1 = nullptr
    zmm11 = 0x3ecccccd
    var_228 = nullptr
    int32_t i
    
    do
        int128_t* rdi_2 = rdi_1 + *rax_4
        
        if ((*(rdi_2 + 0x28) & arg7) != 0)
            zmm0 = *(rdi_2 + 0x14) f- *(rdi_2 + 8)
            zmm2 = rdi_2[1].d f- *(rdi_2 + 4)
            zmm1 = *(rdi_2 + 0xc) f- *rdi_2
            int32_t rbx_1 =
                (int.q(_mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) f* zmm10.d)).d
            sub_140acc920(&var_1d8, rdi_2 + 0x1c)
            char var_308_1 = 0
            int32_t rax_7 = 8
            
            if (rbx_1 u>= 8)
                rax_7 = rbx_1
            
            char var_318_1 = 0
            uint128_t zmm7_1
            float zmm8_1[0x4]
            float zmm9_1[0x4]
            float zmm10_1[0x4]
            float zmm11_1[0x4]
            float zmm12_1[0x4]
            zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
                sub_142297d50(rax_3, rdi_2, rdi_2 + 0xc, zmm11.d, rax_7, &var_1d8, 0, zmm7.d.b)
            float zmm2_1 = rdi_2[1].d f- *(rdi_2 + 4)
            float zmm1_1 = *(rdi_2 + 0xc) f- *rdi_2
            float zmm0_1 = *(rdi_2 + 0x14) f- *(rdi_2 + 8)
            int32_t rcx_4 = *(rdi_2 + 0x18)
            float zmm6_1[0x4] = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1)
            zmm6_1[0] = zmm6_1[0] * zmm12_1[0]
            int32_t var_328_1
            int64_t* var_320_1
            int32_t var_310_1
            int64_t* rax_8
            int128_t* rdx_6
            int128_t* r8_2
            
            if (rcx_4 == 1)
                sub_140acc920(&var_218, rdi_2 + 0x1c)
                zmm6_1[0] = zmm6_1[0] f+ *(rdi_2 + 8)
                rax_8 = &var_218
                zmm1_1 = *(rdi_2 + 4)
                r8_2 = &var_2b8
                var_2b8 = *rdi_2
                rdx_6 = rdi_2 + 0xc
                var_2b4 = zmm1_1
                float var_2b0_1 = zmm6_1[0]
            else if (rcx_4 == 2)
                sub_140acc920(&var_208, rdi_2 + 0x1c)
                zmm6_1[0] = zmm6_1[0] f+ *(rdi_2 + 0x14)
                rax_8 = &var_208
                zmm1_1 = rdi_2[1].d
                r8_2 = &var_2c4
                var_2c4 = *(rdi_2 + 0xc)
                rdx_6 = rdi_2
                float var_2c0_1 = zmm1_1
                float var_2bc_1 = zmm6_1[0]
            else
                sub_140acc920(&var_1e8, rdi_2 + 0x1c)
                zmm1_1 = *(rdi_2 + 4)
                var_2dc = *rdi_2
                var_310_1.b = 0
                var_318_1.d = zmm7_1.d
                var_320_1.b = 0
                var_2d8 = zmm1_1
                var_328_1.q = &var_1e8
                float var_2d4_1 = zmm6_1[0] f+ *(rdi_2 + 8)
                zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1 = sub_142297ff0(rax_3, 
                    rdi_2 + 0xc, &var_2dc, zmm8_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, 
                    zmm11_1, zmm12_1, var_328_1, var_320_1.d, var_318_1)
                sub_140acc920(&var_1f8, rdi_2 + 0x1c)
                zmm6_1[0] = zmm6_1[0] f+ *(rdi_2 + 0x14)
                rax_8 = &var_1f8
                int32_t zmm1_2 = rdi_2[1].d
                r8_2 = &var_2d0
                var_2d0 = *(rdi_2 + 0xc)
                rdx_6 = rdi_2
                int32_t var_2cc_1 = zmm1_2
                float var_2c8_1 = zmm6_1[0]
            
            var_310_1.b = 0
            var_318_1.d = zmm7_1.d
            var_320_1.b = 0
            var_328_1.q = rax_8
            int32_t zmm9_2
            zmm7, zmm9_2, zmm10, zmm11 = sub_142297ff0(rax_3, rdx_6, r8_2, zmm8_1, zmm6_1, zmm7_1, 
                zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, var_328_1, 0, var_318_1)
            zmm0 = *(rdi_2 + 0x24)
            
            if (zmm0 f>= zmm9_2)
                var_310_1.q = arg4
                var_320_1.d = zmm0
                zmm0 = rdi_2[2].d
                var_270 = 0
                int32_t var_268_1 = 0x3f800000
                var_264 = 0f
                var_260 = 0x3f800000
                var_258 = 0x3f800000
                int32_t var_250_1 = 0
                sub_14229f8f0(rdi_2 + 0xc, &var_258, &var_264, &var_270, zmm0, 0f, 0xa, var_310_1, 
                    0, r12.d, r15)
                int32_t zmm1_4 = rdi_2[2].d
                var_310_1.q = arg4
                var_320_1.d = *(rdi_2 + 0x24)
                var_24c = 0
                int32_t var_244_1 = 0x3f800000
                var_240 = 0f
                var_23c = 0x3f800000
                var_234 = 0x3f800000
                int32_t var_22c_1 = 0
                zmm7, zmm10, zmm11 = sub_14229f8f0(rdi_2, &var_234, &var_240, &var_24c, zmm1_4, 0f, 
                    0xa, var_310_1, 0, r12.d, r15)
            else
                arg5 = 0
                
                if (arg3[1].d s> 0)
                    int64_t rbx_3 = 0
                    int32_t j
                    
                    do
                        float* rax_9 = *arg3
                        zmm1 = rdi_2[2].d
                        var_310_1.q = arg4
                        var_2e8 = 0
                        int32_t var_2e0_1 = 0x3f800000
                        var_2a0 = 0
                        var_29c = 0x3f800000
                        var_294 = 0x3f800000
                        int32_t var_28c_1 = 0
                        var_318_1.d = 0xa
                        var_320_1.d = *(rax_9 + rbx_3)
                        sub_14229f8f0(rdi_2 + 0xc, &var_294, &var_2a0, &var_2e8, zmm1, 0f, 0xa, 
                            var_310_1, 0, r12.d, r15)
                        int32_t* rax_10 = *arg3
                        int32_t zmm1_3 = rdi_2[2].d
                        var_310_1.q = arg4
                        var_288 = 0
                        int32_t var_280_1 = 0x3f800000
                        var_27c = 0
                        int32_t var_278
                        var_278.q = 0x3f800000
                        var_2ac.q = 0x3f800000
                        int32_t var_2a4_1 = 0
                        var_318_1.d = 0xa
                        var_320_1.d = *(rax_10 + rbx_3)
                        zmm7, zmm10, zmm11 = sub_14229f8f0(rdi_2, &var_2ac, &var_27c, &var_288, 
                            zmm1_3, 0f, 0xa, var_310_1, 0, r12.d, r15)
                        rbx_3 += 4
                        j = arg5 + 1
                        arg5 = j
                    while (j s< arg3[1].d)
        
        i = arg6.d + 1
        rdi_1 = var_228 + 0x2c
        arg6.d = i
        var_228 = rdi_1
        rax_4 = arg1
    while (i s< arg1[1].d)

int64_t* result = arg2
arg5 = 0

if (result[1].d s> 0)
    zmm10 = 0x3ccccccd
    void* rsi_1 = nullptr
    zmm11 = 0x3e800000
    int64_t* arg_8 = nullptr
    int32_t i_1
    
    do
        void* rsi_2 = rsi_1 + *result
        
        if ((*(rsi_2 + 0x40) & arg7) != 0)
            zmm1 = *(rsi_2 + 0x18) f- *rsi_2
            zmm2 = *(rsi_2 + 0x1c) f- *(rsi_2 + 4)
            zmm0 = *(rsi_2 + 0x20) f- *(rsi_2 + 8)
            zmm2 = zmm2 * zmm2 + zmm1 * zmm1
            zmm1 = *(rsi_2 + 0x24) f- *(rsi_2 + 0xc)
            float temp0_4 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
            zmm2 = *(rsi_2 + 0x28) f- *(rsi_2 + 0x10)
            int32_t rdi_4 = (int.q(temp0_4 f* zmm10.d)).d
            zmm0 = *(rsi_2 + 0x2c) f- *(rsi_2 + 0x14)
            int32_t rbx_4 =
                (int.q(_mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) f* zmm10.d)).d
            void var_150
            sub_140acc920(&var_150, rsi_2 + 0x34)
            char var_308_2 = 0
            int32_t rax_15 = 8
            
            if (rdi_4 u>= 8)
                rax_15 = rdi_4
            
            int32_t zmm7_2
            int32_t zmm11_2
            zmm7_2, zmm11_2 =
                sub_142297d50(rax_3, rsi_2, rsi_2 + 0x18, zmm11.d, rax_15, &var_150, 0, zmm7.b)
            void var_140
            sub_140acc920(&var_140, rsi_2 + 0x34)
            char var_308_3 = 0
            int32_t rax_16 = 8
            char var_318_2 = 0
            
            if (rbx_4 u>= 8)
                rax_16 = rbx_4
            
            uint128_t zmm7_3
            float zmm8_2[0x4]
            float zmm9_3[0x4]
            float zmm10_2[0x4]
            float zmm11_3[0x4]
            float zmm12_2[0x4]
            zmm7_3, zmm8_2, zmm9_3, zmm10_2, zmm11_3, zmm12_2 = sub_142297d50(rax_3, rsi_2 + 0xc, 
                rsi_2 + 0x24, zmm11_2, rax_16, &var_140, 0, zmm7_2.b)
            float zmm2_2 = *(rsi_2 + 0x1c) f- *(rsi_2 + 4)
            float zmm1_5 = *(rsi_2 + 0x18) f- *rsi_2
            float zmm0_8 = *(rsi_2 + 0x20) f- *(rsi_2 + 8)
            int32_t rcx_21 = *(rsi_2 + 0x30)
            float temp0_6[0x4] = _mm_sqrt_ss(0, zmm2_2 * zmm2_2 + zmm1_5 * zmm1_5 + zmm0_8 * zmm0_8)
            temp0_6[0] = temp0_6[0] * zmm12_2[0]
            int32_t var_328_7
            void* var_320_3
            int32_t var_310_3
            void* rax_17
            int128_t* rdx_22
            int128_t* r8_12
            float zmm6_5[0x4]
            uint128_t zmm7_6
            float zmm8_5[0x4]
            float zmm9_6[0x4]
            float zmm10_5[0x4]
            float zmm11_6[0x4]
            float zmm12_5[0x4]
            
            if (rcx_21 == 1)
                void var_d0
                sub_140acc920(&var_d0, rsi_2 + 0x34)
                zmm1_5 = *(rsi_2 + 4)
                var_2ac = *rsi_2
                var_310_3.b = 0
                var_318_2.d = zmm7_3.d
                var_320_3.b = 0
                float var_2a8_1 = zmm1_5
                var_328_7.q = &var_d0
                float var_2a4_2 = temp0_6[0] f+ *(rsi_2 + 8)
                zmm6_5, zmm7_6, zmm8_5, zmm9_6, zmm10_5, zmm11_6, zmm12_5 = sub_142297ff0(rax_3, 
                    rsi_2 + 0x18, &var_2ac, zmm8_2, temp0_6, zmm7_3, zmm8_2, zmm9_3, zmm10_2, 
                    zmm11_3, zmm12_2, var_328_7, var_320_3.d, var_318_2)
                void var_c0
                sub_140acc920(&var_c0, rsi_2 + 0x34)
                zmm6_5[0] = zmm6_5[0] f+ *(rsi_2 + 0x14)
                rax_17 = &var_c0
                int32_t zmm1_10 = *(rsi_2 + 0x10)
                r8_12 = &var_27c
                var_27c = *(rsi_2 + 0xc)
                rdx_22 = rsi_2 + 0x24
                int32_t var_278_1 = zmm1_10
                float var_274_1 = zmm6_5[0]
            else if (rcx_21 == 2)
                void var_f0
                sub_140acc920(&var_f0, rsi_2 + 0x34)
                zmm1_5 = *(rsi_2 + 0x1c)
                var_264 = *(rsi_2 + 0x18)
                var_310_3.b = 0
                var_318_2.d = zmm7_3.d
                var_320_3.b = 0
                var_260.d = zmm1_5
                var_328_7.q = &var_f0
                var_260:4.d = temp0_6[0] f+ *(rsi_2 + 0x20)
                zmm6_5, zmm7_6, zmm8_5, zmm9_6, zmm10_5, zmm11_6, zmm12_5 = sub_142297ff0(rax_3, 
                    rsi_2, &var_264, zmm8_2, temp0_6, zmm7_3, zmm8_2, zmm9_3, zmm10_2, zmm11_3, 
                    zmm12_2, var_328_7, var_320_3.d, var_318_2)
                void var_e0
                sub_140acc920(&var_e0, rsi_2 + 0x34)
                zmm6_5[0] = zmm6_5[0] f+ *(rsi_2 + 0x2c)
                rax_17 = &var_e0
                r8_12 = &var_270
                var_270.d = *(rsi_2 + 0x24)
                rdx_22 = rsi_2 + 0xc
                var_270:4.d = *(rsi_2 + 0x28)
                float var_268_2 = zmm6_5[0]
            else
                void var_130
                sub_140acc920(&var_130, rsi_2 + 0x34)
                var_234.d = *rsi_2
                var_310_3.b = 0
                var_318_2.d = zmm7_3.d
                var_320_3.b = 0
                var_234:4.d = *(rsi_2 + 4)
                var_328_7.q = &var_130
                float var_22c_2 = temp0_6[0] f+ *(rsi_2 + 8)
                float zmm6_3[0x4]
                uint128_t zmm7_4
                float zmm8_3[0x4]
                float zmm9_4[0x4]
                float zmm10_3[0x4]
                float zmm11_4[0x4]
                float zmm12_3[0x4]
                zmm6_3, zmm7_4, zmm8_3, zmm9_4, zmm10_3, zmm11_4, zmm12_3 = sub_142297ff0(rax_3, 
                    rsi_2 + 0x18, &var_234, zmm8_2, temp0_6, zmm7_3, zmm8_2, zmm9_3, zmm10_2, 
                    zmm11_3, zmm12_2, var_328_7, var_320_3.d, var_318_2)
                void var_120
                sub_140acc920(&var_120, rsi_2 + 0x34)
                int32_t zmm1_6 = *(rsi_2 + 0x10)
                var_240 = *(rsi_2 + 0xc)
                var_310_3.b = 0
                var_318_2.d = zmm7_4.d
                var_320_3.b = 0
                var_23c.d = zmm1_6
                var_328_7.q = &var_120
                var_23c:4.d = zmm6_3[0] f+ *(rsi_2 + 0x14)
                float zmm6_4[0x4]
                uint128_t zmm7_5
                float zmm8_4[0x4]
                float zmm9_5[0x4]
                float zmm10_4[0x4]
                float zmm11_5[0x4]
                float zmm12_4[0x4]
                zmm6_4, zmm7_5, zmm8_4, zmm9_5, zmm10_4, zmm11_5, zmm12_4 = sub_142297ff0(rax_3, 
                    rsi_2 + 0x24, &var_240, zmm8_3, zmm6_3, zmm7_4, zmm8_3, zmm9_4, zmm10_3, 
                    zmm11_4, zmm12_3, var_328_7, 0, var_318_2)
                void var_110
                sub_140acc920(&var_110, rsi_2 + 0x34)
                var_24c.d = *(rsi_2 + 0x18)
                var_310_3.b = 0
                var_318_2.d = zmm7_5.d
                var_320_3.b = 0
                int32_t var_248_1 = *(rsi_2 + 0x1c)
                var_328_7.q = &var_110
                float var_244_2 = zmm6_4[0] f+ *(rsi_2 + 0x20)
                zmm6_5, zmm7_6, zmm8_5, zmm9_6, zmm10_5, zmm11_6, zmm12_5 = sub_142297ff0(rax_3, 
                    rsi_2, &var_24c, zmm8_4, zmm6_4, zmm7_5, zmm8_4, zmm9_5, zmm10_4, zmm11_5, 
                    zmm12_4, var_328_7, 0, var_318_2)
                void var_100
                sub_140acc920(&var_100, rsi_2 + 0x34)
                zmm6_5[0] = zmm6_5[0] f+ *(rsi_2 + 0x2c)
                rax_17 = &var_100
                r8_12 = &var_258
                var_258.d = *(rsi_2 + 0x24)
                rdx_22 = rsi_2 + 0xc
                var_258:4.d = *(rsi_2 + 0x28)
                float var_250_2 = zmm6_5[0]
            
            var_310_3.b = 0
            var_318_2.d = zmm7_6.d
            var_320_3.b = 0
            var_328_7.q = rax_17
            int32_t zmm9_7
            zmm7, zmm9_7, zmm10, zmm11 = sub_142297ff0(rax_3, rdx_22, r8_12, zmm8_5, zmm6_5, 
                zmm7_6, zmm8_5, zmm9_6, zmm10_5, zmm11_6, zmm12_5, var_328_7, 0, var_318_2)
            zmm0 = *(rsi_2 + 0x3c)
            
            if (zmm0 f>= zmm9_7)
                var_310_3.q = arg4
                var_320_3.d = zmm0
                zmm0 = *(rsi_2 + 0x38)
                int64_t var_168 = 0
                int32_t var_160_1 = 0x3f800000
                int32_t var_15c = 0
                int64_t var_158_1 = 0x3f800000
                int64_t var_1c8 = 0x3f800000
                int32_t var_1c0_1 = 0
                sub_14229f8f0(rsi_2 + 0x18, &var_1c8, &var_15c, &var_168, zmm0, 0f, 0xa, var_310_3, 
                    0, r12.d, r15)
                int32_t zmm1_14 = *(rsi_2 + 0x38)
                var_310_3.q = arg4
                var_320_3.d = *(rsi_2 + 0x3c)
                int64_t var_1bc = 0
                int32_t var_1b4_1 = 0x3f800000
                int32_t var_1b0 = 0
                int64_t var_1ac_1 = 0x3f800000
                int64_t var_1a4 = 0x3f800000
                int32_t var_19c_1 = 0
                sub_14229f8f0(rsi_2 + 0x24, &var_1a4, &var_1b0, &var_1bc, zmm1_14, 0f, 0xa, 
                    var_310_3, 0, r12.d, r15)
                int32_t zmm1_15 = *(rsi_2 + 0x38)
                var_310_3.q = arg4
                var_320_3.d = *(rsi_2 + 0x3c)
                int64_t var_198 = 0
                int32_t var_190_1 = 0x3f800000
                var_218 = 0
                int64_t var_214_1 = 0x3f800000
                var_208 = 0x3f800000
                int32_t var_200_1 = 0
                sub_14229f8f0(rsi_2, &var_208, &var_218, &var_198, zmm1_15, 0f, 0xa, var_310_3, 0, 
                    r12.d, r15)
                int32_t zmm1_16 = *(rsi_2 + 0x38)
                var_310_3.q = arg4
                var_320_3.d = *(rsi_2 + 0x3c)
                var_1f8 = 0
                int32_t var_1f0_1 = 0x3f800000
                var_1e8 = 0
                int64_t var_1e4_1 = 0x3f800000
                var_1d8 = 0x3f800000
                int32_t var_1d0_1 = 0
                zmm7, zmm10, zmm11 = sub_14229f8f0(rsi_2 + 0xc, &var_1d8, &var_1e8, &var_1f8, 
                    zmm1_16, 0f, 0xa, var_310_3, 0, r12.d, r15)
            else
                int32_t j_1 = 0
                
                if (arg3[1].d s> 0)
                    float* rbx_5 = nullptr
                    
                    do
                        int64_t rax_18 = *arg3
                        zmm1 = *(rsi_2 + 0x38)
                        var_310_3.q = arg4
                        var_288 = 0
                        int32_t var_280_2 = 0x3f800000
                        var_294.d = 0
                        var_294 = 0x3f800000
                        var_2a0.q = 0x3f800000
                        var_29c:4.d = 0
                        var_318_2.d = 0xa
                        var_320_3.d = *(rbx_5 + rax_18)
                        sub_14229f8f0(rsi_2 + 0x18, &var_2a0, &var_294, &var_288, zmm1, 0f, 0xa, 
                            var_310_3, 0, r12.d, r15)
                        int64_t rax_19 = *arg3
                        int32_t zmm1_11 = *(rsi_2 + 0x38)
                        var_310_3.q = arg4
                        var_2e8 = 0
                        int32_t var_2e0_2 = 0x3f800000
                        var_2b8 = 0
                        var_2b4.q = 0x3f800000
                        var_2c4.q = 0x3f800000
                        int32_t var_2bc_2 = 0
                        var_318_2.d = 0xa
                        var_320_3.d = *(rbx_5 + rax_19)
                        sub_14229f8f0(rsi_2 + 0x24, &var_2c4, &var_2b8, &var_2e8, zmm1_11, 0f, 0xa, 
                            var_310_3, 0, r12.d, r15)
                        int64_t rax_20 = *arg3
                        int32_t zmm1_12 = *(rsi_2 + 0x38)
                        var_310_3.q = arg4
                        var_2d0.q = 0
                        int32_t var_2c8_2 = 0x3f800000
                        var_2dc = 0f
                        var_2d8.q = 0x3f800000
                        var_228 = 0x3f800000
                        int32_t var_220_1 = 0
                        var_318_2.d = 0xa
                        var_320_3.d = *(rbx_5 + rax_20)
                        sub_14229f8f0(rsi_2, &var_228, &var_2dc, &var_2d0, zmm1_12, 0f, 0xa, 
                            var_310_3, 0, r12.d, r15)
                        int64_t rax_21 = *arg3
                        int32_t zmm1_13 = *(rsi_2 + 0x38)
                        var_310_3.q = arg4
                        var_318_2.d = 0xa
                        int64_t var_18c = 0
                        int32_t var_184_1 = 0x3f800000
                        int32_t var_180 = 0
                        int64_t var_17c_1 = 0x3f800000
                        int64_t var_174 = 0x3f800000
                        int32_t var_16c_1 = 0
                        var_320_3.d = *(rbx_5 + rax_21)
                        zmm7, zmm10, zmm11 = sub_14229f8f0(rsi_2 + 0xc, &var_174, &var_180, 
                            &var_18c, zmm1_13, 0f, 0xa, var_310_3, 0, r12.d, r15)
                        j_1 += 1
                        rbx_5 = &rbx_5[1]
                    while (j_1 s< arg3[1].d)
        
        i_1 = arg5 + 1
        rsi_1 = arg_8 + 0x44
        arg5 = i_1
        arg_8 = rsi_1
        result = arg2
    while (i_1 s< arg2[1].d)

return result
