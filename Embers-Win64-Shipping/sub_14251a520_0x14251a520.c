// 函数: sub_14251a520
// 地址: 0x14251a520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_48 = -1
int64_t var_40 = 0
int64_t var_38 = 0
int64_t rdx_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    rdx_5 = sub_140d30490(arg2, &var_48, r8_5)
else
    rdx_5 = sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_4 = *(arg2 + 0x20)
int128_t zmm0_1 = var_48.o
int64_t* rcx_3 = arg_20
int64_t rdi
rdi.b = rax_4 != 0
int64_t var_18 = var_38
*(arg2 + 0x20) = rdi + rax_4
int128_t var_28 = zmm0_1
return sub_1420ba7a0(rcx_3, rdx_5, &var_28)
