// 函数: sub_141e2afe0
// 地址: 0x141e2afe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
float zmm1

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x150))
    zmm1 = (zx.o(0)).d
else
    void* rdx_1 = sx.q(arg2) * 0x58 + *(arg1 + 0x148)
    rax = *(rdx_1 + 0x19)
    
    if (rax == 0)
        zmm1 = *(rdx_1 + 0x24)
    else
        uint32_t rcx = zx.d(rax)
        
        if (rcx == 1)
            zmm1 = *(rdx_1 + 0x24) f+ *(rdx_1 + 0x1c)
        else if (rcx != 2)
            zmm1 = *(rdx_1 + 0x24)
        else
            zmm1 = *(rdx_1 + 0x24) f* *(rdx_1 + 0x20) f+ *(rdx_1 + 0x1c)

float zmm0
float zmm2

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x150))
    zmm0 = *(arg1 + 0x90)
    zmm2 = zmm0
else
    void* rcx_3 = sx.q(arg3) * 0x58 + *(arg1 + 0x148)
    rax = *(rcx_3 + 0x19)
    
    if (rax == 0)
        zmm0 = *(rcx_3 + 0x24)
        zmm2 = *(arg1 + 0x90)
    else
        uint32_t rdx_2 = zx.d(rax)
        
        if (rdx_2 == 1)
            zmm0 = *(rcx_3 + 0x24) f+ *(rcx_3 + 0x1c)
            zmm2 = *(arg1 + 0x90)
        else if (rdx_2 != 2)
            zmm0 = *(rcx_3 + 0x24)
            zmm2 = *(arg1 + 0x90)
        else
            zmm2 = *(arg1 + 0x90)
            zmm0 = *(rcx_3 + 0x24) f* *(rcx_3 + 0x20) f+ *(rcx_3 + 0x1c)

if (arg4 f< zmm2)
    if (not(zmm1 f> arg4) && not(zmm0 f<= arg4))
        return 1
else if (not(zmm1 f> arg4) && zmm0 f>= arg4)
    return 1

return 0
