// 函数: sub_1408b6420
// 地址: 0x1408b6420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t var_34 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_34, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

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

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_28, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_8 = *(arg2 + 0x38)
void* rcx_7 = &var_28
int32_t zmm3 = arg_20
int32_t zmm2 = var_38
int32_t zmm1 = var_34

if (rax_8 != 0)
    rcx_7 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
void* var_48 = rcx_7
int32_t rcx_8 = var_30
int64_t rdi
rdi.b = rax_9 != 0
char var_50 = arg_10
int32_t rax_11 = arg_18
*(arg2 + 0x20) = rdi + rax_9
char* result
int32_t zmm0
result, zmm0 = sub_1408ad120(rcx_8, zmm1, zmm2, zmm3, rax_11)
*arg3 = zmm0
return result
