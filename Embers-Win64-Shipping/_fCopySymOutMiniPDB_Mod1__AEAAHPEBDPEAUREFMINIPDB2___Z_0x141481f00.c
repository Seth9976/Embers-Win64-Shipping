// 函数: ?fCopySymOutMiniPDB@Mod1@@AEAAHPEBDPEAUREFMINIPDB2@@@Z
// 地址: 0x141481f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_141227850(*(arg2 + 0x20)).b == 1)
label_141481fe2:
    result.b = 1
else
    int64_t rbp_1 = sx.q(*(arg2 + 0x28))
    int32_t r8_1 = 0
    result = rbp_1 * 0x70 + *(arg1 + 0x2f0)
    int32_t r15_1 = *(result + 0x18)
    
    if (r15_1 s> 0)
        int64_t i_2 = sx.q(*(arg1 + 0xa8))
        uint64_t* rsi_1 = *(result + 0x10)
        
        do
            void* rbx
            rbx.b = 0
            
            if (i_2 s> 0)
                int64_t rdx = *(arg1 + 0xa0)
                int64_t i_1 = i_2
                int64_t r10_1 = *(*rsi_1 + 0x48)
                int64_t i
                
                do
                    if (r10_1 == 0 || r10_1 == rdx)
                        void* r9_3 = rbp_1 * 0x78 + 0x10 + *(rdx + 0x18d0)
                        void* rax_1 = *(r9_3 + 0x10)
                        
                        if (rax_1 != 0)
                            r9_3 = rax_1
                        
                        int32_t rax_2 = r8_1
                        
                        if (r8_1 s< 0)
                            rax_2 = r8_1 + 0x1f
                        
                        result.b = (*(r9_3 + (sx.q(rax_2 s>> 5) << 2)) & rol.d(1, r8_1.b)) != 0
                        rbx.b |= result.b
                    
                    rdx += 0x5240
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                
                if (rbx.b != 0)
                    goto label_141481fe2
            
            r8_1 += 1
            rsi_1 = &rsi_1[1]
        while (r8_1 s< r15_1)
    
    result.b = 0

return result
