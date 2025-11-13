// 函数: sub_1425234d0
// 地址: 0x1425234d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_48 = 0
int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_3 = *(arg2 + 0x20)
int128_t zmm1 = var_38.o
int128_t var_28 = var_48.o
int64_t rdi
rdi.b = rax_3 != 0
int128_t var_18 = zmm1
*(arg2 + 0x20) = rdi + rax_3
char result = sub_1420ce0f0(&var_18, &var_28)
*arg3 = result
return result
