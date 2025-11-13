// 函数: sub_142813980
// 地址: 0x142813980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x48)
uint64_t r9 = 0
char* rax

if (i != 0)
    int64_t r11_1 = *(arg1 + 0x40)
    
    do
        rax = *(r11_1 + r9 * 0x28 + 8)
        void* r8_1 = arg2 - rax
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*rax)
            j = zx.d(*(rax + r8_1))
            
            if (rdx != j)
                break
            
            rax = &rax[1]
        while (j != 0)
        
        if (rdx - j == 0)
            uint64_t rcx = r9 * 5
            uint64_t rax_2
            rax_2.b = 1
            *arg3 = *(r11_1 + (rcx << 3))
            arg3[1] = *(r11_1 + (rcx << 3) + 0x10)
            arg3[2].q = *(r11_1 + (rcx << 3) + 0x20)
            return rax_2
        
        r9 = zx.q(r9.d + 1)
    while (r9.d u< i)

rax.b = 0
return rax
