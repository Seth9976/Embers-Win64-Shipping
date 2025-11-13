// 函数: sub_141e246e0
// 地址: 0x141e246e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg1 + 0x90)
int512_t zmm2
zmm2.o = 0xbf800000
int32_t zmm1 = (zx.o(0)).d

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x150))
    void* r8_2 = sx.q(arg2) * 0x58 + *(arg1 + 0x148)
    char rax_2 = *(r8_2 + 0x19)
    
    if (rax_2 == 0)
        zmm1 = *(r8_2 + 0x24)
    else
        uint32_t rcx = zx.d(rax_2)
        
        if (rcx == 1)
            zmm1 = *(r8_2 + 0x24) f+ *(r8_2 + 0x1c)
        else if (rcx != 2)
            zmm1 = *(r8_2 + 0x24)
        else
            zmm1 = *(r8_2 + 0x24) f* *(r8_2 + 0x20) f+ *(r8_2 + 0x1c)

if (arg2 + 1 s>= 0 && arg2 + 1 s< *(arg1 + 0x150))
    void* rcx_3 = (sx.q(arg2) + 1) * 0x58 + *(arg1 + 0x148)
    char rax_6 = *(rcx_3 + 0x19)
    
    if (rax_6 != 0)
        uint32_t rdx = zx.d(rax_6)
        
        if (rdx == 1)
            return *(rcx_3 + 0x24) f+ *(rcx_3 + 0x1c) f- zmm1
        
        if (rdx == 2)
            return *(rcx_3 + 0x24) f* *(rcx_3 + 0x20) f+ *(rcx_3 + 0x1c) f- zmm1
    
    zmm0 = *(rcx_3 + 0x24)

return zmm0 f- zmm1
