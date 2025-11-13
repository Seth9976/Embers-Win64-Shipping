// 函数: sub_1417f9230
// 地址: 0x1417f9230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_3 = *(arg2 + 0x38)
char* r9 = &arg_10
uint64_t r8_4 = zx.q(arg_18)

if (rax_3 != 0)
    r9 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void var_28
int64_t* rax_5 = sub_1417f0740(arg1, &var_28, r8_4, r9)
*arg3 = *rax_5
int32_t result = rax_5[1].d
arg3[1].d = result
return result
