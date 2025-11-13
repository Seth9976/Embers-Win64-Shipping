// 函数: sub_1429dade0
// 地址: 0x1429dade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0

if (*(arg1 + 0x2b4) == 0)
    memset(arg1 + 0x2b8, 0, 0x6c)

int32_t rax = *(arg1 + 0x2b0)

if (rax == 0)
label_1429dae7e:
    
    if (arg2 == 0 && arg3 == 0)
        return 0
    
    if (rax == 0)
        *(arg1 + 0x2b8) = arg2
        *(arg1 + 0x300) = arg3
        *(arg1 + 0x2b4) = 1
else
    if (arg2 != 0 || arg3 != 0)
        *(arg1 + (zx.q(*(arg1 + 0x2b4)) << 3) + 0x2b8) = arg2
        *(arg1 + (zx.q(*(arg1 + 0x2b4)) << 2) + 0x300) = arg3
        *(arg1 + 0x2b4) += 1
        
        if (*(arg1 + 0x2b4) u<= 9)
            return 0
        
        *(arg1 + 0x2b4) = 0
        *arg4 = 8
        return 0xffffffff
    
    if (rax == 0)
        goto label_1429dae7e

return 1
