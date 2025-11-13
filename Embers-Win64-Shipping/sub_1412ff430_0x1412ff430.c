// 函数: sub_1412ff430
// 地址: 0x1412ff430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
arg1[2] = 0
arg1[3].d = 0
arg1[4] = 1
__builtin_memset(&arg1[5], 0, 0x18)
arg1[8] = 1
arg1[9].w = 1
arg1[0xc] = u"UnknownTexture"
*(arg1 + 0x4c) = 0
*(arg1 + 0x54) = 0
arg1[0xb].w = 0
arg1[0xd].w = 1
*(arg1 + 0x6a) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
__builtin_memset(&arg1[0x10], 0, 0x38)
*arg1 = &data_142f5b060
arg1[0x18] = *arg2
arg1[0x1a] = 0

if (arg1[0x18] != 0)
    void* rax_1 = arg2[2]
    void* rcx = &arg2[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx, &arg1[0x1a])

return arg1
