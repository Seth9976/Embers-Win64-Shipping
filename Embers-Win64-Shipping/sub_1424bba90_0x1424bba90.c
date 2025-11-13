// 函数: sub_1424bba90
// 地址: 0x1424bba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10)

int64_t var_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t (* var_20)(int64_t* arg1) = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int32_t var_24 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_24, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_28, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_13)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
char zmm0 = arg_20.b
int32_t zmm1 = var_28
int512_t zmm3
zmm3.o = var_24
int64_t rdi
rdi.b = rax_8 != 0
int64_t (* r8_14)(int64_t* arg1) = var_20
int64_t rdi_1 = rdi + rax_8
int64_t rdx_14 = var_18
int64_t* rcx_7 = var_10
rax_8.b = arg_10 != 0
char var_38 = rax_8.b
*(arg2 + 0x20) = rdi_1
return sub_14203cf70(rcx_7, rdx_14, r8_14, r9, zmm1, zmm0)
