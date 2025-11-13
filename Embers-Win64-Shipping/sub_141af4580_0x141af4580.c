// 函数: sub_141af4580
// 地址: 0x141af4580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t rax_2 = 0
uint128_t* result_1 = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_b0 = 0
int64_t r12 = 0
int32_t var_dc = 0
char var_1c8 = 0
int32_t var_100
void* r13 = &var_100 - arg1
float zmm8[0x4]
float var_68[0x4] = zmm8
void* var_170 = r13
int32_t* r14 = arg1 + 0x28
int64_t* rsi = arg3
int64_t var_160
uint128_t zmm0

do
    int32_t rdi_1 = 1 << rbx.b
    int32_t rcx_2 = rdi_1 & *(arg1 + 0x24)
    
    if (rcx_2 != 0)
        if (0f f== *r14)
            goto label_141af4853
        
        goto label_141af4620
    
    int32_t var_1c0
    float var_150[0x4]
    int64_t var_144
    int32_t var_130
    int32_t var_128
    float var_118
    int32_t var_108
    
    if ((*(arg1 + 0x70) & rdi_1) == 0)
    label_141af4620:
        
        if (rcx_2 != 0)
            zmm0.d = r14[-0xa].d f/ *r14
            *(r14 + r13 - 0x28) = zmm0.d
            rax_2 = var_dc | rdi_1
            var_dc = rax_2
    else
    label_141af4853:
        
        if (*(arg1 + 0x9c) == 0)
            *(arg1 + 0x98) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x9c) = 1
            int32_t r8_1 = -1
            void* rdx_2 = rsi[2]
            var_1c0 = 0xffffffff
            int32_t var_1bc_1 = 0
            int64_t rbx_1
            
            if (rdx_2 == 0)
                rbx_1 = var_1c0.q
            else
                sub_140d3a3a0(&var_160, rdx_2)
                rbx_1 = var_160
                var_1c0.q = rbx_1
                r9_2 = var_1bc_1
                r8_1 = var_1c0
            
            int64_t* r10_1 = *rsi
            int32_t* rcx_10 = r10_1[3]
            void* rdx_4 = sx.q(r10_1[4].d) * 0x2c + rcx_10
            int32_t rax_17
            float zmm1[0x4]
            
            if (rcx_10 == rdx_4)
            label_141af48ec:
                (*(*r10_1 + 0x28))(r10_1, &var_150, rsi[2], rsi[3], var_1c8, var_1c0)
                
                if (rsi[3] != 0)
                    void* rsi_1 = *rsi
                    int64_t r13_1 = sx.q(*(rsi_1 + 0x20))
                    int32_t rax_15 = (r13_1 + 1).d
                    *(rsi_1 + 0x20) = rax_15
                    
                    if (rax_15 s> *(rsi_1 + 0x24))
                        sub_140ac0cd0(rsi_1 + 0x18)
                    
                    r13 = var_170
                    int64_t* rcx_14 = r13_1 * 0x2c + *(rsi_1 + 0x18)
                    rsi = arg3
                    *rcx_14 = rbx_1
                    *(rcx_14 + 8) = var_150
                    *(rcx_14 + 0x18) = var_144:4.o
                    rcx_14[5].d = var_130
                
                zmm0 = var_150
                rax_17 = var_130
                zmm1 = var_144:4.o
            else
                while (*rcx_10 != r8_1 || rcx_10[1] != r9_2)
                    rcx_10 = &rcx_10[0xb]
                    
                    if (rcx_10 == rdx_4)
                        goto label_141af48ec
                
                zmm0 = *(rcx_10 + 8)
                rax_17 = rcx_10[0xa]
                zmm1 = *(rcx_10 + 0x18)
            
            rbx = zx.q(var_1c8)
            arg2 = zx.q(var_b0)
            zmm8 = zmm0.d
            zmm7 = zmm0:0xc.d
            float temp0_12[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
            int32_t var_12c_1 = 0x1ff
            float zmm4 = zmm1[0]
            temp0_12[0] = zmm0:4.d[0]
            float zmm5 = zmm1[2]
            temp0_13[0] = zmm4
            float zmm3 = zmm1[1]
            zmm6 = zmm1[3]
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
            temp0_14[0] = zmm0:8.d[0]
            temp0_15[0] = zmm5
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
            temp0_16[0] = zmm3
            var_108 = rax_17.d
            temp0_17[0] = zmm6.d
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
            *(arg1 + 0x74) = temp0_18
            var_130 = var_108
            *(arg1 + 0x84) = temp0_19
            *(arg1 + 0x94) = var_130.q
            var_128.o = temp0_18
            var_118.o = temp0_19
        
        *(r14 + r13 - 0x28) = r14[0x13]
        rax_2 = var_dc | rdi_1
        var_dc = rax_2
    
    if ((*(arg1 + 0x70) & rdi_1) != 0)
        zmm0 = r14[9]
        
        if ((rax_2 & rdi_1) != 0)
            zmm0.d = zmm0.d f+ (&var_100)[r12]
        
        (&var_100)[r12] = zmm0.d
        rax_2 = var_dc | rdi_1
        var_dc = rax_2
    
    if ((rax_2 & rdi_1) == 0)
        float var_d8[0x4]
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rsi
            var_b0 = 1
            (*(*rcx_3 + 0x28))(rcx_3, &var_128, rsi[2], rsi[3], var_1c8, var_1c0)
            arg2.b = 1
            zmm8 = var_128
            int32_t var_11c
            zmm7 = var_11c
            float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
            int32_t var_124
            temp0_1[0] = var_124[0]
            temp0_2[0] = var_118
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
            int32_t var_120
            temp0_3[0] = var_120[0]
            float var_110
            temp0_4[0] = var_110
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
            float var_114
            temp0_5[0] = var_114
            var_130 = var_108.d
            int32_t var_10c
            temp0_6[0] = var_10c.d
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
            int32_t var_84_1 = 0x1ff
            var_150 = temp0_7
            var_144:4.o = temp0_8
            var_d8 = temp0_7
            float var_c8_1[0x4] = temp0_8
            uint64_t var_b8_1 = var_130.q
        
        (&var_100)[r12] = var_d8[r12]
        rax_2 = var_dc | rdi_1
        var_dc = rax_2
    
    rbx.b += 1
    r12 += 1
    r14 = &r14[1]
    var_1c8 = rbx.b
while (rbx.b u< 9)

uint128_t* result = result_1
__builtin_memset(result, 0, 0x24)
int32_t var_e0
int32_t var_178 = var_e0.d
int32_t var_f0
result_1:4.d = var_f0.d
int32_t var_f4
result_1.d = var_f4[0]
int32_t var_f8
int32_t var_168 = var_f8.d
int32_t var_ec
float var_1b0 = var_ec[0]
int32_t* rax_9 = sub_140ada0c0(&var_160, &result_1)
uint64_t var_144_1 = *rax_9
int32_t var_148 = var_168
int32_t rax_11 = rax_9[2]
int32_t var_fc
zmm0.q = (_mm_unpacklo_ps(var_100, var_fc.q)).q
int32_t var_13c = rax_11
*result = zmm0
int32_t var_e8
int32_t var_e4
result[1] = _mm_unpacklo_pd(var_144_1:4.o, _mm_unpacklo_ps(var_e8, var_e4[0].q)[0].q)
result[2].d = var_178
__security_check_cookie(rax_1 ^ &var_1e8)
return result
