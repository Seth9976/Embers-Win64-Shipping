// 函数: sub_140a1bfb0
// 地址: 0x140a1bfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_3 = result.d

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t result_4
    
    do
        int32_t result_2 = result_3
        
        if (rdi_1 s< arg2)
            do
                int32_t r9_1 = result_2 * 2
                uint64_t rdx_1 = zx.q(r9_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    if (arg1[sx.q(r9_1) + 2] s< arg1[sx.q(rdx_1.d)])
                        rdx_1 = zx.q(r9_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* rcx_1 = &arg1[sx.q(rdx_1.d)]
                result = sx.q(result_2)
                int32_t r10_1 = *rcx_1
                int32_t r9_2 = arg1[result]
                
                if (r9_2 s>= r10_1)
                    break
                
                arg1[result] = r10_1
                result = zx.q(((rdx_1 << 1) + 1).d)
                *rcx_1 = r9_2
                result_2 = rdx_1.d
            while (result.d s< arg2)
        
        rdi_1 -= 2
        result_4 = result_3
        result_3 -= 1
    while (result_4 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        int32_t rcx_2 = *arg1
        int32_t r11_1 = 0
        result = zx.q(arg1[i])
        *arg1 = result.d
        arg1[i] = rcx_2
        
        if (j s> 1)
            do
                int32_t result_1 = r11_1 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< j)
                    if (arg1[sx.q(result_1) + 2] s< arg1[sx.q(result.d)])
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* rdx_3 = &arg1[sx.q(result.d)]
                int64_t rcx_7 = sx.q(r11_1)
                int32_t r11_2 = *rdx_3
                int32_t r9_3 = arg1[rcx_7]
                
                if (r9_3 s>= r11_2)
                    break
                
                arg1[rcx_7] = r11_2
                r11_1 = result.d
                result = zx.q(((result << 1) + 1).d)
                *rdx_3 = r9_3
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
