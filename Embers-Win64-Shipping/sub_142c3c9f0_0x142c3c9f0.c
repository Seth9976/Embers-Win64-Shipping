// 函数: sub_142c3c9f0
// 地址: 0x142c3c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = 2
uint64_t result

if (sub_142c3ae60(arg2, arg1, 2) != 0)
    uint16_t r8_1 = (*(arg3 + 0x10)).w + 1
    uint16_t r9_1 = r8_1 u>> 8
    *arg1 = r9_1.b
    arg1[1] = r8_1.b
    
    if (zx.w(r9_1.b) * 0x100 != neg.w(zx.w(r8_1.b)))
        rdi = ((zx.d(r9_1.b) << 8) + zx.d(r8_1.b)) * 2
    
    if (sub_142c3ae60(arg2, arg1, rdi) == 0)
        result.b = 0
    else
        int32_t rcx_2 = *(arg3 + 0x10)
        result = 0
        
        if (rcx_2 != 0)
            int128_t* const rcx_3
            
            if (0 u>= rcx_2)
                rcx_3 = &data_14369a5d0
                goto label_142c3ca9e
            
            do
                rcx_3 = *(arg3 + 8) + (result << 1)
            label_142c3ca9e:
                *(arg1 + (result << 1) + 2) = *rcx_3
                result = zx.q(result.d + 1)
            while (result.d u< *(arg3 + 0x10))
        
        result.b = 1
else
    result.b = 0

return result
