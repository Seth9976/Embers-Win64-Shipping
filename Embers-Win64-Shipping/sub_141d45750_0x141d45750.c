// 函数: sub_141d45750
// 地址: 0x141d45750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
int128_t var_38
__builtin_memset(&var_38, 0, 0x28)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rcx_1 = &var_38

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
char result = sub_141d45110(rcx_1)
*arg3 = result
return result
