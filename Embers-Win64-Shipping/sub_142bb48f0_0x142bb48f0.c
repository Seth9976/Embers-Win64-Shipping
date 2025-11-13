// 函数: sub_142bb48f0
// 地址: 0x142bb48f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (*(arg1 + 0x409) != 0)
    void* rax_1 = *(arg1 + 0x410)
    
    if (rax_1 != 0)
        void* rdx_1
        
        if (arg4 == 0)
            if (*(rax_1 + 0x40) == 0)
                *(*(arg1 + 0x410) + 0x44) = sub_142bb1900(arg1, 0, arg5)
            
            void* rdx_2 = *(arg1 + 0x410)
            
            if (*(rdx_2 + 0x41) == 0)
                return zx.q(*(rdx_2 + 0x44))
            
            rdx_1 = *(rdx_2 + 0x48)
        else
            if (*(rax_1 + 0x50) == 0)
                arg2.b = 1
                *(*(arg1 + 0x410) + 0x54) = sub_142bb1900(arg1, arg2.b, arg5)
            
            void* rdx = *(arg1 + 0x410)
            
            if (*(rdx + 0x51) == 0)
                return zx.q(*(rdx + 0x54))
            
            rdx_1 = *(rdx + 0x58)
        
        int64_t r8 = *(rdx_1 + 0x30)
        int32_t r10_1
        
        if (r8 == 0)
            r10_1 = 0
            
            if (rdi u>= **(rdx_1 + 8))
                return 6
        else
            int32_t rax_8 = *(rdx_1 + 0x20)
            
            if (rdi u>= rax_8)
                rdi = rax_8 - 1
            
            uint64_t rcx_2 = zx.q(rdi) << 2
            rdi = *(rcx_2 + r8)
            r10_1 = *(rcx_2 + *(rdx_1 + 0x28))
        
        int32_t rax_11 = sub_142bb0d40(arg1, rdx_1, r10_1, rdi)
        *arg3 += rax_11

return 0
