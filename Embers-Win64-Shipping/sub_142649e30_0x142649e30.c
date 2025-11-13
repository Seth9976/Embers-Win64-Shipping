// 函数: sub_142649e30
// 地址: 0x142649e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f34810(arg1)
void* rcx = arg1[0x42]

if (rcx != 0)
    *(rcx + 0x208) = arg1[0x41]

void* rcx_1 = arg1[0x41]

if (rcx_1 != 0)
    *(rcx_1 + 0x210) = arg1[0x42]

arg1[0x42] = 0
arg1[0x41] = 0
return 0
