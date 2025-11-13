// 函数: sub_140ec0060
// 地址: 0x140ec0060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140d9f540(arg1 + 0x460, arg3)
char rax_1

if (rax == 0)
    rax_1 = sub_140db3130(arg1 + 0x460)

char rdx

if (rax != 0 || rax_1 == 0)
    rdx = 1
else
    rdx = 0

char rcx_2 = data_1439ae520

if (rdx == 0)
    rcx_2 = data_1439ae51d

*arg2 = rcx_2
return arg2
