// 函数: sub_14098cb30
// 地址: 0x14098cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = 0

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

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int32_t var_38 = (zx.o(0)).d
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_38, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
int32_t zmm0_1 = var_38
int32_t rdx_12 = var_34
int64_t rcx_6 = var_30
int64_t rdi
rdi.b = rax_7 != 0
char rax_8 = arg_10
*(arg2 + 0x20) = rdi + rax_7
void* result = sub_14098bc20(rcx_6, rdx_12, r14.b, rsi.b, zmm0_1, rax_8)
*arg3 = result
return result
