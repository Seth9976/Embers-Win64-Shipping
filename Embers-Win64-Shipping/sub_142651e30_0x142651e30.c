// 函数: sub_142651e30
// 地址: 0x142651e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
void* rcx_1 = *(arg1 + 0x28)
int64_t var_38 = *(arg1 + 0x20)
void* var_30 = rcx_1
int96_t zmm0 = (*(arg1 + 0x10)).12

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

return zmm0.q(sx.q(zmm0:8.d) + rax, &var_38)
