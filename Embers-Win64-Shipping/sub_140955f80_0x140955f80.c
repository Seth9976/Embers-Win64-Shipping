// 函数: sub_140955f80
// 地址: 0x140955f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x4c].b = 3
*(arg1[0x4b] + 0x134) = 3
sub_141dd9000(arg1, 3)
sub_141dd8f90(arg1, 1)
sub_141dd7750(arg1, 1, 1)
void* rax_1 = sub_141dcc7f0(arg1)

if (sub_1423dce10(rax_1, &arg1[0x4f]) != 0)
    sub_1423e60e0(rax_1, arg1[0x4f])

arg1[0x4f] = 0
jump(*(*arg1 + 0x650))
