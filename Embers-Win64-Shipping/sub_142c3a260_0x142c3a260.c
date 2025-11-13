// 函数: sub_142c3a260
// 地址: 0x142c3a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5 - arg4)

if (result.d u>= 2)
    int64_t rsi_1 = *(arg3 + 0x70)
    
    for (; arg4 u< arg5; arg4 += 1)
        result = zx.q(arg4)
        
        if ((1 << ((*(rsi_1 + result * 0x14 + 0x10)).b & 0x1f) & 0x1c00) == 0)
            uint64_t rbx_1 = zx.q(arg4 + 1)
            
            if (rbx_1.d u< arg5)
                int16_t* r8_2 = rsi_1 + ((rbx_1 + ((rbx_1 + 1) << 2)) << 2)
                
                while ((1 << ((*r8_2).b & 0x1f) & 0x1c00) != 0)
                    rbx_1 = zx.q(rbx_1.d + 1)
                    r8_2 = &r8_2[0xa]
                    
                    if (rbx_1.d u>= arg5)
                        break
            
            result = sub_142c39eb0(arg1, arg2, arg3, arg4, rbx_1.d, arg6)
            arg4 = (rbx_1 - 1).d

return result
