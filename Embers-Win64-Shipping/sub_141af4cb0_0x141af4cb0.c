// 函数: sub_141af4cb0
// 地址: 0x141af4cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t rax_2 = 0
uint64_t rbx
rbx.b = 0
int32_t* result = arg2
arg2.b = 0
float var_58[0x4] = arg4
int64_t r12 = 0
char var_90 = 0
int32_t var_118
void* r13 = &var_118 - arg1
int32_t var_f4 = 0
void* var_168 = r13
int32_t* r14 = arg1 + 0x28
int64_t* rsi = arg3
char var_1b8 = 0
float var_68[0x4] = arg5
int128_t zmm9 = zx.o(0)
float var_1a8
float var_198[0x4]
void var_158

do
    int32_t rdi_1 = 1 << rbx.b
    int32_t rcx_2 = rdi_1 & *(arg1 + 0x24)
    
    if (rcx_2 != 0)
        if (zmm9.d f== *r14)
            goto label_141af4fb4
        
        goto label_141af4d50
    
    int32_t var_1b0
    float var_e8[0x4]
    float var_c8[0x4]
    float zmm0[0x4]
    
    if ((*(arg1 + 0x70) & rdi_1) == 0)
    label_141af4d50:
        
        if (rcx_2 != 0)
            zmm0 = r14[-0xa]
            zmm0[0] = zmm0[0] f/ *r14
            *(r14 + r13 - 0x28) = zmm0[0]
            rax_2 = var_f4 | rdi_1
            var_f4 = rax_2
    else
    label_141af4fb4:
        
        if (*(arg1 + 0x9c) == 0)
            *(arg1 + 0x98) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x9c) = 1
            int32_t r8_1 = -1
            void* rdx_4 = rsi[2]
            var_1b0 = 0xffffffff
            int32_t var_1ac_1 = 0
            int64_t rbx_2
            
            if (rdx_4 == 0)
                rbx_2 = var_1b0.q
            else
                int64_t var_178
                sub_140d3a3a0(&var_178, rdx_4)
                rbx_2 = var_178
                var_1b0.q = rbx_2
                r9_2 = var_1ac_1
                r8_1 = var_1b0
            
            int64_t* r10_1 = *rsi
            int32_t* rax_12 = r10_1[3]
            void* rcx_13 = &rax_12[sx.q(r10_1[4].d) * 0x10]
            
            if (rax_12 == rcx_13)
            label_141af504f:
                (*(*r10_1 + 0x28))(r10_1, &var_e8, rsi[2], rsi[3], var_1b8, var_1b0)
                
                if (rsi[3] != 0)
                    void* rsi_1 = *rsi
                    int64_t r13_1 = sx.q(*(rsi_1 + 0x20))
                    int32_t rax_14 = (r13_1 + 1).d
                    *(rsi_1 + 0x20) = rax_14
                    
                    if (rax_14 s> *(rsi_1 + 0x24))
                        sub_1405c4fe0(rsi_1 + 0x18)
                    
                    r13 = var_168
                    int64_t* rax_17 = (r13_1 << 6) + *(rsi_1 + 0x18)
                    rsi = arg3
                    *rax_17 = rbx_2
                    *(rax_17 + 0x10) = var_e8
                    float var_d8[0x4]
                    *(rax_17 + 0x20) = var_d8
                    *(rax_17 + 0x30) = var_c8
                
                zmm0 = var_e8
            else
                while (*rax_12 != r8_1 || rax_12[1] != r9_2)
                    rax_12 = &rax_12[0x10]
                    
                    if (rax_12 == rcx_13)
                        goto label_141af504f
                
                zmm0 = *(rax_12 + 0x10)
                *(rax_12 + 0x20)
                *(rax_12 + 0x30)
            
            var_198 = zmm0
            void var_14c
            int32_t* rax_18
            rax_18, arg4, arg5, zmm9 = sub_140adf5d0(&var_198, &var_14c)
            int32_t var_188
            sub_140ad3dc0(rax_18, &var_188)
            int32_t var_184
            float zmm6_2[0x4] = var_184
            int32_t zmm3_3 = var_188
            rbx = zx.q(var_1b8)
            arg2 = zx.q(var_90)
            float temp0_21[0x4] = _mm_shuffle_ps(arg4, arg4, 0x55)
            float temp0_22[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
            float temp0_23[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
            float temp0_24[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xe1)
            temp0_23[0] = temp0_21[0]
            int32_t var_180
            temp0_24[0] = var_180
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
            temp0_25[0] = temp0_22[0]
            temp0_26[0] = arg5[0]
            float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x27)
            float temp0_28[0x4] = _mm_shuffle_ps(arg5, arg5, 0xaa)
            temp0_27[0] = zmm3_3
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x27)
            float var_120_2 = temp0_28[0]
            temp0_29[0] = _mm_shuffle_ps(arg5, arg5, 0x55)[0]
            *(arg1 + 0x74) = _mm_shuffle_ps(temp0_27, temp0_27, 0x39)
            var_c8[1] = 0x1ff
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x39)
            var_c8[0] = var_120_2
            zmm0 = zx.o(var_c8[0].q)
            *(arg1 + 0x84) = temp0_32
            *(arg1 + 0x94) = zmm0.q
        
        *(r14 + r13 - 0x28) = r14[0x13]
        rax_2 = var_f4 | rdi_1
        var_f4 = rax_2
    
    if ((*(arg1 + 0x70) & rdi_1) != 0)
        zmm0 = r14[9]
        
        if ((rax_2 & rdi_1) != 0)
            zmm0[0] = zmm0[0] f+ (&var_118)[r12]
        
        (&var_118)[r12] = zmm0[0]
        rax_2 = var_f4 | rdi_1
        var_f4 = rax_2
    
    if ((rax_2 & rdi_1) == 0)
        float var_b8[0x4]
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rsi
            var_90 = 1
            (*(*rcx_3 + 0x28))(rcx_3, &var_e8, rsi[2], rsi[3], var_1b8, var_1b0)
            var_198 = var_e8
            int32_t* rax_6
            rax_6, arg5, zmm9 = sub_140adf5d0(&var_198, &var_158)
            sub_140ad3dc0(rax_6, &var_1a8)
            int32_t var_1a4
            arg4 = var_1a4
            float zmm3_1 = var_1a8
            float temp0_1[0x4] = _mm_shuffle_ps(arg5, arg5, 0x55)
            arg2.b = 1
            float temp0_2[0x4] = _mm_shuffle_ps(arg5, arg5, 0xaa)
            float temp0_3[0x4] = _mm_shuffle_ps(arg5, arg5, 0xe1)
            float temp0_4[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
            temp0_3[0] = temp0_1[0]
            int32_t var_1a0
            temp0_4[0] = var_1a0
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
            temp0_5[0] = temp0_2[0]
            temp0_6[0] = var_c8[0]
            float temp0_7[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xaa)
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
            temp0_8[0] = zmm3_1
            float var_120_1 = temp0_7[0]
            temp0_9[0] = _mm_shuffle_ps(var_c8, var_c8, 0x55)[0]
            var_c8[1] = 0x1ff
            var_c8[0] = var_120_1
            zmm0 = zx.o(var_c8[0].q)
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
            var_b8 = temp0_11
            float var_a8_1[0x4] = temp0_12
            int64_t var_98_1 = zmm0.q
        
        (&var_118)[r12] = var_b8[r12]
        rax_2 = var_f4 | rdi_1
        var_f4 = rax_2
    
    rbx.b += 1
    r12 += 1
    r14 = &r14[1]
    var_1b8 = rbx.b
while (rbx.b u< 9)

float zmm1[0x4] = data_143f2c440
float zmm2[0x4] = zx.o(0)
zmm1[0].q = zmm2 u>> 0x40
*result = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(result + 0x10) = zmm2
*(result + 0x20) = __andps_xmmxud_memxud(data_143f2c440, data_143f2c450)
int32_t var_10c
var_1a8 = var_10c[0]
int32_t var_104
float var_1a0_1 = var_104[0]
int32_t var_108
float var_1a4_1 = var_108[0]
int512_t zmm7
int512_t zmm8
zmm7, zmm8 = sub_140ade170(sub_140ada0c0(&var_158, &var_1a8), &var_198)
float zmm4_2[0x4] = var_118
float zmm5_2[0x4] = var_198
zmm8.o = var_68
zmm7.o = var_58
int32_t var_114
float temp0_15[0x4] = _mm_unpacklo_ps(var_114, zmm9.q)
int32_t var_110
float temp0_17[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_2, var_110), temp0_15[0].q)
int32_t var_fc
float temp0_18[0x4] = _mm_unpacklo_ps(var_fc, zmm9.q)
int32_t var_100
int32_t var_f8
*(result + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(var_100, var_f8), temp0_18[0].q)
*result = zmm5_2
*(result + 0x10) = temp0_17
__security_check_cookie(rax_1 ^ &var_1d8)
return result
