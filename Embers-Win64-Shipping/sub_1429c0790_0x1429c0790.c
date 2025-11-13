// 函数: sub_1429c0790
// 地址: 0x1429c0790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg4
uint64_t result = zx.q(arg2)
int32_t i = 1
int32_t r9 = arg3
int32_t rbp = arg2

if (arg2 s> result_1)
    result = zx.q(result_1)

uint64_t j_2 = arg1

if (result.d s>= 1)
    do
        i *= 2
    while (i s<= result.d)

int32_t i_5 = i s>> 1
int32_t i_4 = i_5
int32_t i_2 = i_5
int32_t i_1 = i_5 s>> 1
int32_t i_3 = i_1

if (i_1 s>= 1)
    int32_t r10_1 = arg5
    int16_t r12_1 = arg6
    
    do
        uint64_t j_1 = j_2
        int32_t rdx_1 = i_4 * r9
        uint64_t j = j_2
        arg6.d = rdx_1
        int64_t rdi_1 = j_2 + (sx.q((result_1 - i_4) * r10_1) << 1)
        result = zx.q(i_1 * r9)
        int64_t var_58_1 = rdi_1
        int64_t rbx = sx.q(result.d)
        int64_t var_70_1 = rbx
        
        if (j_2 u<= rdi_1)
            int64_t r10_2 = sx.q(i_1 * r10_1)
            int64_t r11_1 = sx.q(i_4 * r10_1) * 2
            int64_t var_68_1 = r10_2
            int64_t var_60_1 = r11_1
            int64_t rcx_2 = sx.q((rbp - i_4) * r9) * 2
            int64_t var_50_1 = rcx_2
            
            do
                int64_t r14 = rcx_2 + j
                result = j
                
                if (j u<= r14)
                    int64_t rdi_2 = j + (rbx << 1)
                    int64_t rbp_2 = sx.q(rdx_1) * 2
                    int64_t r15_1 = (r10_2 - rbx) * 2
                    int64_t r13_1 = r15_1 + (rbx << 1)
                    
                    do
                        if (r12_1 u>= 0x4000)
                            uint16_t rdx_5 = *(rdi_2 + r13_1)
                            uint16_t r9_3 = *(rdi_2 + r15_1)
                            uint16_t r11_3 = *rdi_2 - (rdx_5 u>> 1)
                            int16_t r10_4 = *result - (r9_3 u>> 1)
                            int16_t rdx_6 = r10_4 - ((rdx_5 + r11_3 - 0x8000) u>> 1) + r9_3 - 0x8000
                            r10_4 -= r11_3 u>> 1
                            *rdi_2 = rdx_6
                            *result = rdx_6 + rdx_5 + r11_3 - 0x8000 - 0x8000
                            *(rdi_2 + r13_1) = r10_4
                            *(rdi_2 + r15_1) = r11_3 + r10_4 - 0x8000
                        else
                            int32_t r10_3 = sx.d(*(rdi_2 + r13_1))
                            int32_t r11_2 = sx.d(*(rdi_2 + r15_1))
                            int16_t rbx_2 = (r10_3 s>> 1).w + (r10_3.w & 1) + *rdi_2
                            int16_t r9_2 = (r11_2 s>> 1).w + (r11_2.w & 1) + *result
                            int16_t r8_1 = (rbx_2 s>> 1) + (rbx_2 & 1) + r9_2
                            *result = r8_1
                            r8_1 -= rbx_2
                            rbx_2 -= r10_3.w
                            *rdi_2 = r8_1
                            int16_t rdx_4 = (rbx_2 s>> 1) + (rbx_2 & 1) - r11_2.w + r9_2
                            *(rdi_2 + r15_1) = rdx_4
                            *(rdi_2 + r13_1) = rdx_4 - rbx_2
                        
                        result += rbp_2
                        rdi_2 += rbp_2
                    while (result u<= r14)
                    
                    j = j_1
                    rbx = var_70_1
                    r10_2 = var_68_1
                    r11_1 = var_60_1
                    rdi_1 = var_58_1
                
                if ((i_1 & rbp) != 0)
                    int16_t r8_4
                    int16_t r9_4
                    
                    if (r12_1 u>= 0x4000)
                        uint16_t rdx_8 = *(result + (r10_2 << 1))
                        r9_4 = *result - (rdx_8 u>> 1)
                        r8_4 = r9_4 + rdx_8 - 0x8000
                    else
                        int32_t rdx_7 = sx.d(*(result + (r10_2 << 1)))
                        r8_4 = (rdx_7 s>> 1).w + (rdx_7.w & 1) + *result
                        r9_4 = r8_4 - rdx_7.w
                    
                    *(result + (r10_2 << 1)) = r9_4
                    *result = r8_4
                
                rdx_1 = arg6.d
                j += r11_1
                rcx_2 = var_50_1
                j_1 = j
            while (j u<= rdi_1)
            
            i_1 = i_3
            i_4 = i_2
            r9 = arg3
            rbp = arg2
            j_2 = arg1
        
        if ((arg4 & i_1) != 0)
            result = sx.q((rbp - i_4) * r9)
            
            for (uint64_t r10_5 = j + (result << 1); j u<= r10_5; j += sx.q(rdx_1) * 2)
                int16_t rdx_10
                int16_t r8_5
                
                if (r12_1 u>= 0x4000)
                    int16_t rcx_15 = *(j + (rbx << 1))
                    result.w = rcx_15 u>> 1
                    r8_5 = *j - result.w
                    rdx_10 = rcx_15 + r8_5 - 0x8000
                else
                    int32_t rcx_14 = sx.d(*(j + (rbx << 1)))
                    result.w = rcx_14.w & 1
                    rdx_10 = (rcx_14 s>> 1).w + result.w + *j
                    r8_5 = rdx_10 - rcx_14.w
                
                *(j + (rbx << 1)) = r8_5
                *j = rdx_10
        
        r9 = arg3
        i_4 = i_1
        r10_1 = arg5
        result_1 = arg4
        i_2 = i_1
        i_1 s>>= 1
        i_3 = i_1
    while (i_1 s>= 1)

return result
