// 函数: sub_141029ed0
// 地址: 0x141029ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xb8)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_14100ad10(rax, **(arg1 + 0x20), (1 << (data_1439c7a34).b) - 1, arg3)

sub_141019f60(rbx_1)
*arg2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

return arg2
