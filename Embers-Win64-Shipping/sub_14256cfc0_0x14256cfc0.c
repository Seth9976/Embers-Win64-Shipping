// 函数: sub_14256cfc0
// 地址: 0x14256cfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int32_t var_1c
int32_t var_1c_1 = var_1c & 0xfffffffe
int32_t var_28 = (zx.o(0)).d
int32_t var_20 = 0x40000000
char var_24 = 1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdx_4 = arg_8
int64_t rdi
rdi.b = rax_3 != 0
int128_t var_18 = var_28.o
*(arg2 + 0x20) = rdi + rax_3
return (*(*arg1 + 0x8e0))(arg1, rdx_4, &var_18)
