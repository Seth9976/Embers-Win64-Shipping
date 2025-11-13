// 函数: sub_141f66050
// 地址: 0x141f66050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_11 = *(arg1 + 0x430)

if (rax_11 != 0)
    int64_t* rax = *(rax_11 + 0x58)
    
    if (rax != 0 && arg2 s>= 0 && arg2 s< rax[1].d)
        int64_t r9 = sx.q(arg2)
        void* r8 = *(*rax + (r9 << 3))
        
        if (arg2 s< *(arg1 + 0x578))
            void* r11_1 = *(*(arg1 + 0x570) + r9 * 0x28 + 0x18)
            
            if (r11_1 != 0 && *(r11_1 + 0x40) == *(r8 + 0xec))
                return r11_1
        
        if (arg2 s< *(arg1 + 0x578))
            void* rdx = *(*(arg1 + 0x570) + r9 * 0x28 + 0x20)
            
            if (rdx != 0 && *(rdx + 0x40) == *(r8 + 0xec))
                return rdx
        
        void* rcx_2 = *(r8 + 0x308)
        
        if (rcx_2 == 0)
            return r8 + 0x138
        
        return rcx_2

return 0
