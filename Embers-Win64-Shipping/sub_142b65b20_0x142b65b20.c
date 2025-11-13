// 函数: sub_142b65b20
// 地址: 0x142b65b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s>= 0xfdd0 && (arg1 s<= 0xfdef || (arg1 & 0xfffe) == 0xfffe) && arg1 s<= 0x10ffff)
    int32_t rax
    rax.b = 0x1e
    return rax

bool rax_2 = sub_142a53dd0(arg1)

if (rax_2 != 0x12)
    return rax_2

return ((arg1 & 0xfffffc00) != 0xd800) + 0x1f
