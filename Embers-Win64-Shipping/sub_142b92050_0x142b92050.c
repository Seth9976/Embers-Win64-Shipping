// 函数: sub_142b92050
// 地址: 0x142b92050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

if (arg3 != 0 && arg4 != 0)
    *arg3 = 0
    
    if (arg2 s>= *(arg1 + 0x10))
        return 0x10
    
    if ((*(arg1 + 8) & 0x200) != 0)
        int64_t* r8 = *(*(arg1 + 0xd0) + 0x38)
        
        if (r8 != -2)
            if (r8 != 0)
            label_142b920f7:
                int64_t rax_5 = *r8
                
                if (rax_5 != 0)
                    return rax_5(arg1, zx.q(arg2), arg3, zx.q(arg4))
            else
                int64_t* rcx = *(arg1 + 0x90)
                int64_t r9 = *(*rcx + 0x30)
                
                if (r9 != 0)
                    r8 = r9(rcx, "glyph-dict")
                
                int64_t* rdx = -fffffffffffffffe
                
                if (r8 != 0)
                    rdx = r8
                
                *(*(arg1 + 0xd0) + 0x38) = rdx
                
                if (r8 != 0)
                    goto label_142b920f7

return 6
