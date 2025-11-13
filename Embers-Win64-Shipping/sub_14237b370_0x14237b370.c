// 函数: sub_14237b370
// 地址: 0x14237b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rbx_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t r10_1 = rbx_1 * 2
                uint64_t r8 = zx.q(r10_1 + 1)
                
                if ((r8 + 1).d s< arg2)
                    int64_t rsi_1 = sx.q(arg1[sx.q(r8.d)])
                    int64_t rbp_1 = sx.q(arg1[sx.q(r10_1) + 2])
                    int64_t rdx_1 = **arg4
                    int32_t rdi_1 = *(rbp_1 * 0xd8 + rdx_1 + 0x98)
                    int32_t rax_7 = *(rsi_1 * 0xd8 + rdx_1 + 0x98)
                    
                    if (rdi_1 s> rax_7)
                        rax_7.b = 1
                    else if (rdi_1 != rax_7)
                        rax_7.b = 0
                    else
                        rax_7.b = rbp_1.d s> rsi_1.d
                    
                    if (rax_7.b != 0)
                        r8 = zx.q(r10_1)
                    
                    r8 = zx.q(r8.d + 1)
                
                int64_t rax_8 = sx.q(r8.d)
                int64_t r10_2 = sx.q(arg1[rax_8])
                int64_t rax_9 = sx.q(rbx_1)
                int64_t rbx_2 = sx.q(arg1[rax_9])
                result = *arg4
                int64_t rdx_2 = *result
                int32_t rdi_2 = *(rbx_2 * 0xd8 + rdx_2 + 0x98)
                int32_t temp3_1 = *(r10_2 * 0xd8 + rdx_2 + 0x98)
                
                if (rdi_2 s<= temp3_1)
                    if (rdi_2 != temp3_1)
                        break
                    
                    if (rbx_2.d s<= r10_2.d)
                        break
                
                result = zx.q(((r8 << 1) + 1).d)
                arg1[rax_9] = r10_2.d
                arg1[rax_8] = rbx_2.d
                rbx_1 = r8.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        int32_t rcx_4 = *arg1
        int32_t rsi_3 = 0
        result = zx.q(arg1[i])
        *arg1 = result.d
        arg1[i] = rcx_4
        
        if (j s> 1)
            do
                int32_t result_1 = rsi_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< j)
                    int64_t rbp_2 = sx.q(arg1[sx.q(result.d)])
                    int64_t r14_1 = sx.q(arg1[sx.q(result_1) + 2])
                    int64_t r8_1 = **arg4
                    int32_t rdi_3 = *(r14_1 * 0xd8 + r8_1 + 0x98)
                    int32_t rcx_9 = *(rbp_2 * 0xd8 + r8_1 + 0x98)
                    
                    if (rdi_3 s> rcx_9)
                        rcx_9.b = 1
                    else if (rdi_3 != rcx_9)
                        rcx_9.b = 0
                    else
                        rcx_9.b = r14_1.d s> rbp_2.d
                    
                    if (rcx_9.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_10 = sx.q(result.d)
                int64_t r10_3 = sx.q(arg1[rcx_10])
                int64_t rcx_11 = sx.q(rsi_3)
                int64_t rdi_4 = sx.q(arg1[rcx_11])
                int64_t r8_2 = **arg4
                int32_t rsi_4 = *(rdi_4 * 0xd8 + r8_2 + 0x98)
                int32_t temp4_1 = *(r10_3 * 0xd8 + r8_2 + 0x98)
                
                if (rsi_4 s<= temp4_1)
                    if (rsi_4 != temp4_1)
                        break
                    
                    if (rdi_4.d s<= r10_3.d)
                        break
                
                rsi_3 = result.d
                arg1[rcx_11] = r10_3.d
                result = zx.q(((result << 1) + 1).d)
                arg1[rcx_10] = rdi_4.d
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
