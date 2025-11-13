// 函数: sub_141c1c7c0
// 地址: 0x141c1c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_40
int64_t* var_30 = nullptr

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t var_44 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_44, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_48, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    r9 = sub_140d30490(arg2, &arg_18, r8_15)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_10 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = var_44
int64_t r8_16 = var_38
int64_t rdi
rdi.b = rax_10 != 0
int64_t* rdx_16 = var_30
uint32_t rax_11 = zx.d(arg_10)
int32_t var_50 = arg_18
int32_t zmm0 = var_48
int32_t rax_12 = arg_20
*(arg2 + 0x20) = rdi + rax_10
void* result = sub_141ba19a0(rsi, rdx_16, r8_16, r9, zmm0, rax_12, rax_11)
*arg3 = result
return result
