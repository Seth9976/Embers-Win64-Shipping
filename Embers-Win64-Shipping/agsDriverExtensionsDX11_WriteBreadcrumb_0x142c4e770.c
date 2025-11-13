// 函数: agsDriverExtensionsDX11_WriteBreadcrumb
// 地址: 0x142c4e770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 != 0)
    uint64_t r11_1 = zx.q(*(arg2 + 0xc))
    
    if (r11_1.d u< *(arg1 + 0x198))
        int64_t* r10 = *(arg1 + 0x180)
        
        if (r10 == 0 || *(arg1 + 0x188) == 0)
            return 6
        
        int32_t r9 = arg2[1].d
        int64_t var_18 = 0
        
        if (r9 != 0)
            int32_t rax_1 = 0
            arg3 = 2
            
            if (r9 == 1)
                rax_1 = 2
            
            var_18.d = rax_1
        else
            var_18.d = 1
        
        int64_t var_28 = *arg2
        uint64_t var_20 = zx.q((r11_1 << 3).d)
        int64_t var_10 = *(arg1 + 0x190)
        int32_t rax_5 = (*(*r10 + 0x28))(r10, &var_28, arg3)
        int32_t rax_6 = neg.d(rax_5)
        return zx.q(sbb.d(rax_6, rax_6, rax_5 != 0)) & 8

return 2
