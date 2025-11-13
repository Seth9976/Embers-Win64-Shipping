// 函数: sub_141fe3a90
// 地址: 0x141fe3a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)
float zmm8[0x4]
float var_28[0x4] = zmm8
float zmm10[0x4]
float var_38[0x4] = zmm10
int32_t* r15 = arg3
float zmm12[0x4]
float var_48[0x4] = zmm12
float zmm13[0x4]
float var_58[0x4] = zmm13
int128_t var_94
__builtin_memset(&var_94, 0, 0x14)
int128_t var_7c
__builtin_memset(&var_7c, 0, 0x14)
float var_98[0x4]
float var_80[0x4]

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x10)
    var_98 = *(rax_1 + 4)
    var_94:0xc.q = *(rax_1 + 0x14)
    var_80 = *(rax_1 + 4)
    var_7c:0xc.q = *(rax_1 + 0x14)
    
    if (rdi != 1)
        int32_t r14_1 = rdi - 1
        
        if (*(arg1 + 0x20) == 0)
            rdi = r14_1
        
        int32_t rcx = 0
        
        if (rdi s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_2 = 0
                rbx_1 = rcx + 1
                arg3 = &var_98
                
                if (rcx != r14_1)
                    rax_2 = rbx_1
                
                sub_140ad2ca0(sx.q(rcx) * 0x50 + *(arg1 + 0x10), 
                    sx.q(rax_2) * 0x50 + *(arg1 + 0x10), arg3, &var_80)
                rcx = rbx_1
            while (rbx_1 s< rdi)
else
    var_98[0] = rdi
    var_80[0] = rdi

(*(*(arg1 - 0x28) + 0x2b0))(arg1 - 0x28, &var_98, arg3)
int64_t result = (*(*(arg1 - 0x28) + 0x2b0))(arg1 - 0x28, &var_80)
float zmm14[0x4] = var_98[0]
zmm12 = var_94:8.d
float temp0[0x4] = __minss_xmmss_memss(zmm14[0], var_94.d)
float temp0_1[0x4] = __maxss_xmmss_memss(zmm14[0], var_94.d)
zmm13 = var_7c:8.d
float temp0_2[0x4] = __minss_xmmss_memss(zmm12[0], var_94:0xc.d)
zmm8 = var_80[0]
int64_t zmm1 = zmm13[0].q
float temp0_3[0x4] = __minss_xmmss_memss(temp0[0], var_94:4.d)
float temp0_4[0x4] = __maxss_xmmss_memss(zmm13[0], var_7c:0xc.d)
float temp0_5[0x4] = __maxss_xmmss_memss(temp0_1[0], var_94:4.d)
int32_t var_84
float temp0_6[0x4] = __minss_xmmss_memss(temp0_2[0], var_84)
int64_t temp0_7 = __minss_xmmss_memss(zmm1.d, var_7c:0xc.d)
float temp0_8[0x4] = __maxss_xmmss_memss(zmm12[0], var_94:0xc.d)
int32_t var_6c
float temp0_9[0x4] = __maxss_xmmss_memss(temp0_4[0], var_6c)
float temp0_10[0x4] = _mm_min_ss(temp0_3[0], temp0_6[0])
int64_t temp0_11 = __minss_xmmss_memss(temp0_7.d, var_6c)
float temp0_12[0x4] = __maxss_xmmss_memss(temp0_8[0], var_84)
float temp0_13[0x4] = __maxss_xmmss_memss(zmm8[0], var_7c.d)
float temp0_14[0x4] = __minss_xmmss_memss(zmm8[0], var_7c.d)
float temp0_15[0x4] = _mm_max_ss(temp0_5[0], temp0_12[0])
float temp0_16[0x4] = __maxss_xmmss_memss(temp0_13[0], var_7c:4.d)
float temp0_17[0x4] = __minss_xmmss_memss(temp0_14[0], var_7c:4.d)
float temp0_18[0x4] = _mm_max_ss(temp0_9[0], temp0_16[0])
int64_t temp0_19 = _mm_min_ss(temp0_11.d, temp0_17[0])
float temp0_20[0x4] = _mm_max_ss(temp0_15[0], temp0_18[0])
*arg2 = _mm_min_ss(temp0_10[0], temp0_19.d)[0]
*r15 = temp0_20[0]
return result
