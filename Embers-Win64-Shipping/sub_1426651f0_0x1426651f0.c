// 函数: sub_1426651f0
// 地址: 0x1426651f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[0x73].b
char rdx = result & 0xfb
arg1[0x73].b = rdx

if (result != 0 && rdx == 0)
    jump(*(*arg1 + 0x3c0))

return result
