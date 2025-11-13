// 函数: sub_142bbc220
// 地址: 0x142bbc220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x3e8)
uint64_t rdi = zx.q(arg2)

if (*(r10 + 0x24) != 2)
    int64_t rdx_1 = *(r10 + 0x10e0)
    
    if (rdx_1 != 0)
        uint32_t rcx_3 = zx.d(*(*(r10 + 0x4d8) + (rdi << 1)))
        
        if (rcx_3 != 0xffff)
            char* rax_8
            
            if (rcx_3 u<= 0x186)
                rax_8 = (*(rdx_1 + 0x28))(rcx_3)
            label_142bbc2df:
                
                if (rax_8 != 0)
                    sub_142b99b80(arg3, rax_8, arg4)
            else
                uint64_t rcx_4 = zx.q(rcx_3 - 0x187)
                
                if (rcx_4.d u< *(r10 + 0x5c0))
                    rax_8 = *(*(r10 + 0x5c8) + (rcx_4 << 3))
                    goto label_142bbc2df
        
        return 0
else
    int64_t* rax_3 = sub_142b99bf0(sub_142b922e0(*(*(arg1 + 0x90) + 8), "sfnt"), "glyph-dict", 0)
    
    if (rax_3 != 0)
        int64_t rax_4 = *rax_3
        
        if (rax_4 != 0)
            return rax_4(arg1, zx.q(rdi.d), arg3, zx.q(arg4))

return 0xb
