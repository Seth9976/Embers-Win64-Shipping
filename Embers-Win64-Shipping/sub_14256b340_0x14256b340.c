// 函数: sub_14256b340
// 地址: 0x14256b340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_20 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0
int64_t r8_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_6[4]
    r8_5 = sub_140d30490(arg2, &arg_10, r8_6)
else
    r8_5 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int512_t zmm2
zmm2.o = arg_20
int64_t rdi
rdi.b = rax_4 != 0
int64_t var_18 = var_28
bool cond:3 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_4
int32_t var_20
int32_t var_10 = var_20
return sub_142262b30(arg1, &var_18, r8_5, cond:3)
