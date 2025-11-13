// 函数: sub_141bc9df0
// 地址: 0x141bc9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a8) == 0)
    *(arg1 + 0x1b4) &= 0x7f
    sub_141be8130(arg1, arg2)
else
    char rax_1 = sub_141be8130(arg1, arg2)
    char rcx = *(arg1 + 0x1b4)
    void* r8_1 = *(arg1 + 0x1a8)
    
    if (rax_1 == 0)
        *(arg1 + 0x1b4) = rcx & 0x7f
        *(r8_1 + 8) |= 0x40
    else
        *(arg1 + 0x1b4) = rcx | 0x80
        *(r8_1 + 8) &= 0xffffffbf

int64_t* rax_2 = sub_141bb2670(arg1)

if (rax_2 != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x1a0) s> 0)
        int32_t rbp_1 = 1
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rax_3 = rax_2[0x6b]
            void* rdx = &rax_3[sx.q(rax_2[0x6c].d)]
            
            if (rax_3 == rdx)
            label_141bc9ebe:
                int32_t rax_4 = *(arg1 + 0x1a0)
                int32_t rcx_5 = rax_4 - i
                
                if (rcx_5 != 1)
                    memmove((sx.q(i) << 4) + *(arg1 + 0x198), (sx.q(rbp_1) << 4) + *(arg1 + 0x198), 
                        (rcx_5 - 1) << 4)
                    rax_4 = *(arg1 + 0x1a0)
                
                *(arg1 + 0x1a0) = rax_4 - 1
                sub_1405a5010(arg1 + 0x198)
                i -= 1
                rbp_1 -= 1
                rsi_1 -= 0x10
            else
                while (*rax_3 != *(rsi_1 + *(arg1 + 0x198)))
                    rax_3 = &rax_3[1]
                    
                    if (rax_3 == rdx)
                        goto label_141bc9ebe
            
            i += 1
            rbp_1 += 1
            rsi_1 = &rsi_1[2]
        while (i s< *(arg1 + 0x1a0))

return sub_140594850() __tailcall
