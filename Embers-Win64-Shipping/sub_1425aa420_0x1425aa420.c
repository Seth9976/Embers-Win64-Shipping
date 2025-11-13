// 函数: sub_1425aa420
// 地址: 0x1425aa420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

*(arg2 + 0x38) = 0
void var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_30
char arg_10 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_6 = *(arg2 + 0x20)
uint32_t r9 = zx.d(arg_10)
int32_t rdx_8 = var_38
int64_t rdi
rdi.b = rax_6 != 0
bool cond:2 = arg_20 != 0
*(arg2 + 0x20) = rdi + rax_6
rax_6.b = cond:2
return sub_141f737b0(arg1, rdx_8, rsi, r9, rax_6.b)
