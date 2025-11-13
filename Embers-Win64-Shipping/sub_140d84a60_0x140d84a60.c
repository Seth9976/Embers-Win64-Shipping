// 函数: sub_140d84a60
// 地址: 0x140d84a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx

if ((*arg2 == 0 && arg2[1] == 0x46000000000000c0)
        || (*arg2 == 0x433286fdd6dd68d1 && arg2[1] == 0x4cd2a2debe9a6686))
    rdx = arg1
    
    if (arg1 == 0x28)
        rdx = nullptr
else if (*arg2 != 0x439c8359f7063da8 || arg2[1] != -0x788265d63a44686e)
    rdx = nullptr
else
    rdx = &arg1[1]
    
    if (arg1 == 0x28)
        rdx = nullptr

*arg3 = rdx

if (rdx == 0)
    return 0x80004002

(*(*arg1 + 8))()
return 0
