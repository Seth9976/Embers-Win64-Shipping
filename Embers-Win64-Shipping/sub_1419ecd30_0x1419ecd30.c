// 函数: sub_1419ecd30
// 地址: 0x1419ecd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

if (*(rax + 0x118) u>= 3)
    void*** rax_1 = j_sub_140a82f30(0x6a0)
    
    if (rax_1 != 0)
        return sub_1419faf80(rax_1, arg1) __tailcall
else if (arg1[0xb8].d != 0 || arg1[0xb9] != 0)
    void*** rax_3 = j_sub_140a82f30(0x6b0)
    
    if (rax_3 != 0)
        return sub_141a1b680(rax_3, arg1) __tailcall

return 0
