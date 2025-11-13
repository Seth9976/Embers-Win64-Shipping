// 函数: sub_142ac2a80
// 地址: 0x142ac2a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int32_t r10 = arg3

if (arg3 s> 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x24))
    
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10 + r11)
        int64_t r9 = sx.q((temp1_1 - temp0_1) s>> 1)
        uint32_t rdx_1 = zx.d(*(arg2 + (r9 << 1)))
        uint64_t r8 = zx.q(rdx_1)
        int64_t r8_1
        
        if (rdx_1 s>= rsi_1.d)
            r8_1 = r8 - rsi_1 + *(arg1 + 0x18)
        else
            r8_1 = r8 + *(arg1 + 8)
        
        char* rax_5 = arg4
        void* rdx_3 = r8_1 - arg4
        int32_t rax_6
        bool c_1
        
        if (*(arg1 + 0x3b) == 0)
            char i
            
            do
                i = *rax_5
                char temp2_1 = *(rax_5 + rdx_3)
                c_1 = i u< temp2_1
                
                if (i != temp2_1)
                    goto label_142ac2b25
                
                rax_5 = &rax_5[1]
            while (i != 0)
            rax_6 = 0
        else
            while (true)
                char rcx_1 = *rax_5
                char temp3_1 = *(rax_5 + rdx_3)
                c_1 = rcx_1 u< temp3_1
                
                if (rcx_1 != temp3_1)
                label_142ac2b25:
                    rax_6 = sbb.d(rax_5.d, rax_5.d, c_1) | 1
                    break
                
                rax_5 = &rax_5[1]
                
                if (rcx_1 == 0)
                    rax_6 = 0
                    break
        
        if (rax_6 s>= 0)
            if (rax_6 s<= 0)
                *arg5 = r8_1
                return zx.q(r9.d)
            
            r11 = (r9 + 1).d
        else
            r10 = r9.d
    while (r11 s< r10)

return 0xffffffff
