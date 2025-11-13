// 函数: sub_142501870
// 地址: 0x142501870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t var_18 = var_38
int64_t rdi
rdi.b = rax_4 != 0
var_38 = var_28
bool cond:3 = arg_10 == 0
int32_t var_30
int32_t var_10 = var_30
int32_t var_20
int32_t var_30_1 = var_20
int64_t* rax_7 = &var_38
*(arg2 + 0x20) = rdi + rax_4

if (cond:3)
    rax_7 = &var_18

int32_t result = rax_7[1].d
*arg3 = *rax_7
arg3[1].d = result
return result
