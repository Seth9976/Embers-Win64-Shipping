// 函数: sub_1422436a0
// 地址: 0x1422436a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t result_3 = (*(*arg2 + 0xc8))(arg2)
int64_t* var_1e0 = nullptr
uint64_t result_4 = zx.q(result_3)
int32_t var_1d4 = 0
int64_t* r13 = nullptr
int32_t result_2 = result_3

if (result_3 s> 0)
    sub_1405a4d70(&var_1e0)
    result_2 = result_3
    r13 = var_1e0

(*(*arg2 + 0xd0))(arg2, r13, zx.q((result_4 << 3).d), 0)
float zmm14[0x4] = *(arg3 + 0xc)
float zmm10[0x4] = zmm14
float zmm8[0x4] = *arg3
float zmm7[0x4] = *(arg3 + 4)
float zmm9[0x4] = *(arg3 + 8)
int128_t zmm5 = *(arg3 + 0x14)
float zmm1 = zmm9[0]
float zmm6[0x4] = arg3[1].d
zmm5.d = zmm5.d f+ zmm5.d
int128_t zmm4 = *(arg3 + 0x18)
zmm6[0] = zmm6[0] + zmm6[0]
zmm10[0] = zmm10[0] * zmm14[0]
zmm4.d = zmm4.d f+ zmm4.d
float zmm3 = zmm7[0]
float var_210 = zmm14[0]
zmm5 ^= 0x80000000
float var_18c = zmm14[0]
zmm10[0] = zmm10[0] - 0.5f
zmm6 ^= 0x80000000
zmm8[0] = zmm8[0] * zmm6[0]
zmm4 ^= 0x80000000
zmm3 = zmm3 f* zmm5.d + zmm8[0]
float zmm12[0x4] = zmm10
float zmm13[0x4] = zmm10
zmm12[0] = zmm12[0] * zmm6[0]
zmm13[0] = zmm13[0] f* zmm5.d
float zmm0[0x4] = zmm9 ^ 0x80000000
zmm10[0] = zmm10[0] f* zmm4.d
zmm3 = zmm3 + zmm1 f* zmm4.d
float var_1f4 = zmm0[0]
float var_190 = zmm0[0]
zmm1 = zmm7[0] f* zmm4.d
zmm9[0] = zmm9[0] f* zmm5.d
float zmm15[0x4] = zmm8 ^ 0x80000000
float zmm11[0x4] = zmm7 ^ 0x80000000
float var_20c = zmm15[0]
float var_198 = zmm15[0]
zmm1 = zmm1 - zmm9[0]
float var_208 = zmm11[0]
float var_194 = zmm11[0]
zmm8[0] = zmm8[0] * zmm3
zmm12[0] = zmm12[0] - zmm1 * zmm14[0]
zmm1 = zmm9[0] * zmm6[0]
zmm9[0] = zmm9[0] * zmm3
zmm12[0] = zmm12[0] + zmm8[0]
zmm8[0] = zmm8[0] f* zmm4.d
zmm8[0] = zmm8[0] f* zmm5.d
zmm1 = zmm1 - zmm8[0]
float var_218 = zmm12[0]
float var_188 = zmm12[0]
zmm7[0] = zmm7[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm3
zmm8[0] = zmm8[0] - zmm7[0]
zmm13[0] = zmm13[0] - zmm1 * zmm14[0]
zmm8[0] = zmm8[0] * zmm14[0]
zmm13[0] = zmm13[0] + zmm7[0]
zmm10[0] = zmm10[0] - zmm8[0]
float var_214 = zmm13[0]
zmm10[0] = zmm10[0] + zmm9[0]
float var_184 = zmm13[0]
float var_180 = zmm10[0]
arg1[1].d = 0

if (*(arg1 + 0xc) != result_4.d)
    sub_14090a730(arg1, result_4.d)

void* result = sx.q(result_2)
void* var_128 = nullptr
int32_t var_120 = 0
int64_t* r15 = r13
int32_t var_11c = 1
void* r12_1 = &r13[result]

if (r13 != r12_1)
    do
        int64_t* r14_1 = *r15
        void var_1f8
        result = (*(*r14_1 + 0x108))(r14_1, &var_1f8)
        
        if ((*result & 1) != 0)
            void var_150
            (*(*r14_1 + 0x90))(r14_1, &var_150)
            float var_1d0[0x4]
            int32_t* rax_7 = (*(*r14_1 + 0x90))(r14_1, &var_1d0)
            zmm9 = var_1f4
            float zmm5_1 = zmm11[0]
            float zmm2 = zmm15[0]
            zmm6 = rax_7[5]
            zmm8 = rax_7[4]
            zmm6[0] = zmm6[0] + zmm6[0]
            float zmm4_1 = rax_7[6]
            zmm8[0] = zmm8[0] + zmm8[0]
            zmm4_1 = zmm4_1 + zmm4_1
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm1 = zmm9[0]
            zmm3 = zmm9[0]
            zmm2 = zmm2 * zmm6[0]
            zmm14[0] = zmm14[0] - 0.5f
            zmm15[0] = zmm15[0] * zmm8[0]
            zmm5_1 = zmm5_1 * zmm6[0] + zmm15[0]
            zmm3 = zmm3 * zmm8[0]
            zmm15[0] = zmm15[0] * zmm4_1
            zmm5_1 = zmm5_1 + zmm1 * zmm4_1
            zmm1 = zmm11[0]
            zmm3 = zmm3 - zmm15[0]
            zmm14[0] = zmm14[0] * zmm6[0]
            zmm3 = zmm3 * zmm14[0] + zmm14[0]
            zmm11[0] = zmm11[0] * zmm8[0]
            zmm11[0] = zmm11[0] * zmm4_1
            zmm2 = zmm2 - zmm11[0]
            zmm14[0] = zmm14[0] * zmm4_1
            zmm3 = zmm3 + zmm1 * zmm5_1
            zmm1 = zmm9[0]
            zmm14[0] = zmm14[0] * zmm8[0]
            zmm2 = zmm2 * zmm14[0] + zmm14[0]
            zmm9[0] = zmm9[0] * zmm6[0]
            zmm11[0] = zmm11[0] - zmm9[0]
            zmm0 = zmm15
            zmm0[0] = zmm0[0] * zmm5_1
            zmm15 = zmm13
            zmm15[0] = zmm15[0] + zmm3
            zmm11[0] = zmm11[0] * zmm14[0]
            zmm10[0] = zmm10[0] + zmm2 + zmm1 * zmm5_1
            zmm11[0] = zmm11[0] + zmm14[0]
            float var_1f0_1 = zmm10[0]
            zmm11[0] = zmm11[0] + zmm0[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            float var_160[0x4]
            float* rax_8
            rax_8, zmm2, zmm6, zmm10, zmm11 = sub_1417c7990(&var_198, &var_160, rax_7)
            zmm7 = *rax_8
            zmm8 = rax_8[1]
            float var_204_1 = rax_8[2][0]
            float var_200_1 = rax_8[3][0]
            float var_1ec_1 = zmm7[0]
            float var_1e8_1 = zmm8[0]
            int32_t result_1
            (*(*r14_1 + 0x40))(r14_1, &result_1)
            int64_t var_1c0_1 = 0
            var_1d0 = data_142d3f660
            int32_t var_1b8_1 = 0
            int32_t var_1b0
            physx::PxGeometryQuery::getWorldBounds(&var_1b0, &result_1, zmm2)
            zmm12 = var_1b0
            int32_t var_1ac
            zmm13 = var_1ac
            float var_1a4
            zmm1 = var_1a4 - zmm12[0]
            int32_t var_19c
            float zmm5_2[0x4] = var_19c
            float var_1a0
            zmm2 = var_1a0 - zmm13[0]
            int32_t var_1a8
            zmm14 = var_1a8
            zmm12[0] = zmm12[0] + var_1a4
            int64_t rax_10 = *r14_1
            zmm13[0] = zmm13[0] + var_1a0
            zmm5_2[0] = zmm5_2[0] - zmm14[0]
            zmm14[0] = zmm14[0] + zmm5_2[0]
            zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
            float var_1fc_1 = _mm_sqrt_ss(0, (zmm2 * zmm2 + zmm1 * zmm1 + zmm5_2[0]) * 0.25f)[0]
            zmm0 = 0x3f000000
            zmm12[0] = zmm12[0] * 0.5f
            zmm13[0] = zmm13[0] * 0.5f
            zmm14[0] = zmm14[0] * 0.5f
            uint64_t rbx = zx.q((*(rax_10 + 0xc0))(zmm0))
            int32_t rax_12 = var_120
            void var_130
            
            if (rbx.d s> rax_12)
                var_120 = rbx.d
                
                if (rbx.d s> var_11c)
                    zmm0 = sub_140809610(&var_130, rax_12)
            else if (rbx.d s< rax_12)
                int32_t rsi_2 = rax_12 - rbx.d
                
                if (rax_12 != rbx.d)
                    int32_t rcx_12 = rax_12 - rsi_2
                    
                    if (rcx_12 != rbx.d)
                        void* r9_1 = &var_130
                        
                        if (var_128 != 0)
                            r9_1 = var_128
                        
                        memmove(r9_1 + (rbx << 3), r9_1 + (sx.q(rsi_2 + rbx.d) << 3), 
                            (rcx_12 - rbx.d) << 3)
                        rax_12 = var_120
                    
                    var_120 = rax_12 - rsi_2
                    zmm0 = sub_140d3e790(&var_130)
            
            void* rdx_11 = &var_130
            
            if (var_128 != 0)
                rdx_11 = var_128
            
            (*(*r14_1 + 0xc8))(r14_1, rdx_11, zx.q((rbx << 3).d), 0, var_218, var_210, var_208, 
                var_200_1)
            int32_t var_178
            __builtin_strncpy(&var_178, "333?333?", 8)
            int32_t var_170_1 = 0x3e99999a
            int32_t rsi_3
            
            if (rbx.d == 0)
                int32_t var_168
                rsi_3 = var_168
                zmm9 = var_178.o
            else
                void* rcx_18 = &var_130
                
                if (var_128 != 0)
                    rcx_18 = var_128
                
                int64_t* rbx_1 = *rcx_18
                (*(*rbx_1 + 0x50))(rbx_1)
                (*(*rbx_1 + 0x40))(rbx_1)
                (*(*rbx_1 + 0x60))(rbx_1)
                var_1d0[3] = (*(*rbx_1 + 0x88))(rbx_1)
                int32_t rax_24 = (*(*rbx_1 + 0x98))(rbx_1)
                zmm9 = var_1d0
                rsi_3 = rax_24
                zmm9[0] = zmm0[0]
                zmm6 = var_1f0_1
                float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
                temp0_3[0] = zmm0[0]
                zmm7 = var_1ec_1
                float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
                temp0_4[0] = zmm0[0]
                zmm8 = var_1e8_1
                zmm9 = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
                var_1d0 = zmm9
            
            result = sx.q(result_1)
            int32_t var_114
            float var_110
            float var_10c
            float var_108
            float var_104
            float var_100
            int32_t var_fc
            int64_t var_f8
            char var_f0
            int32_t* rbx_2
            
            if (result.d u<= 6)
                switch (result)
                    case nullptr
                        int32_t* rax_25 = j_sub_140a82f30(8)
                        rbx_2 = rax_25
                        
                        if (rax_25 == 0)
                        label_142243ebe:
                            rbx_2 = nullptr
                            goto label_142243ec1
                        
                        rax_25[1] = var_114[0]
                        *rax_25 = 0
                    label_142243ec1:
                        int64_t r14_2 = sx.q(arg1[1].d)
                        int32_t rax_31 = (r14_2 + 1).d
                        arg1[1].d = rax_31
                        
                        if (rax_31 s> *(arg1 + 0xc))
                            sub_14090a6a0(arg1)
                        
                        int32_t* rcx_32 = r14_2 * 0x60 + *arg1
                        *rcx_32 = zmm7[0]
                        result = &rcx_32[0xa]
                        rcx_32[1] = zmm8[0]
                        rcx_32[2] = var_204_1[0]
                        rcx_32[3] = var_200_1
                        rcx_32[4] = zmm11[0]
                        rcx_32[5] = zmm15[0]
                        rcx_32[6] = zmm6[0]
                        *result = zmm9
                        *(result + 0x10) = rsi_3
                        *(rcx_32 + 0x40) = rbx_2
                        rcx_32[0x12] = zmm12[0]
                        rcx_32[0x13] = zmm13[0]
                        rcx_32[0x14] = zmm14[0]
                        rcx_32[0x15] = var_1fc_1[0]
                        *(rcx_32 + 0x58) = 0
                        *(rcx_32 + 0x20) = result
                    case 2
                        int32_t* rax_26 = j_sub_140a82f30(0xc)
                        rbx_2 = rax_26
                        
                        if (rax_26 == 0)
                            goto label_142243ebe
                        
                        rax_26[1] = var_114[0]
                        rax_26[2] = var_110
                        *rax_26 = 2
                        goto label_142243ec1
                    case 3
                        int32_t* rax_27 = j_sub_140a82f30(0x10)
                        rbx_2 = rax_27
                        
                        if (rax_27 == 0)
                            goto label_142243ebe
                        
                        *rax_27 = 3
                        rax_27[1] = var_114[0]
                        rax_27[2] = var_110
                        rax_27[3] = var_10c
                        goto label_142243ec1
                    case 4
                        int32_t* rax_28 = j_sub_140a82f30(0x30)
                        rbx_2 = rax_28
                        
                        if (rax_28 == 0)
                            goto label_142243ebe
                        
                        *rax_28 = 4
                        rax_28[1] = var_114[0]
                        rax_28[2] = var_110
                        rax_28[3] = var_10c[0]
                        rax_28[4] = var_108
                        rax_28[5] = var_104[0]
                        rax_28[6] = var_100
                        rax_28[7] = var_fc[0]
                        *(rax_28 + 0x20) = var_f8
                        rax_28[0xa].b = var_f0
                        *(rax_28 + 0x29) = 0
                        *(rax_28 + 0x2b) = 0
                        goto label_142243ec1
                    case 5
                        int32_t* rax_30 = j_sub_140a82f30(0x30)
                        rbx_2 = rax_30
                        
                        if (rax_30 == 0)
                            goto label_142243ebe
                        
                        *rax_30 = 5
                        rax_30[1] = var_114[0]
                        rax_30[2] = var_110
                        rax_30[3] = var_10c[0]
                        rax_30[4] = var_108
                        rax_30[5] = var_104[0]
                        rax_30[6] = var_100
                        rax_30[7] = var_fc[0]
                        rax_30[8].b = var_f8.b
                        *(rax_30 + 0x21) = 0
                        *(rax_30 + 0x23) = 0
                        *(rax_30 + 0x28) = var_f0.q
                        goto label_142243ec1
                    case 6
                        int32_t* rax_29 = j_sub_140a82f30(0x20)
                        rbx_2 = rax_29
                        
                        if (rax_29 == 0)
                            goto label_142243ebe
                        
                        rax_29[4] = var_108[0]
                        rax_29[5] = var_104
                        rax_29[6] = var_100
                        *(rax_29 + 8) = var_110.q
                        *rax_29 = 6
                        rax_29[7].b = var_fc.b
                        *(rax_29 + 0x1d) = 0
                        *(rax_29 + 0x1f) = 0
                        goto label_142243ec1
            zmm11 = var_208
            zmm15 = var_20c
            zmm14 = var_210
            zmm13 = var_214
            zmm12 = var_218
        
        r15 = &r15[1]
    while (r15 != r12_1)
    
    r13 = var_1e0
    
    if (var_128 != 0)
        result = sub_140a74f90(var_128)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_238)
return result
