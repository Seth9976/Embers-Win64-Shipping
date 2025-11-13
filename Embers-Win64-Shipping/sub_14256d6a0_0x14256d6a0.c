// 函数: sub_14256d6a0
// 地址: 0x14256d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

char arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int64_t var_48 = 0
int64_t rsi
rsi.b = cond:0
int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_5 = *(arg2 + 0x20)
uint64_t r8_8 = zx.q(arg_8)
int64_t rdi
rdi.b = rax_5 != 0
int128_t var_28 = var_48.o
*(arg2 + 0x20) = rdi + rax_5
int64_t result = (*(*arg1 + 0x8a8))(arg1, &var_38, r8_8, zx.q(rsi.b), &var_28)
int64_t rcx_5 = var_38

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
