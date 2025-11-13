// 函数: sub_141775610
// 地址: 0x141775610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_130
int32_t* r10 = &var_130
int32_t var_140
int32_t* r11 = &var_140
int32_t rcx = *arg3
int64_t var_170
void* rdx = &var_170 - arg1
int32_t* r9 = arg1 + 0x34
int64_t var_164
void* rdi = &var_164 - arg1
int32_t r15 = arg3[1]
int32_t r8 = arg3[2]
int32_t r14 = 0
int32_t arg_20 = rcx
int32_t var_150
void* rax_1 = &var_150 - arg1
int32_t var_178 = r15
int32_t var_174 = r8
void* var_f0 = rdx
void* var_e8 = rdi
int64_t i_1 = 3
uint32_t result_1[0x4]
uint32_t zmm1[0x4]
uint32_t result[0x4]
int64_t i

do
    __builtin_memset(&var_170, 0, 0x18)
    *(rdx + r9 - 0x34) = 1
    int32_t r13_2 = var_170:4.d + r15
    int32_t rsi_2 = var_170.d + rcx
    int32_t var_168
    int32_t rdx_2 = var_168 + r8
    *(rdi + r9 - 0x34) = 1
    int32_t rdi_2 = rcx - var_164.d
    int32_t r15_1 = r15 - var_164:4.d
    int32_t var_15c
    int32_t r12_2 = r8 - var_15c
    int32_t var_110 = rdi_2
    int32_t var_10c_1 = r15_1
    int32_t var_108_1 = r12_2
    bool cond:2_1 = *(&var_110 - arg1 + r9 - 0x34) s< 0
    var_150 = rsi_2
    int32_t var_14c_1 = r13_2
    int32_t rcx_1
    
    if (not(cond:2_1))
        rcx_1 = *(arg2 + 4)
    
    int32_t rax_32
    
    if (not(cond:2_1)
            && *(sx.q((rdi_2 * rcx_1 + r15_1) * *(arg2 + 8) + r12_2) + *(arg2 + 0x10)) != 0)
        if (*(rax_1 + r9 - 0x34) s>= r9[-3]
                || *(sx.q((rsi_2 * rcx_1 + r13_2) * *(arg2 + 8) + rdx_2) + *(arg2 + 0x10)) == 0)
            *r11 = *r9
            rax_32 = (*(arg1 + 0x44) * rdi_2 + r15_1) * *(arg1 + 0x48) + r12_2
            goto label_14177585e
        
        int32_t rsi_3 = rsi_2 * *(arg1 + 0x44)
        int32_t rdi_3 = rdi_2 * *(arg1 + 0x44)
        int64_t r8_3 = *(arg1 + 0x50)
        *r11 = *r9
        r11 = &r11[1]
        result = *(r8_3 + (sx.q((rsi_3 + r13_2) * *(arg1 + 0x48) + rdx_2) << 2))
        int32_t rax_24 = (r15_1 + rdi_3) * *(arg1 + 0x48)
        zmm1 = _mm_and_ps(result, 0x7fffffff)
        r14 += 1
        uint32_t zmm3[0x4] = *(r8_3 + (sx.q(rax_24 + r12_2) << 2))
        result_1 = _mm_and_ps(zmm3, 0x7fffffff)
        
        if (zmm1[0] f>= result_1[0])
            *r10 = zmm3[0]
        else
            *r10 = result[0]
        
        r10 = &r10[1]
    else if (*(rax_1 + r9 - 0x34) s< r9[-3]
            && *(sx.q((rsi_2 * *(arg2 + 4) + r13_2) * *(arg2 + 8) + rdx_2) + *(arg2 + 0x10)) != 0)
        *r11 = *r9
        rax_32 = (*(arg1 + 0x44) * rsi_2 + r13_2) * *(arg1 + 0x48) + rdx_2
    label_14177585e:
        r14 += 1
        r11 = &r11[1]
        *r10 = *(*(arg1 + 0x50) + (sx.q(rax_32) << 2))
        r10 = &r10[1]
    rcx = arg_20
    r9 = &r9[1]
    i = i_1
    i_1 -= 1
    r15 = var_178
    r8 = var_174
    rdx = var_f0
    rdi = var_e8
while (i != 1)
uint32_t zmm7[0x4]
uint32_t var_58[0x4] = zmm7
uint32_t zmm11[0x4]
uint32_t var_98[0x4] = zmm11
uint32_t zmm12[0x4]
uint32_t var_a8[0x4] = zmm12
uint32_t zmm13[0x4]
uint32_t var_b8[0x4] = zmm13
uint32_t zmm14[0x4]
uint32_t var_c8[0x4] = zmm14
uint32_t zmm15[0x4]
uint32_t var_d8[0x4] = zmm15
uint32_t zmm10[0x4] =
    *(*(arg1 + 0x50) + (sx.q((*(arg1 + 0x44) * rcx + r15) * *(arg1 + 0x48) + r8) << 2))

if (r14 != 1)
    zmm15 = var_140
    int32_t var_12c
    zmm13 = var_12c
    zmm11 = var_130
    int32_t var_13c
    zmm14 = var_13c
    uint32_t zmm6_1[0x4]
    result_1, zmm6_1 = sub_14175f6d0(zmm10, zmm11, zmm13, zmm15, zmm14[0])
    result = result_1
    
    if (r14 != 2)
        int32_t var_128
        zmm12 = var_128
        result_1 = _mm_and_ps(result_1, zmm6_1)
        
        if (not(_mm_and_ps(zmm12, zmm6_1)[0] f> result_1[0]))
            int32_t var_138
            uint32_t zmm6_2[0x4]
            result_1, zmm6_2, zmm7 = sub_14175f6d0(zmm10, zmm11, zmm12, zmm15, var_138[0])
            result = result_1
            uint32_t zmm1_2[0x4] = _mm_and_ps(zmm13, zmm6_2)
            result_1 = _mm_and_ps(result_1, zmm6_2)
            
            if (not(zmm1_2[0] f> result_1[0]))
                uint32_t zmm6_3[0x4]
                uint32_t zmm8_1[0x4]
                result_1, zmm6_3, zmm7, zmm8_1 = sub_14175f6d0(zmm10, zmm13, zmm12, zmm14, zmm7[0])
                result = result_1
                uint32_t zmm1_3[0x4] = _mm_and_ps(zmm11, zmm6_3)
                result_1 = _mm_and_ps(result_1, zmm6_3)
                
                if (not(zmm1_3[0] f> result_1[0]))
                    uint32_t var_68_1[0x4] = zmm8_1
                    zmm7[0] = zmm7[0] f* zmm7[0]
                    int32_t rax_53 = -1
                    zmm14[0] = zmm14[0] f* zmm14[0]
                    zmm11[0] = zmm11[0] f- zmm12[0]
                    float zmm3_3 = zmm11[0]
                    zmm14[0] = zmm14[0] f* zmm15[0]
                    zmm3_3 = zmm3_3 f- zmm13[0]
                    zmm14[0] = zmm14[0] f* var_138
                    zmm13[0] = zmm13[0] f- zmm12[0]
                    zmm15[0] = zmm15[0] f* zmm15[0]
                    zmm11[0] = zmm11[0] f* zmm11[0]
                    zmm7[0] = zmm7[0] f* zmm15[0]
                    zmm14[0] = zmm14[0] f* zmm15[0]
                    zmm11[0] = zmm11[0] f* zmm14[0]
                    zmm13[0] = zmm13[0] f* zmm13[0]
                    zmm7[0] = zmm7[0] f+ zmm14[0]
                    zmm7[0] = zmm7[0] f* zmm14[0]
                    zmm13[0] = zmm13[0] f* zmm15[0]
                    zmm7[0] = zmm7[0] f+ zmm7[0]
                    zmm11[0] = zmm11[0] f* zmm7[0]
                    zmm3_3 = zmm3_3 * zmm3_3 f* zmm7[0]
                    zmm13[0] = zmm13[0] f* zmm7[0]
                    zmm7[0] = zmm7[0] f- zmm13[0]
                    zmm12[0] = zmm12[0] f* zmm14[0]
                    zmm11[0] = zmm11[0] f+ zmm13[0]
                    bool cond:4_1 = zmm10[0] f> 0f
                    zmm7[0] = zmm7[0] f- zmm11[0]
                    zmm11[0] = zmm11[0] f+ zmm12[0]
                    
                    if (cond:4_1)
                        rax_53 = 1
                    
                    zmm7[0] = zmm7[0] f- zmm3_3
                    zmm1_3 = _mm_max_ss(zmm7[0], 0)
                    result_1 = zx.o(0)
                    result_1[0] = float.s(rax_53)
                    result = _mm_sqrt_ss(0, zmm1_3[0])
                    zmm14[0] = zmm14[0] f* result_1[0]
                    result[0] = result[0] f* zmm14[0]
                    result[0] = result[0] f+ zmm11[0]
                    result[0] = result[0] f/ zmm7[0]
else
    result = _mm_and_ps(var_130, 0x7fffffff)
    int32_t rax_52 = -1
    result[0] = result[0] f+ var_140
    
    if (zmm10[0] f> zx.o(0)[0])
        rax_52 = r14
    
    zmm1 = _mm_cvtepi32_ps(zx.o(rax_52))
    result[0] = result[0] f* zmm1[0]

return result
