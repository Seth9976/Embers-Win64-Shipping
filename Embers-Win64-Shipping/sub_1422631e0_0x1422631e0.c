// 函数: sub_1422631e0
// 地址: 0x1422631e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if ((sub_140b5b8a0(*arg3, 0) == 0 | arg3[1] != 0) != 0)
    int32_t rbx_1 = *(arg1 + 0x358)
    int32_t rbx_2 = rbx_1 - 1
    
    if (rbx_1 - 1 s>= 0)
        int64_t rbp_1 = *arg3
        int64_t rdi_2 = sx.q(rbx_2) * 0x18
        int64_t r14_1 = rdi_2
        int32_t temp1_1
        
        do
            int64_t r9_1 = *(arg1 + 0x350)
            
            if (*(rdi_2 + r9_1 + 8) == rbp_1)
                int32_t rdx = *(arg1 + 0x358)
                int32_t rcx_3 = rdx - rbx_2 - 1
                
                if (rcx_3 s>= 1)
                    rcx_3 = 1
                
                if (rcx_3 != 0)
                    memcpy(r14_1 + r9_1, r9_1 + sx.q(rdx - rcx_3) * 0x18, rcx_3 * 0x18)
                    rdx = *(arg1 + 0x358)
                
                *(arg1 + 0x358) = rdx - 1
                sub_1405fde90(arg1 + 0x350)
            
            r14_1 -= 0x18
            rdi_2 -= 0x18
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)

int64_t rdi_3 = sx.q(*(arg1 + 0x358))
int32_t rax_6 = (rdi_3 + 1).d
*(arg1 + 0x358) = rax_6

if (rax_6 s> *(arg1 + 0x35c))
    sub_1405a4df0(arg1 + 0x350)

int64_t rcx_8 = *(arg1 + 0x350)
int64_t rdx_4 = rdi_3 * 3
int32_t rax = arg3[2]
*(rcx_8 + (rdx_4 << 3) + 8) = *arg3
*(rcx_8 + (rdx_4 << 3) + 0x10) = rax
*(rcx_8 + (rdx_4 << 3)) = arg2
*(rcx_8 + (rdx_4 << 3) + 0x14) = 0
