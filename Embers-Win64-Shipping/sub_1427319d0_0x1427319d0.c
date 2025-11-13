// 函数: sub_1427319d0
// 地址: 0x1427319d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r8_2 = &arg_10

if (rax_2 != 0)
    r8_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_18
int64_t* rax_4 = sub_1426b4520(arg1, &var_18, r8_2)
*arg3 = *rax_4
int32_t result = rax_4[1].d
arg3[1].d = result
return result
