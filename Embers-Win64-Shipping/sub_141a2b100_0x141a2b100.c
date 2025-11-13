// 函数: sub_141a2b100
// 地址: 0x141a2b100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r14 = result.d

if (result.d s>= 0)
    int32_t r15_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rdi_1 = r14
        
        if (r15_1 s< arg2)
            do
                int32_t rbx_1 = rdi_1 * 2
                uint64_t r10_1 = zx.q(rbx_1 + 1)
                
                if ((r10_1 + 1).d s< arg2)
                    if (sub_141a35c10(arg4, arg1[sx.q(rbx_1) + 2], arg1[sx.q(r10_1.d)]) != 0)
                        r10_1 = zx.q(rbx_1)
                    
                    r10_1 = zx.q(r10_1.d + 1)
                
                int64_t rax_5 = sx.q(r10_1.d)
                void* r8_2 = arg1[rax_5]
                int64_t rax_6 = sx.q(rdi_1)
                void* rbp_1 = arg1[rax_6]
                result = sub_141a35c10(arg4, rbp_1, r8_2)
                
                if (result.b == 0)
                    break
                
                arg1[rax_6] = r8_2
                result = zx.q(((r10_1 << 1) + 1).d)
                arg1[rax_5] = rbp_1
                rdi_1 = r10_1.d
            while (result.d s< arg2)
        
        r15_1 -= 2
        temp2_1 = r14
        r14 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t rsi_1 = 0
        uint64_t rcx_2 = *arg1
        *arg1 = result
        arg1[i] = rcx_2
        
        if (j s> 1)
            uint64_t r10_2
            
            do
                int32_t rdi_3 = rsi_1 * 2
                r10_2 = zx.q(rdi_3 + 1)
                
                if ((r10_2 + 1).d s< j)
                    if (sub_141a35c10(arg4, arg1[sx.q(rdi_3) + 2], arg1[sx.q(r10_2.d)]) != 0)
                        r10_2 = zx.q(rdi_3)
                    
                    r10_2 = zx.q(r10_2.d + 1)
                
                int64_t rax_9 = sx.q(r10_2.d)
                void* r8_5 = arg1[rax_9]
                int64_t rax_10 = sx.q(rsi_1)
                void* rbp_2 = arg1[rax_10]
                result = sub_141a35c10(arg4, rbp_2, r8_5)
                
                if (result.b == 0)
                    break
                
                arg1[rax_10] = r8_5
                rsi_1 = r10_2.d
                arg1[rax_9] = rbp_2
            while (((r10_2 << 1) + 1).d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
