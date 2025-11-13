// 函数: sub_141010a20
// 地址: 0x141010a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg2 + 0x28) != *(arg3 + 0x28) || *(arg2 + 0x18) != *(arg3 + 0x18)
    || *(arg2 + 0x58) != *(arg3 + 0x58) || *(arg2 + 0x38) != *(arg3 + 0x38)
    || *(arg2 + 0x48) != *(arg3 + 0x48))
labelid_2:
    result.b = 0
else
    int32_t rbp_1 = *(arg2 + 0x218)
    
    if (rbp_1 != *(arg3 + 0x218))
    labelid_2:
        result.b = 0
    else
        int32_t rsi_1 = *(arg2 + 0x248)
        
        if (rsi_1 != *(arg3 + 0x248) || *(arg2 + 0x24c) != *(arg3 + 0x24c)
            || *(arg2 + 0x224) != *(arg3 + 0x224) || *(arg2 + 0x270) != *(arg3 + 0x270)
            || *(arg2 + 8) != *(arg3 + 8))
        labelid_2:
            result.b = 0
        else if (memcmp(arg2 + 0x60, arg3 + 0x60, 0x148).d != 0
            || *(arg2 + 0x1a8) != *(arg3 + 0x1a8))
        labelid_2:
            result.b = 0
        else
            result = memcmp(arg2 + 0x1ac, arg3 + 0x1ac, 0x2c)
            
            if (result.d != 0)
            labelid_2:
                result.b = 0
            else if (memcmp(arg2 + 0x1d8, arg3 + 0x1d8, zx.q((result + 0x38).d)).d != 0
                || *(arg2 + 0x220) != *(arg3 + 0x220) || *(arg2 + 0x258) != *(arg3 + 0x258)
                || *(arg2 + 0x250) != *(arg3 + 0x250) || *(arg2 + 0x254) != *(arg3 + 0x254))
            label_141010da7:
                result.b = 0
            else
                int32_t r9_1 = 0
                int32_t rdx_3 = 0
                
                if (rsi_1 != 0)
                    void* rcx_3 = arg3 + 0x228
                    
                    do
                        if (*(arg2 - arg3 + rcx_3) != *rcx_3)
                            goto label_141010da7_2
                        
                        rdx_3 += 1
                        rcx_3 += 4
                    while (rdx_3 u< rsi_1)
                
                if (*(arg2 + 0x278) != *(arg3 + 0x278) || *(arg2 + 0x280) != *(arg3 + 0x280)
                    || *(arg2 + 0x2b8) != *(arg3 + 0x2b8) || *(arg2 + 0x2c0) != *(arg3 + 0x2c0)
                    || *(arg2 + 0x2a8) != *(arg3 + 0x2a8) || *(arg2 + 0x2b0) != *(arg3 + 0x2b0)
                    || *(arg2 + 0x288) != *(arg3 + 0x288) || *(arg2 + 0x290) != *(arg3 + 0x290)
                    || *(arg2 + 0x298) != *(arg3 + 0x298) || *(arg2 + 0x2a0) != *(arg3 + 0x2a0))
                label_141010da7_1:
                    result.b = 0
                else
                    int64_t r10_1 = *(arg2 + 0x210)
                    int64_t r11_1 = *(arg3 + 0x210)
                    
                    if (r10_1 != r11_1 && rbp_1 != 0)
                        do
                            uint64_t rax_1 = zx.q(r9_1) << 5
                            int64_t* rcx_4 = r11_1 + rax_1
                            uint64_t* rdx_4 = r10_1 + rax_1
                            
                            if (rdx_4[1].d != rcx_4[1].d)
                                goto label_141010da7_2
                            
                            if (*(rdx_4 + 0xc) != *(rcx_4 + 0xc))
                                goto label_141010da7_2
                            
                            if (rdx_4[2].d != rcx_4[2].d)
                                goto label_141010da7_2
                            
                            if (*(rdx_4 + 0x14) != *(rcx_4 + 0x14))
                                goto label_141010da7_2
                            
                            if (rdx_4[3].d != rcx_4[3].d)
                                goto label_141010da7_2
                            
                            if (*(rdx_4 + 0x1c) != *(rcx_4 + 0x1c))
                                goto label_141010da7_2
                            
                            result = *rdx_4
                            int64_t r8_3 = *rcx_4
                            
                            if (result != r8_3)
                                int64_t r8_4 = r8_3 - result
                                uint32_t i
                                uint32_t rdx_5
                                
                                do
                                    rdx_5 = zx.d(*result)
                                    i = zx.d(*(result + r8_4))
                                    
                                    if (rdx_5 != i)
                                        break
                                    
                                    result += 1
                                while (i != 0)
                                
                                if (rdx_5 - i != 0)
                                    goto label_141010da7_2
                            
                            r9_1 += 1
                        while (r9_1 u< rbp_1)
                    
                    if (*(arg2 + 0x2d8) != *(arg3 + 0x2d8) || *(arg2 + 0x2f8) != *(arg3 + 0x2f8)
                        || *(arg2 + 0x2f0) != *(arg3 + 0x2f0) || *(arg2 + 0x2e0) != *(arg3 + 0x2e0)
                        || *(arg2 + 0x2e8) != *(arg3 + 0x2e8))
                    label_141010da7_2:
                        result.b = 0
                    else
                        result.b = 1

return result
