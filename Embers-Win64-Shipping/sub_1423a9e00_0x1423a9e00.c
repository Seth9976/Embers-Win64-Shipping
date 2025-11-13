// 函数: sub_1423a9e00
// 地址: 0x1423a9e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg3[1].d
int32_t rbp = 0
void* r11 = arg1
int32_t rsi = 0

if (result s> 0)
    int64_t r14_1 = 0
    int128_t zmm6 = zx.o(0)
    
    do
        int64_t r8 = *arg3
        int64_t* r10_3 = r14_1 * 0x30 + r8
        int32_t rbx_1 = 1
        int64_t rdi_1 = 1
        int64_t zmm1 = *(r10_3 + 0x24)
        int64_t zmm0
        
        if (zmm1.d f< zmm6.d)
            if (rsi + 1 s< result)
                int64_t i = *r10_3
                int64_t rcx_2 = sx.q(rsi + 1)
                int64_t* rax_5 = rcx_2 * 0x30 + r8
                
                while (*rax_5 == i)
                    zmm0 = *(rax_5 + 0x24)
                    
                    if (zmm0.d f>= zmm6.d)
                        break
                    
                    rbx_1 += 1
                    rdi_1 += 1
                    rcx_2 += 1
                    rax_5 = &rax_5[6]
                    zmm1 = _mm_min_ss(zmm0.d, zmm1.d)
                    
                    if (rcx_2 s>= sx.q(result))
                        break
        else if (rsi + 1 s< result)
            int64_t i_1 = *r10_3
            int64_t rcx_1 = sx.q(rsi + 1)
            int64_t* rax_2 = rcx_1 * 0x30 + r8
            
            while (*rax_2 == i_1)
                zmm0 = *(rax_2 + 0x24)
                
                if (zmm0.d f< zmm6.d)
                    break
                
                rbx_1 += 1
                rdi_1 += 1
                rcx_1 += 1
                rax_2 = &rax_2[6]
                zmm1 = _mm_max_ss(zmm0.d, zmm1.d)
                
                if (rcx_1 s>= sx.q(result))
                    break
        int32_t var_40_1 = rbp
        int64_t var_48_1 = arg5
        uint8_t var_50_1 = *(arg2 + 0x20b) u>> 1 & 1
        zmm6 = sub_1423a99f0(r11, arg2, *r10_3, arg4, zmm1, zmm1.d)
        result = arg3[1].d
        rbp += 1
        r11 = arg1
        rsi += rbx_1
        r14_1 += rdi_1
    while (rsi s< result)

return result
