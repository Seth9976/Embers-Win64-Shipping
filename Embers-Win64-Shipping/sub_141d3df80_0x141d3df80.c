// 函数: sub_141d3df80
// 地址: 0x141d3df80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0

if (*(arg1 + 0x1c0) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x188) s> 0)
        char* r11_1 = nullptr
        int64_t* rsi_1 = nullptr
        
        do
            if ((r11_1[*(arg1 + 0x160)] & 1) != 0)
                int64_t rax_3 = *(arg1 + 0x180)
                int64_t r8_1 = 0
                int32_t* rdx_2 = *(rsi_1 + rax_3)
                uint64_t r9_2 = sx.q(*(rsi_1 + rax_3 + 8)) << 2 u>> 2
                
                if (rdx_2 u> &rdx_2[sx.q(*(rsi_1 + rax_3 + 8))])
                    r9_2 = 0
                
                if (r9_2 != 0)
                    do
                        int64_t rcx = sx.q(*rdx_2)
                        rdx_2 = &rdx_2[1]
                        int64_t rax_6 = *(arg1 + 0x160)
                        r8_1 += 1
                        *(rcx + rax_6) |= 1
                    while (r8_1 != r9_2)
            
            i += 1
            r11_1 = &r11_1[1]
            rsi_1 = &rsi_1[2]
        while (i s< *(arg1 + 0x188))
else
    int32_t i_1 = 0
    
    if (*(arg1 + 0x168) s> 0)
        int64_t rdx_1 = 0
        
        do
            int64_t rax_1 = *(arg1 + 0x160)
            rdx_1 += 1
            i_1 += 1
            *(rdx_1 + rax_1 - 1) |= 1
        while (i_1 s< *(arg1 + 0x168))

*(arg1 + 0x1d0) = 0

if (*(arg1 + 0x1d4) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x1c8, 0)

if (*(arg1 + 0x168) s> 0)
    char* r14_1 = nullptr
    
    do
        if ((r14_1[*(arg1 + 0x160)] & 1) != 0)
            int64_t rbp_1 = sx.q(*(arg1 + 0x1d0))
            int32_t rax_8 = (rbp_1 + 1).d
            *(arg1 + 0x1d0) = rax_8
            
            if (rax_8 s> *(arg1 + 0x1d4))
                sub_1405a4cf0(arg1 + 0x1c8)
            
            *(*(arg1 + 0x1c8) + (rbp_1 << 2)) = i_2
        
        i_2 += 1
        r14_1 = &r14_1[1]
    while (i_2 s< *(arg1 + 0x168))

return sub_141d42080(arg1, arg1 + 0x1c8) __tailcall
