// 函数: sub_140a5e7f0
// 地址: 0x140a5e7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rbx
        
        if (rdi_1 s< arg2)
            do
                int32_t result_1 = r10_1 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< arg2)
                    if (arg1[sx.q(result_1) + 2] u< arg1[sx.q(result.d)])
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_3 = sx.q(r10_1)
                int64_t rdx_2 = sx.q(result.d)
                char r9_1 = arg1[rcx_3]
                char r10_2 = arg1[rdx_2]
                
                if (r9_1 u>= r10_2)
                    break
                
                arg1[rcx_3] = r10_2
                r10_1 = result.d
                result = zx.q(((result << 1) + 1).d)
                arg1[rdx_2] = r9_1
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t rdi_2 = sx.q(j)

if (j s> 0)
    void* rbx_1 = &arg1[rdi_2]
    int64_t i
    
    do
        result = zx.q(*rbx_1)
        int32_t result_2 = 0
        char rcx_4 = *arg1
        *arg1 = result.b
        *rbx_1 = rcx_4
        
        if (j s> 1)
            do
                int32_t r9_2 = result_2 * 2
                uint64_t rdx_3 = zx.q(r9_2 + 1)
                
                if ((rdx_3 + 1).d s< j)
                    if (arg1[sx.q(r9_2) + 2] u< arg1[sx.q(rdx_3.d)])
                        rdx_3 = zx.q(r9_2)
                    
                    rdx_3 = zx.q(rdx_3.d + 1)
                
                result = sx.q(result_2)
                char* rcx_6 = sx.q(rdx_3.d)
                char r9_3 = arg1[result]
                char r11_1 = *(rcx_6 + arg1)
                
                if (r9_3 u>= r11_1)
                    break
                
                arg1[result] = r11_1
                result = zx.q(((rdx_3 << 1) + 1).d)
                *(rcx_6 + arg1) = r9_3
                result_2 = rdx_3.d
            while (result.d s< j)
        
        j -= 1
        rbx_1 -= 1
        i = rdi_2
        rdi_2 -= 1
    while (i != 1)

return result
