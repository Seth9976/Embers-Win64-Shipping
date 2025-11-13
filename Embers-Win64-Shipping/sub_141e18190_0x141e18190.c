// 函数: sub_141e18190
// 地址: 0x141e18190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3].b != 0)
    char rax_1 = *(arg1 + 0x19)
    arg1[3].b = 0
    float zmm1
    
    if (rax_1 == 0)
        zmm1 = *(arg1 + 0x24)
    else
        uint32_t rcx = zx.d(rax_1)
        
        if (rcx == 1)
            zmm1 = *(arg1 + 0x24) f+ *(arg1 + 0x1c)
        else if (rcx != 2)
            zmm1 = *(arg1 + 0x24)
        else
            zmm1 = *(arg1 + 0x24) f* arg1[4].d f+ *(arg1 + 0x1c)
    
    sub_141e2d2b0(arg1, zmm1)

arg1[5] = 0
*(arg1 + 0x1c) = 0xbf800000
arg1[4].d = 0xbf800000
*(arg1 + 0x14) = 0xffffffff
