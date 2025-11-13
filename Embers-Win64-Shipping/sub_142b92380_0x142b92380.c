// 函数: sub_142b92380
// 地址: 0x142b92380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && (*(arg1 + 8) & 0x200) != 0 && arg2 != 0)
    void* r8_1 = *(*(arg1 + 0xd0) + 0x38)
    
    if (r8_1 != -2)
        if (r8_1 != 0)
        label_142b923f4:
            int64_t rax_4 = *(r8_1 + 8)
            
            if (rax_4 != 0)
                jump(rax_4)
        else
            int64_t* rcx = *(arg1 + 0x90)
            int64_t r9_1 = *(*rcx + 0x30)
            
            if (r9_1 != 0)
                r8_1 = r9_1(rcx, "glyph-dict")
            
            void* rdx = -fffffffffffffffe
            
            if (r8_1 != 0)
                rdx = r8_1
            
            *(*(arg1 + 0xd0) + 0x38) = rdx
            
            if (r8_1 != 0)
                goto label_142b923f4

return 0
