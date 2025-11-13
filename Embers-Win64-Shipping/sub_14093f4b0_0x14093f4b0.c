// 函数: sub_14093f4b0
// 地址: 0x14093f4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int96_t zmm0 = (*(arg1 + 0x10)).12
int64_t r8 = *(arg1 + 8)
int64_t var_38 = *(arg1 + 0x20)
void* rax_1 = *(arg1 + 0x28)
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

zmm0.q(sx.q(zmm0:8.d) + r8, arg2, &var_38)
int64_t result
result.b = 1
return result
