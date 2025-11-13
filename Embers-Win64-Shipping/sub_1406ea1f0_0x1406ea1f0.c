// 函数: sub_1406ea1f0
// 地址: 0x1406ea1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1c] != 0)
    return &arg1[0xc]

int64_t rax = *arg1
arg1[0x1c] = (*(rax + 0x30))(rax)
return &arg1[0xc]
