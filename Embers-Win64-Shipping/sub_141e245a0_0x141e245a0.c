// 函数: sub_141e245a0
// 地址: 0x141e245a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x150))
int32_t r9 = 0
float zmm2 = arg2

if (rax.d s> 0)
    float zmm3 = *(arg1 + 0x90)
    int512_t zmm4
    zmm4.o = 0xbf800000
    int64_t rcx = 0
    int64_t r11_1 = 0
    
    do
        if (r11_1 s< 0 || r9 s>= *(arg1 + 0x150))
            arg2 = (zx.o(0)).d
        else
            int64_t r8_1 = *(arg1 + 0x148)
            char rax_1 = *(rcx + r8_1 + 0x19)
            
            if (rax_1 == 0)
                arg2 = *(rcx + r8_1 + 0x24)
            else
                uint32_t rdx_1 = zx.d(rax_1)
                
                if (rdx_1 == 1)
                    arg2 = *(rcx + r8_1 + 0x24) f+ *(rcx + r8_1 + 0x1c)
                else if (rdx_1 != 2)
                    arg2 = *(rcx + r8_1 + 0x24)
                else
                    arg2 = *(rcx + r8_1 + 0x24) f* *(rcx + r8_1 + 0x20) f+ *(rcx + r8_1 + 0x1c)
        
        int64_t temp0_1 = r11_1
        r11_1 += 1
        float zmm0
        
        if (temp0_1 + 1 s< 0 || r9 + 1 s>= *(arg1 + 0x150))
            zmm0 = zmm3
        else
            int64_t r8_2 = *(arg1 + 0x148)
            char rax_3 = *(rcx + r8_2 + 0x71)
            
            if (rax_3 == 0)
                zmm0 = *(rcx + r8_2 + 0x7c)
            else
                uint32_t rdx_3 = zx.d(rax_3)
                
                if (rdx_3 == 1)
                    zmm0 = *(rcx + r8_2 + 0x7c) f+ *(rcx + r8_2 + 0x74)
                else if (rdx_3 != 2)
                    zmm0 = *(rcx + r8_2 + 0x7c)
                else
                    zmm0 = *(rcx + r8_2 + 0x7c) f* *(rcx + r8_2 + 0x78) f+ *(rcx + r8_2 + 0x74)
        
        if (not(arg2 > zmm2))
            if (zmm2 < zmm3)
                if (zmm0 > zmm2)
                    return zx.q(r9)
            else if (not(zmm0 < zmm2))
                return zx.q(r9)
        
        r9 += 1
        rcx += 0x58
    while (r11_1 s< rax)

return 0xffffffff
