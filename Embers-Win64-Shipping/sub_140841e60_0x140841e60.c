// 函数: sub_140841e60
// 地址: 0x140841e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_3 = result.d

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t result_4
    
    do
        int32_t result_1 = result_3
        
        if (r12_1 s< arg2)
            do
                void* r10_1 = *(arg4 + 0x80)
                int32_t rbx_1 = result_1 * 2
                int32_t r11_1 = rbx_1 + 1
                
                if (r11_1 + 1 s>= arg2)
                    r11_1 = rbx_1
                else
                    void* rdx_1 = arg4
                    
                    if (r10_1 != 0)
                        rdx_1 = r10_1
                    
                    void* rax_6 = arg4
                    
                    if (r10_1 != 0)
                        rax_6 = r10_1
                    
                    if (*(rdx_1 + (sx.q(arg1[sx.q(rbx_1) + 2]) << 2))
                            s< *(rax_6 + (sx.q(arg1[sx.q(r11_1)]) << 2)))
                        r11_1 = rbx_1
                
                int64_t rax_8 = sx.q(r11_1)
                int64_t r14_1 = sx.q(arg1[rax_8 + 1])
                uint64_t rbx_2 = zx.q(r11_1 + 1)
                void* r8_1 = arg4
                
                if (r10_1 != 0)
                    r8_1 = r10_1
                
                result = sx.q(result_1)
                int64_t rdi_1 = sx.q(arg1[result])
                int32_t* r10_2 = &arg1[result]
                
                if (*(r8_1 + (rdi_1 << 2)) s>= *(r8_1 + (r14_1 << 2)))
                    break
                
                result = zx.q(((rbx_2 << 1) + 1).d)
                *r10_2 = r14_1.d
                arg1[rax_8 + 1] = rdi_1.d
                result_1 = rbx_2.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        result_4 = result_3
        result_3 -= 1
    while (result_4 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        int32_t rcx_2 = *arg1
        int32_t result_2 = 0
        result = zx.q(arg1[i])
        *arg1 = result.d
        arg1[i] = rcx_2
        
        if (j s> 1)
            do
                void* rax_9 = *(arg4 + 0x80)
                int32_t rbx_3 = result_2 * 2
                int32_t r11_3 = rbx_3 + 1
                
                if (r11_3 + 1 s>= j)
                    r11_3 = rbx_3
                else
                    void* r8_2 = arg4
                    
                    if (rax_9 != 0)
                        r8_2 = rax_9
                    
                    void* rcx_6 = arg4
                    
                    if (rax_9 != 0)
                        rcx_6 = rax_9
                    
                    if (*(r8_2 + (sx.q(arg1[sx.q(rbx_3) + 2]) << 2))
                            s< *(rcx_6 + (sx.q(arg1[sx.q(r11_3)]) << 2)))
                        r11_3 = rbx_3
                
                int64_t rcx_8 = sx.q(r11_3)
                int64_t rbx_4 = sx.q(arg1[rcx_8 + 1])
                uint64_t r10_4 = zx.q(r11_3 + 1)
                void* r8_3 = arg4
                
                if (rax_9 != 0)
                    r8_3 = rax_9
                
                result = sx.q(result_2)
                int64_t rbp_1 = sx.q(arg1[result])
                
                if (*(r8_3 + (rbp_1 << 2)) s>= *(r8_3 + (rbx_4 << 2)))
                    break
                
                arg1[result] = rbx_4.d
                result = zx.q(((r10_4 << 1) + 1).d)
                arg1[rcx_8 + 1] = rbp_1.d
                result_2 = r10_4.d
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
