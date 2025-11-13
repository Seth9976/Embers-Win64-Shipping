// 函数: sub_142c4d8e0
// 地址: 0x142c4d8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x120) = 0
*(arg1 + 0x128) = 0
HMODULE rax = sub_142c516a0("atidxx64.dll", "atidxx32.dll")
*(arg1 + 0x118) = rax

if (rax != 0)
    HMODULE rax_1 = LoadLibraryA("d3d11.dll")
    *(arg1 + 0x110) = rax_1
    
    if (rax_1 != 0)
        return 0

return 4
