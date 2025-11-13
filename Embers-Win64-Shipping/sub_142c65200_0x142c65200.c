// 函数: sub_142c65200
// 地址: 0x142c65200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    if (arg1[0xa] != 0)
        if (arg2 != arg1[0x48] || *(arg1 + 0x259) == 0)
            sub_142c52d50(arg1, arg2)
            arg1[0xb]
            jump(arg1[0xa])
        
        *(arg1 + 0x259) = 0
    
    sub_142c52d50(arg1, arg2)

closesocket(arg2)
return 0
