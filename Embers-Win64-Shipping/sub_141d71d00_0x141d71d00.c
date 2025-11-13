// 函数: sub_141d71d00
// 地址: 0x141d71d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t r8_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_28
int128_t* rax_3 = sub_141d68650(arg1, &var_28, r8_2)
*(arg3 + 8) = *(rax_3 + 8)
*arg3 = *rax_3
char result = *(rax_3 + 4)
arg3[1].b = result
return result
