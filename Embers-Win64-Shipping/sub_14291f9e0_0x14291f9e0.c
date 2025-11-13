// 函数: sub_14291f9e0
// 地址: 0x14291f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t i_1 = arg3
int64_t* rbx = arg2
int64_t* r14 = arg1

if (arg3 s> 0)
    uint64_t rbp_1 = zx.q(arg4.d)
    uint64_t rdi_1 = arg4 u>> 0x20
    
    if ((arg3 & 0xfffffffc) != 0)
        do
            int64_t rdx = *rbx
            uint64_t r10_1 = zx.q(rdx.d)
            uint64_t rdx_1 = rdx u>> 0x20
            int64_t rcx_1 = rdx_1 * rbp_1
            int64_t rdx_2 = rdx_1 * rdi_1
            int64_t r9_2 = zx.q(r10_1.d) * rdi_1 + rcx_1
            int64_t r8 = rdx_2 + 0x100000000
            
            if (r9_2 u>= rcx_1)
                r8 = rdx_2
            
            int64_t r8_1 = r8 + (r9_2 u>> 0x20)
            int64_t r9_3 = r9_2 << 0x20
            int64_t rdx_3 = r8_1 + 1
            int64_t r10_3 = r10_1 * rbp_1 + r9_3
            
            if (r10_3 u>= r9_3)
                rdx_3 = r8_1
            
            int64_t rcx_4 = r10_3 + result
            *r14 = rcx_4
            int64_t rcx_5 = rbx[1]
            uint64_t r9_4 = zx.q(rcx_5.d)
            int64_t r10_4 = rdx_3 + 1
            
            if (rcx_4 u>= result)
                r10_4 = rdx_3
            
            uint64_t rcx_6 = rcx_5 u>> 0x20
            int64_t rax_1 = rcx_6 * rbp_1
            int64_t rcx_7 = rcx_6 * rdi_1
            int64_t r8_4 = zx.q(r9_4.d) * rdi_1 + rax_1
            int64_t rdx_4 = rcx_7 + 0x100000000
            
            if (r8_4 u>= rax_1)
                rdx_4 = rcx_7
            
            int64_t rdx_5 = rdx_4 + (r8_4 u>> 0x20)
            int64_t r8_5 = r8_4 << 0x20
            int64_t rcx_8 = rdx_5 + 1
            int64_t r9_6 = r9_4 * rbp_1 + r8_5
            
            if (r9_6 u>= r8_5)
                rcx_8 = rdx_5
            
            int64_t rax_4 = r9_6 + r10_4
            r14[1] = rax_4
            int64_t r11_1 = rcx_8 + 1
            
            if (rax_4 u>= r10_4)
                r11_1 = rcx_8
            
            int64_t rcx_9 = rbx[2]
            uint64_t r9_7 = zx.q(rcx_9.d)
            uint64_t rcx_10 = rcx_9 u>> 0x20
            int64_t rax_6 = rcx_10 * rbp_1
            int64_t rcx_11 = rcx_10 * rdi_1
            int64_t r8_8 = zx.q(r9_7.d) * rdi_1 + rax_6
            int64_t rdx_6 = rcx_11 + 0x100000000
            
            if (r8_8 u>= rax_6)
                rdx_6 = rcx_11
            
            int64_t rdx_7 = rdx_6 + (r8_8 u>> 0x20)
            int64_t r8_9 = r8_8 << 0x20
            int64_t rcx_12 = rdx_7 + 1
            int64_t r9_9 = r9_7 * rbp_1 + r8_9
            
            if (r9_9 u>= r8_9)
                rcx_12 = rdx_7
            
            int64_t rax_9 = r9_9 + r11_1
            r14[2] = rax_9
            int64_t rdx_8 = rbx[3]
            int64_t r10_5 = rcx_12 + 1
            uint64_t r9_10 = zx.q(rdx_8.d)
            
            if (rax_9 u>= r11_1)
                r10_5 = rcx_12
            
            uint64_t rdx_9 = rdx_8 u>> 0x20
            int64_t rax_11 = rdx_9 * rbp_1
            int64_t rdx_10 = rdx_9 * rdi_1
            int64_t rcx_13 = rdx_10 + 0x100000000
            int64_t r8_12 = zx.q(r9_10.d) * rdi_1 + rax_11
            
            if (r8_12 u>= rax_11)
                rcx_13 = rdx_10
            
            int64_t result_3 = rcx_13 + (r8_12 u>> 0x20)
            int64_t r8_13 = r8_12 << 0x20
            int64_t result_1 = result_3 + 1
            int64_t r9_12 = r9_10 * rbp_1 + r8_13
            
            if (r9_12 u>= r8_13)
                result_1 = result_3
            
            int64_t rcx_14 = r9_12 + r10_5
            r14[3] = rcx_14
            result = result_1 + 1
            
            if (rcx_14 u>= r10_5)
                result = result_1
            
            rbx = &rbx[4]
            r14 = &r14[4]
            i_1 -= 4
        while ((i_1 & 0xfffffffc) != 0)
    
    if (i_1 != 0)
        int64_t r14_1 = r14 - rbx
        int32_t i
        
        do
            int64_t r8_14 = *rbx
            rbx = &rbx[1]
            uint64_t r10_6 = zx.q(r8_14.d)
            uint64_t r8_15 = r8_14 u>> 0x20
            int64_t r8_16 = r8_15 * rdi_1
            int64_t rcx_16 = r8_15 * rbp_1
            int64_t rdx_11 = r8_16 + 0x100000000
            int64_t r9_15 = zx.q(r10_6.d) * rdi_1 + rcx_16
            
            if (r9_15 u>= rcx_16)
                rdx_11 = r8_16
            
            int64_t result_4 = rdx_11 + (r9_15 u>> 0x20)
            int64_t r9_16 = r9_15 << 0x20
            int64_t result_2 = result_4 + 1
            int64_t r10_8 = r10_6 * rbp_1 + r9_16
            
            if (r10_8 u>= r9_16)
                result_2 = result_4
            
            int64_t rdx_12 = r10_8 + result
            bool cond:9_1 = rdx_12 u>= result
            *(r14_1 + rbx - 8) = rdx_12
            result = result_2 + 1
            
            if (cond:9_1)
                result = result_2
            
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
