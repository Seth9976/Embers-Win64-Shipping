// 函数: sub_141d72220
// 地址: 0x141d72220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = data_143f38074
char var_44 = 1
int64_t var_40 = 0
int64_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
int128_t var_28 = var_48.o
int64_t var_18 = var_38
*(arg2 + 0x20) = rdi + rax_2
return sub_141d6b3d0(arg1, &var_28)
