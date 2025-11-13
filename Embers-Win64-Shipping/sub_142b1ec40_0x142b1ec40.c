// 函数: sub_142b1ec40
// 地址: 0x142b1ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 1)
    return 

int16_t rsi_1 = arg4
int32_t r14_1 = arg2

if ((*(arg1 + 0xe) u<= arg4 && arg4 u< *(arg1 + 0x12)) || arg2 s> arg3)
    return 

int32_t* r15_1 = arg6

do
    int32_t rax = sub_142b73ee0(*arg5, r14_1)
    int32_t rbp_1 = rax
    int32_t var_48_1 = rax
    
    if (rsi_1 u>= *(arg1 + 0x1e))
        int32_t rcx_2 = rax | 0x80000000
        rbp_1 = rcx_2 | 0x40000000
        
        if (rsi_1 u>= 0xfc00)
            rbp_1 = rcx_2
        
        goto label_142b1ee25
    
    if (rsi_1 u>= *(arg1 + 0xe))
        int32_t rbx_1 = r14_1
        int16_t rdi_1 = rsi_1
        
        if (rsi_1 u>= *(arg1 + 0x1a))
            rbx_1 = (zx.d(rsi_1) u>> 3) - zx.d(*(arg1 + 0x1c)) + r14_1
            rdi_1 = sub_142b1e310(arg1, rbx_1)
            rax = rbp_1
        
        if (rdi_1 u> *(arg1 + 0xe))
            int64_t rcx_4 = *(arg1 + 0x30)
            uint64_t rdx_3 = zx.q(rdi_1) u>> 1
            void* rsi_2 = rcx_4 + (rdx_3 << 1)
            uint32_t rcx_5 = zx.d(*(rcx_4 + (rdx_3 << 1)))
            uint64_t r15_3 = zx.q(rcx_5) & 0x1f
            
            if (rcx_5.b s< 0 && r14_1 == rbx_1 && *(rsi_2 - 2) != 0)
                rbp_1 = rax | 0x80000000
            
            if (r15_3.d != 0)
                uint32_t r8 = zx.d(*(rsi_2 + 2))
                int64_t rbx_5 = 1
                
                if ((r8 & 0xfffffc00) == 0xd800)
                    rbx_5 = 2
                    r8 = ((r8 - 0xd7f7) << 0xa) + zx.d(*(rsi_2 + 4))
                
                sub_142b19a70(arg5, r14_1, r8, arg6)
                
                if (rdi_1 u>= *(arg1 + 0x12) && rbx_5 u< r15_3)
                    do
                        uint32_t rdi_4 = zx.d(*(rsi_2 + 2 + (rbx_5 << 1)))
                        rbx_5 += 1
                        
                        if ((rdi_4 & 0xfffffc00) == 0xd800)
                            rdi_4 = ((rdi_4 - 0xd7f7) << 0xa) + zx.d(*(rsi_2 + 2 + (rbx_5 << 1)))
                            rbx_5 += 1
                        
                        rax = sub_142b73ee0(*arg5, rdi_4)
                        
                        if (rax s>= 0)
                            sub_142b73fe0(*arg5, rdi_4, rax | 0x80000000, arg6)
                    while (rbx_5 s< r15_3)
            
            r15_1 = arg6
            rsi_1 = arg4
            goto label_142b1ee25
        
        sub_142b19a70(arg5, r14_1, rbx_1, r15_1)
    else
        rbp_1 |= 0x40000000
    label_142b1ee25:
        
        if (rbp_1 != var_48_1)
            sub_142b73fe0(*arg5, r14_1, rbp_1, r15_1)
    
    r14_1 += 1
while (r14_1 s<= arg3)
