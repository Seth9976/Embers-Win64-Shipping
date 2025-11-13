// 函数: sub_142457340
// 地址: 0x142457340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_48 = 0
int64_t rdx_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    rdx_9 = sub_140d30490(arg2, &var_48, r8_9)
else
    rdx_9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_6 = *(arg2 + 0x20)
int64_t r8_10 = var_40
int512_t zmm1
zmm1.o = arg_20
int64_t rdi
rdi.b = rax_6 != 0
int64_t var_28 = var_38
int32_t var_30
int32_t var_20 = var_30
int64_t rax_8 = var_48
int32_t var_58 = arg_10.d
*(arg2 + 0x20) = rdi + rax_6
return sub_141dcf4f0(arg1, rdx_9, r8_10, &var_28, var_58, rax_8)
