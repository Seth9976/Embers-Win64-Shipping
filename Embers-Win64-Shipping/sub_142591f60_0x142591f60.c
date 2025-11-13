// 函数: sub_142591f60
// 地址: 0x142591f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

bool cond:1 = arg_8 != 0
int32_t arg_10 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
int64_t r8_8 = arg_20
int64_t rdi
rdi.b = rax_5 != 0
int64_t var_28 = var_38
bool cond:3 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_5
int32_t var_30
int32_t var_20 = var_30
int32_t rax_6
rax_6.b = cond:3
return (*(*arg1 + 0x9b8))(arg1, &var_28, r8_8, zx.q(rsi.b), rax_6.b)
