// 函数: sub_14272cf10
// 地址: 0x14272cf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_60 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t var_6c = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_6c, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_6c)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_78, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:0 = var_78 != 0
int32_t var_74 = 0
int64_t r15
r15.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_74, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

bool cond:1 = var_74 != 0
int32_t var_70 = 0
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_70, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

bool cond:2 = var_70 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:2
uint32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_19)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_11 = *(arg2 + 0x20)
char rcx_10 = arg_18
uint32_t rdx_20 = zx.d(arg_20)
int64_t zmm0_1 = var_58
int64_t rdi
rdi.b = rax_11 != 0
int512_t zmm3
zmm3.o = var_6c
int64_t r8_20 = var_68
int32_t var_50
int32_t var_40 = var_50
uint32_t var_80 = zx.d(arg_10)
void* rcx_11 = var_60
*(arg2 + 0x20) = rdi + rax_11
int64_t var_48 = zmm0_1
void* result = sub_14271b680(rcx_11, &var_48, r8_20, r9, rdx_20, rcx_10, r15.b, r14.b, rsi.b)
*arg3 = result
return result
