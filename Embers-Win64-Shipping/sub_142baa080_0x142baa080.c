// 函数: sub_142baa080
// 地址: 0x142baa080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_1
int32_t r12_1

if (*(arg1 + 0x1c) s>= *(arg1 + 0x1d4))
    if (*(arg1 + 0x1fc) == 0 || *(arg1 + 0x1fe) == 0 || *(arg1 + 0x200) == 0)
        r12_1 = 1
    else
        r12_1 = 0
    
    rax_1 = *(arg1 + 0x1c2)

uint32_t result

if (*(arg1 + 0x1c) s< *(arg1 + 0x1d4) || rax_1 u>= *(arg1 + 0x44))
    if (*(arg1 + 0x315) == 0)
        goto label_142baa0ba
    
    *(arg1 + 0x18) = 0x86
label_142baa0ba:
    result = *(arg1 + 0x30)
    *(arg1 + 0x34) = result
    *(arg1 + 0x1d4) = 1
else
    uint64_t rcx = zx.q(rax_1) << 3
    int64_t r14_1
    
    if (r12_1 == 0)
        r14_1 = *(arg1 + 0x58)
    else
        r14_1 = *(arg1 + 0x48)
    
    int32_t* r14_2 = r14_1 + rcx
    int32_t* r13_1 = rcx + *(arg1 + 0x50)
    int16_t rax_4 = *(arg1 + 0x1c4)
    int32_t arg_8
    int32_t r15_1
    
    if (rax_4 u>= *(arg1 + 0x84))
        r15_1 = 0
        arg_8 = 0
    else
        uint64_t rcx_1 = zx.q(rax_4)
        uint64_t rdx_2
        uint64_t r8_2
        
        if (r12_1 == 0)
            int32_t rdx_3 = *(arg1 + 0x180)
            int64_t rax_6 = *(arg1 + 0x98)
            
            if (rdx_3 != *(arg1 + 0x184))
                int32_t rax_7 = sub_142b93e80(*(rax_6 + (rcx_1 << 3)) - *r14_2, rdx_3)
                r8_2 = zx.q(sub_142b93e80(
                    *(*(arg1 + 0x98) + (zx.q(*(arg1 + 0x1c4)) << 3) + 4) - r14_2[1], 
                    *(arg1 + 0x184)))
                rdx_2 = zx.q(rax_7)
            else
                r8_2 = zx.q(*(rax_6 + (rcx_1 << 3) + 4) - r14_2[1])
                rdx_2 = zx.q(*(rax_6 + (rcx_1 << 3)) - *r14_2)
        else
            int64_t rax_5 = *(arg1 + 0x88)
            r8_2 = zx.q(*(rax_5 + (rcx_1 << 3) + 4) - r14_2[1])
            rdx_2 = zx.q(*(rax_5 + (rcx_1 << 3)) - *r14_2)
        
        int32_t rax_9 = (*(arg1 + 0x330))(arg1, rdx_2, r8_2)
        uint64_t rcx_8 = zx.q(*(arg1 + 0x1c4))
        r15_1 = rax_9
        int64_t rax_10 = *(arg1 + 0x90)
        arg_8 = (*(arg1 + 0x328))(arg1, zx.q(*(rax_10 + (rcx_8 << 3)) - *r13_1), 
            zx.q(*(rax_10 + (rcx_8 << 3) + 4) - r13_1[1]))
    
    if (*(arg1 + 0x1d4) s<= 0)
        goto label_142baa0ba
    
    while (true)
        *(arg1 + 0x30) -= 1
        uint64_t rsi_1 = zx.q(*(*(arg1 + 0x28) + (sx.q(*(arg1 + 0x30)) << 2)))
        result = zx.d(*(arg1 + 0xc4))
        
        if (rsi_1.d u< result)
            uint64_t rbp_1 = rsi_1 << 3
            uint64_t rdx_10
            uint64_t r8_7
            
            if (r12_1 == 0)
                int32_t rdx_11 = *(arg1 + 0x180)
                int64_t rax_14 = *(arg1 + 0xd8)
                
                if (rdx_11 != *(arg1 + 0x184))
                    int32_t rax_15 = sub_142b93e80(*(rax_14 + rbp_1) - *r14_2, rdx_11)
                    r8_7 = zx.q(sub_142b93e80(*(*(arg1 + 0xd8) + rbp_1 + 4) - r14_2[1], 
                        *(arg1 + 0x184)))
                    rdx_10 = zx.q(rax_15)
                else
                    r8_7 = zx.q(*(rax_14 + rbp_1 + 4) - r14_2[1])
                    rdx_10 = zx.q(*(rax_14 + rbp_1) - *r14_2)
            else
                int64_t rax_13 = *(arg1 + 0xc8)
                r8_7 = zx.q(*(rax_13 + rbp_1 + 4) - r14_2[1])
                rdx_10 = zx.q(*(rax_13 + rbp_1) - *r14_2)
            
            uint32_t rdi_3 = (*(arg1 + 0x330))(arg1, rdx_10, r8_7)
            int64_t rax_18 = *(arg1 + 0xd0)
            int32_t rax_19 = (*(arg1 + 0x328))(arg1, zx.q(*(rax_18 + rbp_1) - *r13_1), 
                zx.q(*(rax_18 + rbp_1 + 4) - r13_1[1]))
            
            if (rdi_3 == 0)
                rdi_3 = 0
            else if (r15_1 != 0)
                rdi_3 = sub_142b93dd0(rdi_3, arg_8, r15_1)
            
            (*(arg1 + 0x340))(arg1, arg1 + 0xb8, zx.q(rsi_1.w), zx.q(rdi_3 - rax_19))
        else if (*(arg1 + 0x315) != 0)
            *(arg1 + 0x18) = 0x86
            break
        
        *(arg1 + 0x1d4) -= 1
        
        if (*(arg1 + 0x1d4) s<= 0)
            goto label_142baa0ba

return result
