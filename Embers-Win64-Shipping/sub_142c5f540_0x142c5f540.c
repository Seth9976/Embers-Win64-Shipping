// 函数: sub_142c5f540
// 地址: 0x142c5f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if ((*(*(arg2 + 0x438) + 0x7c) & 3) != 0 && (*(arg2 + 0x3ff) == 0 || *(arg2 + 0x3f1) == 0))
    if (sub_142c53090(*(arg1 + 0xc0), 1) != 0 && *(arg1 + 0x43c) != 1
            && ((*(arg1 + 0x438) - 1) & 0xfffffffb) == 0)
        rbx = 1
    
    if (sub_142c53090(*(arg1 + 0xc0), 2) != 0 && *(arg1 + 0x43c) s>= 3)
        rbx |= 2

return zx.q(rbx)
