// 函数: sub_142c22b10
// 地址: 0x142c22b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg1 u<= arg1[0xe] - 1)
label_142c22bcd:
    result.b = 0
else
    while (true)
        *arg1 -= 1
        void* rdx_1 = *(arg1 + 8)
        int32_t* rsi_1 = *(*(rdx_1 + 0x90) + 0x78) + zx.q(*arg1) * 0x14
        result = sub_142c22570(&arg1[4], rdx_1, rsi_1)
        int32_t rbp_1 = result.d
        
        if (result.d != 1)
            if ((rsi_1[1] & arg1[6]) == 0)
            label_142c22bbc:
                
                if (rbp_1 == 0)
                    goto label_142c22bcd
            else
                char r8_2 = arg1[7].b
                
                if (r8_2 != 0 && r8_2 != *(rsi_1 + 0xf))
                    goto label_142c22bbc
                
                result = *(arg1 + 0x20)
                
                if (result != 0)
                    int32_t rcx_5
                    rcx_5.b = result(zx.q(*rsi_1), *(arg1 + 0x30), *(arg1 + 0x28)).b != 0
                    
                    if (rcx_5 == 1)
                    label_142c22bb0:
                        arg1[0xe] -= 1
                        result.b = 1
                        *(arg1 + 0x30) += 2
                        break
                    
                    if (rcx_5 != 2)
                        goto label_142c22bbc
                    
                    goto label_142c22bac
                
            label_142c22bac:
                
                if (rbp_1 == 0)
                    goto label_142c22bb0
        
        if (*arg1 u<= arg1[0xe] - 1)
            goto label_142c22bcd

return result
