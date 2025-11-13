// 函数: sub_141af41d0
// 地址: 0x141af41d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t* result_1 = arg2
int32_t* r14 = arg1 + 0x28
int32_t rax_2 = 0
uint64_t rsi
rsi.b = 0
int32_t var_84 = 0
int64_t rbx = 0
char var_138 = 0
int64_t* r12 = arg3
int64_t var_110 = 0
arg3.b = 0
int32_t var_a8
void* rdx = &var_a8 - arg1
char var_58 = 0
void* var_118 = rdx
int128_t zmm6 = zx.o(0)
int64_t var_108

do
    int32_t rdi_1 = 1 << rsi.b
    int32_t rcx_2 = *(arg1 + 0x24) & rdi_1
    
    if (rcx_2 != 0)
        if (zmm6.d f== *r14)
            goto label_141af4425
        
        goto label_141af4261
    
    uint128_t var_f8
    uint128_t zmm0
    
    if ((*(arg1 + 0x70) & rdi_1) == 0)
    label_141af4261:
        
        if (rcx_2 != 0)
            zmm0.d = r14[-0xa].d f/ *r14
            *(rdx + r14 - 0x28) = zmm0.d
            rax_2 = var_84 | rdi_1
            var_84 = rax_2
    else
    label_141af4425:
        
        if (*(arg1 + 0x9c) == 0)
            *(arg1 + 0x98) = 0
            void* r15_1 = arg1 + 0x74
            int32_t r9_2 = 0
            *(arg1 + 0x9c) = 1
            void* rdx_4 = r12[2]
            int32_t r8_1 = -1
            int32_t var_11c_1 = 0
            int64_t rbx_1
            
            if (rdx_4 == 0)
                rbx_1 = 0xffffffff.q
            else
                sub_140d3a3a0(&var_108, rdx_4)
                rbx_1 = var_108
                int32_t var_120_1
                var_120_1.q = rbx_1
                r9_2 = var_11c_1
                r8_1 = var_120_1
            
            int64_t* r10_1 = *r12
            int32_t* rcx_11 = r10_1[3]
            void* rdx_6 = sx.q(r10_1[4].d) * 0x2c + rcx_11
            int32_t rax_18
            
            if (rcx_11 == rdx_6)
            label_141af44cc:
                uint128_t var_d0
                (*(*r10_1 + 0x28))(r10_1, &var_d0, r12[2], r12[3], var_138)
                float var_c0[0x4]
                int32_t var_b0
                
                if (r12[3] != 0)
                    int64_t* rsi_2 = *r12 + 0x18
                    int64_t r15_2 = sx.q(rsi_2[1].d)
                    int32_t rax_16 = (r15_2 + 1).d
                    rsi_2[1].d = rax_16
                    
                    if (rax_16 s> *(rsi_2 + 0xc))
                        sub_140ac0cd0(rsi_2)
                    
                    r15_1 = arg1 + 0x74
                    int64_t* rcx_15 = r15_2 * 0x2c + *rsi_2
                    rsi = zx.q(var_138)
                    *rcx_15 = rbx_1
                    *(rcx_15 + 8) = var_d0
                    *(rcx_15 + 0x18) = var_c0
                    rcx_15[5].d = var_b0
                
                rax_18 = var_b0
                var_f8 = var_d0
                float var_e8_1[0x4] = var_c0
            else
                while (*rcx_11 != r8_1 || rcx_11[1] != r9_2)
                    rcx_11 = &rcx_11[0xb]
                    
                    if (rcx_11 == rdx_6)
                        goto label_141af44cc
                
                var_f8 = *(rcx_11 + 8)
                float var_e8_2[0x4] = *(rcx_11 + 0x18)
                rax_18 = rcx_11[0xa]
            
            int32_t var_d8_1 = rax_18
            zmm6 = sub_141b294b0(&var_f8, r15_1)
            rdx = var_118
            arg3 = zx.q(var_58)
            rbx = var_110
        
        *(rdx + r14 - 0x28) = r14[0x13]
        rax_2 = var_84 | rdi_1
        var_84 = rax_2
    
    if ((*(arg1 + 0x70) & rdi_1) != 0)
        zmm0 = r14[9]
        
        if ((rax_2 & rdi_1) != 0)
            zmm0.d = zmm0.d f+ (&var_a8)[rbx]
        
        (&var_a8)[rbx] = zmm0.d
        rax_2 = var_84 | rdi_1
        var_84 = rax_2
    
    if ((rax_2 & rdi_1) == 0)
        float var_80[0x2][0x4]
        
        if (arg3.b == 0)
            int64_t* rcx_3 = *r12
            int32_t var_5c_1 = 0
            var_58 = 1
            (*(*rcx_3 + 0x28))(rcx_3, &var_f8, r12[2], r12[3], var_138)
            zmm6 = sub_141b294b0(&var_f8, &var_80)
            rdx = var_118
            arg3 = zx.q(var_58)
        
        (&var_a8)[rbx] = var_80[0][rbx]
        rax_2 = var_84 | rdi_1
        var_84 = rax_2
    
    rsi.b += 1
    rbx += 1
    r14 = &r14[1]
    var_138 = rsi.b
    var_110 = rbx
while (rsi.b u< 9)

uint64_t* result = result_1
float zmm1[0x4] = var_a8
*result = data_143dbb1f8.q
result[1].d = data_143dbb200
*(result + 0xc) = data_143dbb208
*(result + 0x14) = data_143dbb210
result[3] = data_14399f668.q
int32_t rax_10 = data_14399f670
int32_t var_a0
int32_t var_128 = var_a0.d
int32_t var_a4
*result = (_mm_unpacklo_ps(zmm1, var_a4)).q
int32_t var_9c
result_1.d = var_9c.d
result[4].d = rax_10
int32_t var_94
int32_t var_128_1 = var_94.d
int32_t var_98
result_1:4.d = var_98[0]
result[1].d = var_128
int32_t* rax_12 = sub_140ada0c0(&var_108, &result_1)
*(result + 0xc) = *rax_12
int32_t rcx_6 = rax_12[2]
int32_t var_90
int32_t var_8c
float temp0_1[0x4] = _mm_unpacklo_ps(var_90, var_8c)
int32_t var_88
int32_t var_128_2 = var_88.d
*(result + 0x14) = rcx_6
result[3] = temp0_1.q
result[4].d = var_128_2
__security_check_cookie(rax_1 ^ &var_158)
return result
