// 函数: sub_1408ebff0
// 地址: 0x1408ebff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_24 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_24, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t arg_10 = 0

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
int32_t var_28 = 0
int64_t rsi
rsi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_28, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_5 = *(arg2 + 0x20)
int128_t zmm1 = var_24
int64_t rdi
rdi.b = rax_5 != 0
bool cond:4 = var_28 != 0
*(arg2 + 0x20) = rdi + rax_5
rax_5.b = cond:4
return sub_1408e8130(arg1, zmm1, rbp.b, rsi.b, rax_5.b)
