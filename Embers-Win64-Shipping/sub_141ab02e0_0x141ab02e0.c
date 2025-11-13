// 函数: sub_141ab02e0
// 地址: 0x141ab02e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8
sub_140dd5b90(&var_a8, *arg2)
*arg2
int32_t i = 0
bool cond:0 = arg2[8].b != 0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x33)
sub_141e1c570(arg1 + 0x10, &var_a8, sub_141e295c0(&var_a8))

if (*arg2 != var_a8)
    sub_141e295c0(arg2)

sub_141a911c0(&arg2[1], &var_a0)
int64_t var_90
arg2[3] = var_90
int64_t var_88
int128_t zmm6 = sub_141a91450(&arg2[4], &var_88)
arg2[8].b = cond:0
uint64_t result = *arg2
void* r15 = *(result + 0xb0)

if (*(arg1 + 0x38) s> 0)
    float* rdi_1 = nullptr
    int128_t var_38_1 = zmm6
    int64_t* r14_1 = nullptr
    
    do
        int64_t arg_8 = *(r14_1 + *(arg1 + 0x30))
        result = sub_141e43480(r15, &data_143f398c8, &arg_8)
        int16_t rdx_6 = result.w
        
        if (result.w != 0xffff)
            uint64_t* r8_2 = arg2[6]
            uint32_t r11_1 = zx.d(result.w)
            int32_t r10_1 = r8_2[1].d
            float zmm2 = *(rdi_1 + *(arg1 + 0x20))
            int16_t r9_1
            
            if (r11_1 s>= r10_1)
                r9_1 = -1
            else
                r9_1 = *(*r8_2 + (zx.q(result.w) << 1))
            
            float zmm1_1
            
            if (r9_1 == 0xffff)
                zmm1_1 = (zx.o(0)).d
            else
                zmm1_1 = *(arg2[4] + (zx.q(r9_1) << 3))
            
            result = zx.q(*(arg1 + 0x54))
            uint64_t rcx_12
            int16_t rdx_7
            
            if (result.b != 0)
                if (result.b == 1)
                    zmm1_1 = zmm1_1 * zmm2
                    
                    if (r11_1 s>= r10_1)
                        goto label_141ab0482
                    
                    result = *r8_2
                    rdx_7 = *(result + (zx.q(rdx_6) << 1))
                    goto label_141ab0485
                
                float zmm0_1
                bool cond:2_1
                
                if (result.b != 3)
                    if (result.b != 4)
                        zmm0_1 = *(arg1 + 0x50)
                        
                        if (zmm0_1 >= 0f)
                            zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
                        else
                            zmm0_1 = (zx.o(0)).d
                        
                        cond:2_1 = r11_1 s>= r10_1
                        zmm2 = (zmm2 - zmm1_1) * zmm0_1 + zmm1_1
                        goto label_141ab054c
                    
                    zmm1_1 = _mm_min_ss(
                        _mm_max_ss(zmm1_1 - zmm2, 0) / _mm_max_ss(1f - zmm2, 0x3c23d70a), 
                        0x3f800000)
                    
                    if (r11_1 s>= r10_1)
                        goto label_141ab0482
                    
                    result = *r8_2
                    rdx_7 = *(result + (zx.q(rdx_6) << 1))
                    goto label_141ab0485
                
                zmm0_1 = *(arg1 + 0x50)
                result = *(arg1 + 0x40)
                
                if (zmm0_1 >= 0f)
                    zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
                else
                    zmm0_1 = (zx.o(0)).d
                
                zmm2 = (1f - zmm0_1) f* *(result + rdi_1) + zmm0_1 * zmm1_1
                *(result + rdi_1) = zmm2
                cond:2_1 = r11_1 s>= r8_2[1].d
            label_141ab054c:
                int16_t rdx_8
                
                if (cond:2_1)
                    rdx_8 = -1
                else
                    result = *r8_2
                    rdx_8 = *(result + (zx.q(rdx_6) << 1))
                
                if (rdx_8 != 0xffff)
                    result = arg2[4]
                    rcx_12 = zx.q(rdx_8)
                    *(result + (rcx_12 << 3)) = zmm2
                    *(result + (rcx_12 << 3) + 4) = 1
            else
                zmm1_1 = zmm1_1 + zmm2
                
                if (r11_1 s>= r10_1)
                label_141ab0482:
                    rdx_7 = -1
                    goto label_141ab0485
                
                result = *r8_2
                rdx_7 = *(result + (zx.q(rdx_6) << 1))
            label_141ab0485:
                
                if (rdx_7 != 0xffff)
                    result = arg2[4]
                    rcx_12 = zx.q(rdx_7)
                    *(result + (rcx_12 << 3)) = zmm1_1
                    *(result + (rcx_12 << 3) + 4) = 1
        
        i += 1
        r14_1 = &r14_1[1]
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x38))

return result
