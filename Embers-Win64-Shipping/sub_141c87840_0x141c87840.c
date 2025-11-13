// 函数: sub_141c87840
// 地址: 0x141c87840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int96_t zmm0 = (*(arg1 + 0x10)).12
int64_t rdx = *(arg1 + 8)
int64_t var_38 = *(arg1 + 0x20)
void* rax_1 = *(arg1 + 0x28)
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return zmm0.q(sx.q(zmm0:8.d) + rdx, &var_38)
