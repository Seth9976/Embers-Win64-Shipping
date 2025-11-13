// 函数: sub_14234b920
// 地址: 0x14234b920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x78) s<= 0)
    return 

int64_t* r11_1 = nullptr
int64_t rbx_1 = 0

do
    int64_t* r10_2 = *(arg1 + 0x70) + rbx_1
    int64_t rdx = **r10_2
    
    if (*(*(r11_1 + rdx) + 0xec) u> 0)
        void* r9_1 = nullptr
        
        if (i s>= 0 && i s< *(arg2 + 0x578))
            r9_1 = *(arg2 + 0x570) + sx.q(i) * 0x28
        
        void* rdx_1 = *(rdx + (sx.q(r10_2[1].d) << 3))
        
        if (r9_1 != 0)
            int64_t rax = *(r9_1 + 0x18)
            
            if (rax == 0 || *(rax + 0x40) != *(rdx_1 + 0xec))
                rax = *(r9_1 + 0x20)
                
                if (rax == 0 || *(rax + 0x40) != *(rdx_1 + 0xec))
                    rax = *(rdx_1 + 0x308)
                    
                    if (rax == 0)
                        rax = rdx_1 + 0x138
            
            if (r10_2[0x5d] != rax)
                r10_2[0x5d] = rax
    
    i += 1
    rbx_1 += 0x370
    r11_1 = &r11_1[1]
while (i s< *(arg1 + 0x78))
