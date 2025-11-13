// 函数: sub_1424b3440
// 地址: 0x1424b3440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

*(arg2 + 0x38) = 0
void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_60, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_4 = *(arg2 + 0x38)
void* r14 = &var_60
int32_t arg_20 = 0

if (rax_4 != 0)
    r14 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* var_70 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_50 = 0
int64_t var_48 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_50, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* rsi = &var_50
int32_t* var_78 = nullptr

if (rax_8 != 0)
    rsi = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_78, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_80, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_18, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = arg_18 != 0
char arg_10 = 0
int64_t r15
r15.b = cond:2
int64_t rdx_19

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    rdx_19 = sub_140d30490(arg2, &arg_10, r8_19)
else
    rdx_19 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_13 = *(arg2 + 0x20)
int32_t zmm3 = arg_20
int512_t zmm1
zmm1.o = var_88
int64_t* rcx_10 = var_68
int64_t rdi
rdi.b = rax_13 != 0
uint32_t rax_14 = zx.d(arg_10)
int64_t rax_15 = var_80
int32_t* rax_16 = var_78
void* rax_17 = var_70
*(arg2 + 0x20) = rdi + rax_13
char result = sub_14201d760(rcx_10, rdx_19, r14, zmm3, rax_17, rsi, rax_16, rax_15, r15.b, rax_14)
int64_t rcx_11 = var_50
*arg3 = result

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
