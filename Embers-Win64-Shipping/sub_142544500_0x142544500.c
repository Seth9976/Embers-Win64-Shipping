// 函数: sub_142544500
// 地址: 0x142544500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_4 = *(arg2 + 0x20)
uint32_t r8_6 = zx.d(arg_10)
int64_t r9 = arg_18
int64_t rdi
rdi.b = rax_4 != 0
int64_t rax_5 = arg_20
*(arg2 + 0x20) = rdi + rax_4
void var_28
int64_t* result = sub_1421263b0(arg1, &var_28, r8_6, r9, rax_5)
*arg3 = *result
return result
