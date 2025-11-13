// 函数: sub_1426e45a0
// 地址: 0x1426e45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 0xb8)

if (rsi == 0)
    return &__return_addr

int64_t (* var_28_1)(int64_t* arg1) = sub_14215e6dc
int32_t var_20_1 = 0
int64_t var_38 = 0
int32_t var_30_1 = 0
void*** rax = sub_1405978f0(0x30, &var_38)

if (rax != 0)
    *rax = &data_143477f88
    sub_140d3a3a0(&rax[1], arg1)
    *(rax + 0x10) = var_28_1.o
    rax[5] = sub_140a387b0()

void arg_10
sub_1426bbe90(rsi, &arg_10, *(arg1 + 0x90), arg1, &var_38)
int64_t (* var_28_2)(int64_t* arg1) = sub_14215e6dc
int32_t var_20_2 = 0
var_38 = 0
int32_t var_30_2 = 0
void*** rax_2 = sub_1405978f0(0x30, &var_38)

if (rax_2 != 0)
    *rax_2 = &data_143477f88
    sub_140d3a3a0(&rax_2[1], arg1)
    *(rax_2 + 0x10) = var_28_2.o
    rax_2[5] = sub_140a387b0()

return sub_1426bbe90(rsi, &arg_10, *(arg1 + 0xb8), arg1, &var_38)
