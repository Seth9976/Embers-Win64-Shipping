// 函数: sub_1423a5060
// 地址: 0x1423a5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].b = 0
__builtin_memset(arg1 + 0xc, 0, 0x1c)
arg1[5].d = arg2
*(arg1 + 0x2c) = data_1439c7a08

if (arg3 != 0)
    void* rax_1 = *(arg3 + 0xa8)
    
    if (rax_1 != 0)
        *(arg1 + 0x2c) = zx.d(*(rax_1 + 0x118))
    else
        rax_1 = sub_141ee69e0(arg3)
        
        if (rax_1 != 0)
            *(arg1 + 0x2c) = zx.d(*(rax_1 + 0x118))

return arg1
