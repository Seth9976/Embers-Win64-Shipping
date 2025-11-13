// 函数: sub_1424ecc20
// 地址: 0x1424ecc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* r8_2 = &var_18

if (rax_2 != 0)
    r8_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int32_t rcx_1 = int.d(fconvert.t(*(r8_2 + 4)))
int32_t result = int.d(fconvert.t(*(r8_2 + 8)))
*arg3 = int.d(fconvert.t(*r8_2))
arg3[1] = rcx_1
arg3[2] = result
return result
