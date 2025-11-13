// 函数: sub_14224d3f0
// 地址: 0x14224d3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t j = sub_14078ee20(arg4 + 0x188, &arg_18)
uint64_t result = 0
int32_t i = 0

if (*(arg1 + 0x48) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        void* rbx_1 = *(r12_1 + *(arg1 + 0x40))
        
        if (rbx_1 != 0)
            int64_t rbx_2 = *(rbx_1 + 0x80)
            int32_t rsi_1 = -1
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(rbx_2.d, 0) == 0
            result.b = (rbx_2 u>> 0x20).d != 0
            rcx_2.b |= result.b
            
            if (rcx_2.b != 0)
                void* const rcx_6
                
                if (*(arg4 + 0x220) == *(arg4 + 0x24c))
                label_14224d4f0:
                    rcx_6 = nullptr
                else
                    int32_t rax_4 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                    void* r8 = arg4 + 0x250
                    void* rcx_4 = *(r8 + 8)
                    
                    if (rcx_4 != 0)
                        r8 = rcx_4
                    
                    int32_t rax_6 = *(r8 + (((sx.q(*(arg4 + 0x260)) - 1) & sx.q(rax_4)) << 2))
                    
                    if (rax_6 == 0xffffffff)
                    label_14224d4f0_1:
                        rcx_6 = nullptr
                    else
                        int64_t r8_1 = *(arg4 + 0x218)
                        
                        while (true)
                            int64_t rdx_4 = sx.q(rax_6) * 5
                            rcx_6 = r8_1 + (rdx_4 << 2)
                            
                            if (*(r8_1 + (rdx_4 << 2)) == rbx_2)
                                break
                            
                            rax_6 = *(rcx_6 + 0xc)
                            
                            if (rax_6 == 0xffffffff)
                                goto label_14224d4f0_2
                        
                        if (rax_6 == 0xffffffff)
                        label_14224d4f0_2:
                            rcx_6 = nullptr
                
                result = rcx_6 + 8
                
                if (rcx_6 == 0)
                    result = 0
                
                if (result != 0)
                    rsi_1 = *result
            
            if (arg5 != 0 && rsi_1 == j)
            label_14224d546:
                int64_t rbx_3 = sx.q(arg2[1].d)
                int32_t rax_9 = (rbx_3 + 1).d
                arg2[1].d = rax_9
                
                if (rax_9 s> *(arg2 + 0xc))
                    sub_1405a4cf0(arg2)
                
                result = *arg2
                *(result + (rbx_3 << 2)) = i
            else if (rsi_1 s> j)
                int64_t rdx_5 = *(arg4 + 0x1a8)
                result = zx.q(*(rdx_5 + sx.q(rsi_1) * 0xc + 8))
                
                while (result.d != j)
                    result = zx.q(*(rdx_5 + sx.q(result.d) * 0xc + 8))
                    
                    if (result.d == 0xffffffff)
                        goto label_14224d567
                
                goto label_14224d546
        
    label_14224d567:
        i += 1
        r12_1 = &r12_1[1]
    while (i s< *(arg1 + 0x48))

return result
