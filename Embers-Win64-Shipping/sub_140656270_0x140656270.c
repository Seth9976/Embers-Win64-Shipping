// 函数: sub_140656270
// 地址: 0x140656270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_3 = *(arg2 + 0x38)
void* r9 = &var_28
void* r8_4 = arg_10

if (rax_3 != 0)
    r9 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
uint64_t var_18[0x2]
uint64_t* rax_5 = sub_14063cca0(arg1, &var_18, r8_4, r9)
*arg3 = *rax_5
int32_t result = rax_5[1].d
arg3[1].d = result
return result
