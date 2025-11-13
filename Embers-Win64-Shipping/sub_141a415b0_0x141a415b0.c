// 函数: sub_141a415b0
// 地址: 0x141a415b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a2ee20(arg2, arg1)
arg2[0xc] = *arg3
arg2[0xd].d = arg3[1].d
sub_140747360(&arg2[0xe], &arg3[2])
arg2[0x12].d = arg3[4].d
*(arg2 + 0x18) = *arg4
*(arg2 + 0x28) = *arg5
void var_18
*(arg2 + 0x38) = *sub_141a6aa80(arg3, &var_18, arg4)
*(arg2 + 0x48) = *sub_141a6aa80(arg3, &var_18, arg5)
sub_141a36ac0(arg2)
int64_t rdi_1 = sx.q(arg2[0x11].d)

if (arg6 != 0xffffffff)
    int32_t rax_4 = (rdi_1 + 1).d
    arg2[0x11].d = rax_4
    
    if (rax_4 s> *(arg2 + 0x8c))
        sub_1405a4cf0(&arg2[0x10])
    
    *(arg2[0x10] + (rdi_1 << 2)) = arg6
else if (rdi_1.d s> 0 && *(arg2[0x10] + (rdi_1 << 2) - 4) != 0xffffffff)
    int32_t rax_7 = (rdi_1 + 1).d
    arg2[0x11].d = rax_7
    
    if (rax_7 s> *(arg2 + 0x8c))
        sub_1405a4cf0(&arg2[0x10])
    
    *(arg2[0x10] + (rdi_1 << 2)) = 0xffffffff

return arg2
