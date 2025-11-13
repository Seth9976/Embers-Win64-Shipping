// 函数: sub_141d718c0
// 地址: 0x141d718c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = data_143f38074
char var_44 = 1
int64_t var_40 = 0
int64_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
void* r8_6 = arg_20
int64_t rdi
rdi.b = rax_4 != 0
int128_t var_28 = var_48.o
int64_t var_18 = var_38
bool cond:1 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_4
return sub_141d669a0(arg1, &var_28, r8_6, cond:1)
