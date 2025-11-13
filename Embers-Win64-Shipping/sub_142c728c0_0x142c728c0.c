// 函数: sub_142c728c0
// 地址: 0x142c728c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1

if (arg1 != 0 && *arg1 != 0 && sub_142c70460(arg1, "PEM") == 0)
    if (sub_142c70460(rbx, "DER") != 0)
        return 2
    
    if (sub_142c70460(rbx, "ENG") != 0)
        return 0x2a
    
    int32_t rcx_3 = -1
    
    if (sub_142c70460(rbx, "P12") != 0)
        rcx_3 = 0x2b
    
    return zx.q(rcx_3)

return 1
