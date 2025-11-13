// 函数: sub_14272d6c0
// 地址: 0x14272d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_40, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_48 = 0
int32_t r8_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_12 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_12[4]
    r8_11 = sub_140d30490(arg2, &var_48, r8_12)
else
    r8_11 = sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_7 = *(arg2 + 0x20)
int64_t r9 = var_40
int512_t zmm2
zmm2.o = arg_20
int64_t rdi
rdi.b = rax_7 != 0
int64_t* rcx_6 = var_38
int32_t var_28
int32_t var_10 = var_28
int64_t rax_9 = var_48
int64_t var_18 = var_30
int64_t var_50 = rax_9
int32_t var_58 = arg_10.d
*(arg2 + 0x20) = rdi + rax_7
return sub_142720b70(rcx_6, &var_18, r8_11, r9)
