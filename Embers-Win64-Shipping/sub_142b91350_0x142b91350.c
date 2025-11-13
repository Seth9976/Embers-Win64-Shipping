// 函数: sub_142b91350
// 地址: 0x142b91350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0x24

void* rax_1 = *arg1

if (rax_1 == 0 || *(rax_1 + 0x90) == 0)
    return 0x23

*(rax_1 + 0x80) = arg1
return 0
