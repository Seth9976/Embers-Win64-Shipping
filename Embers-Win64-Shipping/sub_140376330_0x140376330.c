// 函数: sub_140376330
// 地址: 0x140376330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_7
uint32_t rbp_7

if (*(arg1 + 0x16f4) == 0)
    rcx_7 = *(arg1 + 0x1714)
    rbp_7 = zx.d(*(arg1 + 0x1710))
else
    int64_t i = 0
    
    do
        uint32_t r14_1 = zx.d(*(*(arg1 + 0x16f8) + (i << 1)))
        uint64_t rsi_1 = zx.q(*(*(arg1 + 0x16e8) + i))
        i += 1
        uint32_t rdi_2
        uint32_t r11_2
        
        if (r14_1 == 0)
            r11_2 = zx.d(*(arg2 + (rsi_1 << 2) + 2))
            int32_t rcx_6 = *(arg1 + 0x1714)
            rdi_2 = zx.d(*(arg2 + (rsi_1 << 2)))
            rbp_7.w = (rdi_2 << rcx_6.b).w | *(arg1 + 0x1710)
            *(arg1 + 0x1710) = rbp_7.w
            
            if (rcx_6 s> 0x10 - r11_2)
            label_1403765da:
                char* rcx_14 = *(arg1 + 0x10)
                uint64_t rsi_8 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rsi_8 + 1).d
                rcx_14[rsi_8] = rbp_7.b
                char rcx_15 = *(arg1 + 0x1711)
                int64_t rsi_9 = *(arg1 + 0x10)
                uint64_t rbx_19 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rbx_19 + 1).d
                *(rsi_9 + rbx_19) = rcx_15
                int32_t rsi_10 = *(arg1 + 0x1714)
                uint32_t rdi_12 = rdi_2 u>> (0x10 - rsi_10.b)
                *(arg1 + 0x1710) = rdi_12.w
                rcx_7 = r11_2 + rsi_10 - 0x10
                rbp_7 = rdi_12
                *(arg1 + 0x1714) = rcx_7
            else
                rcx_7 = rcx_6 + r11_2
                *(arg1 + 0x1714) = rcx_7
        else
            uint64_t rdi_1 = zx.q(*(rsi_1 + &data_1435fb8f0))
            uint32_t r11_1 = zx.d(*(arg2 + (rdi_1 << 2) + 0x406))
            int32_t rcx_1 = *(arg1 + 0x1714)
            uint32_t rbx_1 = zx.d(*(arg2 + (rdi_1 << 2) + 0x404))
            uint32_t rbp_3
            rbp_3.w = (rbx_1 << rcx_1.b).w | *(arg1 + 0x1710)
            *(arg1 + 0x1710) = rbp_3.w
            int32_t rcx_5
            
            if (rcx_1 s<= 0x10 - r11_1)
                rcx_5 = rcx_1 + r11_1
            else
                int64_t r15_2 = *(arg1 + 0x10)
                uint64_t rcx_2 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rcx_2 + 1).d
                *(r15_2 + rcx_2) = rbp_3.b
                char r15_3 = *(arg1 + 0x1711)
                int64_t r12_2 = *(arg1 + 0x10)
                uint64_t rcx_3 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rcx_3 + 1).d
                *(r12_2 + rcx_3) = r15_3
                int32_t rbp_5 = *(arg1 + 0x1714)
                rcx_3.b = 0x10
                rcx_3.b = 0x10 - rbp_5.b
                uint32_t rbx_2 = rbx_1 u>> rcx_3.b
                *(arg1 + 0x1710) = rbx_2.w
                rcx_5 = r11_1 + rbp_5 - 0x10
                rbp_3 = rbx_2
            
            *(arg1 + 0x1714) = rcx_5
            
            if (rdi_1 - 8 u<= 0x13)
                int32_t r11_3 = *(&data_1435fbef0 + (rdi_1 << 2))
                uint32_t rsi_3 = zx.d(rsi_1.w - (*(&data_1435fc060 + (rdi_1 << 2))).w)
                rbp_3 |= rsi_3 << rcx_5.b
                *(arg1 + 0x1710) = rbp_3.w
                
                if (rcx_5 s<= 0x10 - r11_3)
                    rcx_5 += r11_3
                else
                    char* rcx_8 = *(arg1 + 0x10)
                    uint64_t rdi_4 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rdi_4 + 1).d
                    rcx_8[rdi_4] = rbp_3.b
                    char rcx_9 = *(arg1 + 0x1711)
                    int64_t rdi_5 = *(arg1 + 0x10)
                    uint64_t rbx_8 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rbx_8 + 1).d
                    *(rdi_5 + rbx_8) = rcx_9
                    int32_t rdi_6 = *(arg1 + 0x1714)
                    uint32_t rsi_4 = rsi_3 u>> (0x10 - rdi_6.b)
                    *(arg1 + 0x1710) = rsi_4.w
                    rcx_5 = r11_3 + rdi_6 - 0x10
                    rbp_3 = rsi_4
                
                *(arg1 + 0x1714) = rcx_5
            
            uint64_t rbx_11 = zx.q(((r14_1 - 1) u>> 7) + 0x100)
            
            if (r14_1 - 1 u< 0x100)
                rbx_11 = zx.q(r14_1 - 1)
            
            uint64_t r15_4 = zx.q((&data_1435fb6f0)[rbx_11])
            uint32_t r11_5 = zx.d(*(arg3 + (r15_4 << 2) + 2))
            uint32_t rsi_5 = zx.d(*(arg3 + (r15_4 << 2)))
            rbp_7 = rbp_3 | rsi_5 << rcx_5.b
            *(arg1 + 0x1710) = rbp_7.w
            
            if (rcx_5 s<= 0x10 - r11_5)
                rcx_7 = rcx_5 + r11_5
            else
                char* rcx_11 = *(arg1 + 0x10)
                uint64_t rdi_9 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rdi_9 + 1).d
                rcx_11[rdi_9] = rbp_7.b
                char rcx_12 = *(arg1 + 0x1711)
                int64_t rdi_10 = *(arg1 + 0x10)
                uint64_t rbx_14 = zx.q(*(arg1 + 0x28))
                *(arg1 + 0x28) = (rbx_14 + 1).d
                *(rdi_10 + rbx_14) = rcx_12
                int32_t rdi_11 = *(arg1 + 0x1714)
                uint32_t rsi_6 = rsi_5 u>> (0x10 - rdi_11.b)
                *(arg1 + 0x1710) = rsi_6.w
                rcx_7 = r11_5 + rdi_11 - 0x10
                rbp_7 = rsi_6
            
            *(arg1 + 0x1714) = rcx_7
            
            if (r15_4 - 4 u<= 0x19)
                r11_2 = *(&data_1435fbf70 + (r15_4 << 2))
                rdi_2 = zx.d((r14_1 - 1).w - (*(&data_1435fc0e0 + (r15_4 << 2))).w)
                rbp_7 |= rdi_2 << rcx_7.b
                *(arg1 + 0x1710) = rbp_7.w
                
                if (rcx_7 s> 0x10 - r11_2)
                    goto label_1403765da
                
                rcx_7 += r11_2
                *(arg1 + 0x1714) = rcx_7
    while (i u< zx.q(*(arg1 + 0x16f4)))

uint32_t rbx_21 = zx.d(*(arg2 + 0x402))
uint32_t rsi_11 = zx.d(*(arg2 + 0x400))
int16_t rbp_11 = rbp_7.w | (rsi_11 << rcx_7.b).w
*(arg1 + 0x1710) = rbp_11
int32_t rcx_19

if (rcx_7 s<= 0x10 - rbx_21)
    rcx_19 = rcx_7 + rbx_21
else
    int64_t rcx_17 = *(arg1 + 0x10)
    uint64_t rdx_2 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rdx_2 + 1).d
    *(rcx_17 + rdx_2) = rbp_11.b
    rcx_17.b = *(arg1 + 0x1711)
    int64_t rdx_3 = *(arg1 + 0x10)
    uint64_t rbp_12 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rbp_12 + 1).d
    *(rdx_3 + rbp_12) = rcx_17.b
    int32_t rdx_4 = *(arg1 + 0x1714)
    rcx_17.b = 0x10
    rcx_17.b = 0x10 - rdx_4.b
    *(arg1 + 0x1710) = (rsi_11 u>> rcx_17.b).w
    rcx_19 = rbx_21 + rdx_4 - 0x10

*(arg1 + 0x1714) = rcx_19
return arg1
