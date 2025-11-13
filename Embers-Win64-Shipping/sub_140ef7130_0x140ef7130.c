// 函数: sub_140ef7130
// 地址: 0x140ef7130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].b = 0
    int16_t var_28_1 = 0x100
    *rbx = &data_142ee0ce8
    rbx[3] = 0
    rbx[4].d = 0
    rbx[2].w = 0x100
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    sub_1407473e0(&rbx[3], &var_20)
    sub_140745b20(&var_20)

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*arg1 = rbx
arg1[1] = rax_1
return arg1
