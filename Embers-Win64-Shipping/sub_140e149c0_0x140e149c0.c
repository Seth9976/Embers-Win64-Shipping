// 函数: sub_140e149c0
// 地址: 0x140e149c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2

if (sub_140a80e70() == 0)
    *arg2 = *arg1
    rax_2 = arg1[1]
else
    sub_140a80f40()
    *arg2 = arg1[2]
    rax_2 = arg1[3]

arg2[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

return arg2
