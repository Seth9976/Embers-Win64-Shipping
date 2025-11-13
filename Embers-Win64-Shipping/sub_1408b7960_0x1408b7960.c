// 函数: sub_1408b7960
// 地址: 0x1408b7960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t var_4c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_4c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_4c)

int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_54 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_54, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

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

*(arg2 + 0x38) = 0
void var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_40, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_9 = *(arg2 + 0x38)
void* rsi = &var_40
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

void var_30
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    r9 = sub_140d30490(arg2, &var_30, r8_17)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* rax_11 = *(arg2 + 0x38)
void* rcx_9 = &var_30
int32_t zmm0 = var_58
int512_t zmm3
zmm3.o = var_54
int128_t zmm2 = var_50

if (rax_11 != 0)
    rcx_9 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
int128_t zmm1 = var_4c
void* var_68 = rcx_9
int32_t rcx_10 = var_48
int64_t rdi
rdi.b = rax_12 != 0
void* var_70 = rsi
char var_78 = arg_10
int32_t rax_14 = arg_20
*(arg2 + 0x20) = rdi + rax_12
return sub_1408ae300(rcx_10, zmm1, zmm2, r9, zmm0, rax_14)
