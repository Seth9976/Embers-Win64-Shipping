// 函数: sub_142618250
// 地址: 0x142618250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t r11_1 = 0

do
    void* rax_1 = *(arg1 + 0x90)
    void* rax = rax_1 + r11_1
    
    if (rax_1 != neg.q(r11_1))
        void* rcx = *(rax + 8)
        
        if (rcx != 0)
            int32_t j = 0
            
            if (*(rcx + 0x34) s> 0)
                int64_t r8 = 0
                
                do
                    int64_t rcx_1 = *(rax + 0x48)
                    
                    if (*(r8 + rcx_1 + 0x20) == arg2)
                        void* rdx_2 = (zx.q(*(r8 + rcx_1 + 0x24)) << 5) + *(rax + 0x10)
                        *(rdx_2 + 0x1f) &= 0xc0
                        *(rdx_2 + 0x1f) |= arg3 & 0x3f
                        *(rdx_2 + 0x1c) = arg4
                    
                    j += 1
                    r8 += 0x28
                while (j s< *(*(rax + 8) + 0x34))
    
    i += 1
    r11_1 += 0xb0
while (i s< *(arg1 + 0x30))
