// 函数: sub_142826468
// 地址: 0x142826468
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_8 = arg1
int32_t var_18 = 0
sub_1428262f0(arg1, 6)
int32_t var_18_1 = 1
int32_t* rcx = *(arg1 + 0x10)

if (rcx == *(arg1 + 0x18))
    sub_142826028(&arg1[2], rcx, arg2)
else
    *rcx = *arg2
    int32_t rax_1
    rax_1.b = arg2[1].b
    rcx[1].b = rax_1.b
    rax_1.b = *(arg2 + 5)
    *(rcx + 5) = rax_1.b
    sub_14281f81c(&rcx[2], &arg2[2])
    *(arg1 + 0x10) += 0x20

int32_t* rcx_3 = *(arg1 + 0x10)

if (rcx_3 == *(arg1 + 0x18))
    sub_142826028(&arg1[2], rcx_3, arg3)
else
    *rcx_3 = *arg3
    int32_t rax_2
    rax_2.b = arg3[1].b
    rcx_3[1].b = rax_2.b
    rax_2.b = *(arg3 + 5)
    *(rcx_3 + 5) = rax_2.b
    sub_14281f81c(&rcx_3[2], &arg3[2])
    *(arg1 + 0x10) += 0x20

return arg1
