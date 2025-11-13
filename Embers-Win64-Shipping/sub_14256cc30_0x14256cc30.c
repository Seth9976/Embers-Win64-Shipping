// 函数: sub_14256cc30
// 地址: 0x14256cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

bool cond:0 = arg_8 != 0
int32_t arg_10 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
int32_t arg_20 = 0
int64_t rbp
rbp.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_38 = 0
int64_t rsi
rsi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
bool cond:4 = var_38 != 0
*(arg2 + 0x20) = rdi + rax_5
rax_5.b = cond:4
return (*(*arg1 + 0x8f8))(arg1, zx.q(r14.b), zx.q(rbp.b), zx.q(rsi.b), rax_5.b)
