// 函数: sub_142593080
// 地址: 0x142593080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t rbp
rbp.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int32_t var_24 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_24, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_28, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_6 = *(arg2 + 0x20)
int32_t zmm0 = var_28
int32_t zmm1 = var_24
int64_t rdx_10 = var_20
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
return sub_141f43de0(arg1, rdx_10, zx.q(rbp.b), zx.q(rsi.b), zmm1, zmm0)
