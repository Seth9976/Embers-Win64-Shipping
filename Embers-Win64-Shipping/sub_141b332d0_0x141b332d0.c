// 函数: sub_141b332d0
// 地址: 0x141b332d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_141a312f0(rax)

int64_t* rcx_1 = *(arg2 + 8)
void*** arg_8 = rbx
sub_1406f3ea0(rcx_1, arg2 + 0x24, &arg_8)
void*** rcx_2 = arg_8

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

void var_18
int64_t* rax_3 = sub_140596d10(&var_18, arg1 + 0x28)
int64_t var_28 = *(arg1 + 0x40)
return sub_141a54490(rbx, *(arg1 + 0x20), rax_3, *(arg1 + 0x38))
