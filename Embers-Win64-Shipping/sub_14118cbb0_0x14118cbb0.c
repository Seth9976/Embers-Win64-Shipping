// 函数: sub_14118cbb0
// 地址: 0x14118cbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t* r13 = data_143e6d188
void* rax_2 = sx.q(data_143e6d190) * 0x160 + r13

if (r13 != rax_2)
    int32_t* rbx_1 = &r13[5]
    
    do
        int64_t rdi_1 = sx.q(arg1[1].d)
        int32_t rax_3 = (rdi_1 + 1).d
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_1407c3b60(arg1)
        
        int32_t* r15_2 = rdi_1 * 0x38 + *arg1
        __builtin_memset(r15_2, 0, 0x38)
        *r15_2 = rbx_1[-1]
        r15_2[1] = *rbx_1
        sub_140597df0(&r15_2[2], &rbx_1[1])
        sub_140597df0(&r15_2[6], &rbx_1[5])
        
        if (&r15_2[0xa] != &rbx_1[9])
            int64_t rbp_1 = sx.q(rbx_1[0xb])
            int64_t rax_7 = *(rbx_1 + 0x24)
            int32_t r8_1 = r15_2[0xd]
            r15_2[0xc] = rbp_1.d
            
            if (rbp_1.d != 0 || r8_1 != 0)
                sub_140808f70(&r15_2[0xa], rbp_1.d, r8_1)
                memcpy(*(r15_2 + 0x28), rax_7, (rbp_1 * 0x18).d)
            else
                r15_2[0xd] = rbp_1.d
        
        *r15_2 = *r13
        r15_2[1] = rbx_1[-3]
        
        if (&r15_2[2] != &rbx_1[0x47])
            int32_t rbp_2 = rbx_1[0x49]
            int64_t rax_11 = *(rbx_1 + 0x11c)
            int32_t r8_5 = r15_2[5]
            r15_2[4] = rbp_2
            
            if (rbp_2 != 0 || r8_5 != 0)
                sub_1405a4c70(&r15_2[2], rbp_2, r8_5)
                memcpy(*(r15_2 + 8), rax_11, rbp_2 * 2)
            else
                r15_2[5] = rbp_2
        
        if (&r15_2[6] != &rbx_1[0x4b])
            int32_t rdi_3 = rbx_1[0x4d]
            int64_t rbp_3 = *(rbx_1 + 0x12c)
            int32_t r8_8 = r15_2[9]
            r15_2[8] = rdi_3
            
            if (rdi_3 != 0 || r8_8 != 0)
                sub_1405a4c70(&r15_2[6], rdi_3, r8_8)
                memcpy(*(r15_2 + 0x18), rbp_3, rdi_3 * 2)
            else
                r15_2[9] = 0
        
        int32_t r10_1 = r15_2[0xc]
        int32_t rax_13 = 0
        
        if (r10_1 != 0)
            do
                int64_t r9_1 = sx.q(rax_13)
                int64_t r8_11 = *(r15_2 + 0x28) + r9_1 * 0x18
                uint64_t rcx_9
                
                if (rax_13 u>= rbx_1[0x1b])
                    *(r8_11 + 0x14) = 0
                    rcx_9.b = 0
                else
                    void* rdx_12 = r9_1 * 0x70 + *(rbx_1 + 0x64)
                    *(r8_11 + 0x14) = *(rdx_12 + 0x30)
                    rcx_9.b = *(rdx_12 + 0x30) s> 0
                
                rax_13 += 1
                *(r8_11 + 0x10) = rcx_9.b
            while (rax_13 u< r10_1)
        
        r13 = &r13[0x58]
        rbx_1 = &rbx_1[0x58]
    while (r13 != rax_2)

return arg1
