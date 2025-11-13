// 函数: sub_1426520e0
// 地址: 0x1426520e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)

if (rax == 0)
    return rax

int64_t rax_1 = sub_140d3c6e0(arg1 + 8)
int96_t zmm0 = (*(arg1 + 0x10)).12
int64_t var_38 = *(arg1 + 0x20)
void* rcx_3 = *(arg1 + 0x28)
void* var_30 = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

zmm0.q(sx.q(zmm0:8.d) + rax_1, &var_38)
int64_t rax_2
rax_2.b = 1
return rax_2
