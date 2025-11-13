// 函数: sub_142b475d0
// 地址: 0x142b475d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc0) == 0)
    void* rdx = *(arg1 + 0xa8)
    
    if (rdx != 0)
        return sub_142b46800(arg2, rdx) __tailcall

if (sub_142b46800(arg2, *(arg1 + 0xa0)) == 0)
    bool rax_1 = sub_142a54580(sub_142b465f0(arg2))
    
    if (rax_1 == 0)
        if (*(arg1 + 0xc0) == 0)
            return rax_1
        
        char rax_3
        
        for (int32_t i = 0; i s< 0xa; i += 1)
            rax_3 = sub_142b46830(arg2, (sx.q(i) << 6) + *(arg1 + 0xc0))
            
            if (rax_3 != 0)
                return 1
        
        return rax_3

return true
