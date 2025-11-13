// 函数: sub_1424b9e50
// 地址: 0x1424b9e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* var_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int32_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_28, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_30 = 0
int32_t r8_13
void* r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_14 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_14[4]
    r8_13, r9 = sub_140d30490(arg2, &var_30, r8_14)
else
    r8_13, r9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t rax_8 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = arg_20
int512_t zmm2
zmm2.o = var_38
int64_t rdi
rdi.b = rax_8 != 0
int64_t* rdx_14 = var_20
int64_t* rcx_7 = var_18
int64_t var_48 = var_30
int64_t var_50 = var_28
int32_t var_58 = arg_10
*(arg2 + 0x20) = rdi + rax_8
return sub_142035c50(rcx_7, rdx_14, r8_13, r9)
