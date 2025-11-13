// 函数: sub_140844560
// 地址: 0x140844560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = sub_140d3c6e0(arg2 + 0x20)
arg1[2] = arg3
*(arg1 + 0x24) = arg6
arg1[5].d = arg7
arg1[4].d = arg5
arg1[3] = arg4
void* rax_3 = *arg8
arg1[6] = rax_3

if (rax_3 != 0)
    *(rax_3 + 0x48) += 1

arg1[7] = 0

if (data_14396fee4 != 0)
    rax_3 = sub_140b011d0()

if (data_14396fee4 == 0 || rax_3.b == 0 || *arg8 == 0)
    rax_3.b = 0
else
    rax_3.b = 1

arg1[8].b = rax_3.b
char rax_4

if (data_14396fee8 != 0)
    rax_4 = sub_140b011d0()

if (data_14396fee8 == 0 || rax_4 == 0 || arg1[6] == 0 || ((*(arg2 + 0xd68) u>> 3).b & 1) != 0)
    *(arg1 + 0x41) = 0
else
    *(arg1 + 0x41) = 1

return arg1
