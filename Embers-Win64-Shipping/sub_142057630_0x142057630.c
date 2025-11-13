// 函数: sub_142057630
// 地址: 0x142057630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
uint96_t zmm0 = (*(arg1 + 0x10)).12
int64_t var_38 = *(arg1 + 0x20)
void* r9_1 = *(arg1 + 0x28)
void* var_30 = r9_1

if (r9_1 != 0)
    *(r9_1 + 8) += 1

return zmm0.q(sx.q(zmm0:8.d) + rax, zx.q(arg2), arg3, &var_38, *(arg1 + 0x30))
