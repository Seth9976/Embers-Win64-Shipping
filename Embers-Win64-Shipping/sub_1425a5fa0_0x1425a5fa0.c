// 函数: sub_1425a5fa0
// 地址: 0x1425a5fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* r8_2 = &var_28

if (rax_2 != 0)
    r8_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
uint64_t var_18[0x2]
uint64_t* rax_4 = sub_141f5dbd0(arg1, &var_18, r8_2)
*arg3 = *rax_4
int32_t result = rax_4[1].d
arg3[1].d = result
return result
