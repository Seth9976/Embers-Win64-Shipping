// 函数: sub_140ec0290
// 地址: 0x140ec0290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140d9f540(arg1 + 0x460, arg3)
char rax_1

if (rax == 0)
    rax_1 = sub_140db3130(arg1 + 0x460)

char rdx

if (rax != 0 || rax_1 != 0)
    rdx = 1
else
    rdx = 0

char rcx_2 = data_1439ae51d

if (rdx != 0)
    rcx_2 = data_1439ae51c

*arg2 = rcx_2
return arg2
