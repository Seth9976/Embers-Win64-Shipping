// 函数: sub_14076f830
// 地址: 0x14076f830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rax_1 = arg1[1].d | 1
arg1[1].d = rax_1
uint8_t result = (rax_1 u>> 4).b

if ((result & 1) != 0)
    return result

sub_140779750(arg1[5], *(arg1 + 0x3c), arg1[8].d, arg1[7].d)
return sub_140779870(arg1[5], *(arg1 + 0x44)) __tailcall
