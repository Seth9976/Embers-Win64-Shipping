// 函数: sub_1427d03a0
// 地址: 0x1427d03a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0

if (*(arg1 + 0x68) u> 0)
    int32_t* rcx = *(arg1 + 0x60)
    int32_t rsi_1 = *rcx
    
    if (rsi_1 != 0xffffffff)
    label_1427d03f4_1:
        
        while (true)
        label_1427d03f4:
            int64_t* rcx_3 = *(*(arg1 + 0x50) + zx.q(rsi_1) * 0x10 + 8)
            
            if (physx::shdfnd::stricmp((*(*rcx_3 + 8))(rcx_3), arg2) == 0)
                return *(*(arg1 + 0x50) + zx.q(rsi_1) * 0x10 + 8)
            
            rsi_1 = *(*(arg1 + 0x58) + (zx.q(rsi_1) << 2))
            
            if (rsi_1 == 0xffffffff)
                while (true)
                    rdi = zx.q(rdi.d + 1)
                    
                    if (rdi.d == *(arg1 + 0x6c))
                        break
                    
                    rsi_1 = *(*(arg1 + 0x60) + (rdi << 2))
                    
                    if (rsi_1 != 0xffffffff)
                        goto label_1427d03f4
                
                if (rsi_1 == 0xffffffff)
                    break
    else
        while (true)
            rdi = zx.q(rdi.d + 1)
            
            if (rdi.d == *(arg1 + 0x6c))
                break
            
            rsi_1 = rcx[rdi]
            
            if (rsi_1 != 0xffffffff)
                goto label_1427d03f4_1
        
        if (rsi_1 != 0xffffffff)
            goto label_1427d03f4_1

return 0
