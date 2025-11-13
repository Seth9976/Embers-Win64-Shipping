// 函数: sub_140af61f0
// 地址: 0x140af61f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5520 == 0)
    __builtin_memset(arg1, 0, 0x11)
    return arg1

int32_t rcx = data_143de5510:8.d
int32_t arg_10 = data_143de5510.d
int32_t rax_1 = (data_143de5510:0xc).d
char rax_2

if ((rcx == 0x7530 && rax_1 == 0x3e9) || (rcx == 0xea60 && rax_1 == 0x3e9))
    rax_2 = sub_140b4afa0()

char r9

if (((rcx != 0x7530 || rax_1 != 0x3e9) && (rcx != 0xea60 || rax_1 != 0x3e9)) || rax_2 == 0)
    r9 = 0
else
    r9 = 1

sub_140af0b20(arg1, &arg_10, &data_143de5510:8, r9)
return arg1
