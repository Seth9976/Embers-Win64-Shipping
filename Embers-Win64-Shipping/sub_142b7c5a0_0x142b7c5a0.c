// 函数: sub_142b7c5a0
// 地址: 0x142b7c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg3 + 8) & 1) == 0)
    *(arg3 + 8) &= 0x1f
else
    *(arg3 + 8) = 2

int32_t rax = sub_142b7c9e0(arg1, arg2)

while (true)
    int32_t rsi_1 = rax
    int16_t arg_10
    int16_t* rdx_1
    
    while (true)
        void* rcx = *(arg1 + 0x10)
        int16_t rax_1 = *(rcx + 8)
        int32_t rax_3
        
        if (rax_1 s< 0)
            rax_3 = *(rcx + 0xc)
        else
            rax_3 = sx.d(rax_1) s>> 5
        
        if (rsi_1 s>= rax_3)
            return 0
        
        int16_t rdx = *(rcx + 8)
        int32_t rax_5
        
        if (rdx s< 0)
            rax_5 = *(rcx + 0xc)
        else
            rax_5 = sx.d(rdx) s>> 5
        
        int16_t rbx_1
        
        if (rsi_1 u>= rax_5)
            rbx_1 = -1
        else if ((rdx.b & 2) == 0)
            rbx_1 = *(*(rcx + 0x18) + (sx.q(rsi_1) << 1))
        else
            rbx_1 = *(rcx + 0xa + (sx.q(rsi_1) << 1))
        
        uint32_t rcx_3 = zx.d(rbx_1)
        
        if (rcx_3 - 0x21 u<= 0x5d)
            uint64_t rax_9 = zx.q(rcx_3 - 0x30)
            
            if ((rax_9.d u> 0x2a || not(test_bit(0x7fffffe03ff, rax_9))) && rcx_3 - 0x61 u> 0x19
                    && rbx_1 != 0x2d && rbx_1 != 0x5f)
                int16_t rax_12 = *(arg3 + 8)
                
                if ((rax_12 & 0xffe0) != 0)
                    int32_t rdx_4
                    
                    if (rax_12 s< 0)
                        rdx_4 = *(arg3 + 0xc)
                    else
                        rdx_4 = sx.d(rax_12) s>> 5
                    
                    if (sub_142a48fb0(arg3, rdx_4 - 1, 1, &data_14367d7c0, 0, 1) == 0)
                        int16_t rax_14 = *(arg3 + 8)
                        int32_t rcx_8
                        
                        if (rax_14 s< 0)
                            rcx_8 = *(arg3 + 0xc)
                        else
                            rcx_8 = sx.d(rax_14) s>> 5
                        
                        if ((*(arg3 + 8) & 1) != 0 && rcx_8 == 1)
                            sub_142a4afe0(arg3)
                            return zx.q(rsi_1)
                        
                        int32_t rdx_7
                        
                        if (rax_14 s< 0)
                            rdx_7 = *(arg3 + 0xc)
                        else
                            rdx_7 = sx.d(rax_14) s>> 5
                        
                        if (rcx_8 - 1 u< rdx_7)
                            if (rcx_8 - 1 s<= 0x3ff)
                                int32_t rcx_10
                                rcx_10.w = (rcx_8 - 1).w << 5
                                *(arg3 + 8) = (rax_14 & 0x1f) | rcx_10.w
                                return zx.q(rsi_1)
                            
                            *(arg3 + 0xc) = rcx_8 - 1
                            *(arg3 + 8) = rax_14 | 0xffe0
                
                return zx.q(rsi_1)
        
        rdx_1 = &arg_10
        
        if (sub_142b13730(rcx_3) != 0)
            break
        
        arg_10 = rbx_1
        sub_142a48d70(arg3, rdx_1, 0, 1)
        rsi_1 += 1
    
    arg_10 = 0x20
    sub_142a48d70(arg3, rdx_1, 0, 1)
    rax = sub_142b7c9e0(arg1, rsi_1 + 1)
