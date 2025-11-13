// 函数: sub_142c6bf90
// 地址: 0x142c6bf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c65340(arg1, 0)
int32_t rax
int512_t zmm2
rax, zmm2 = sub_142c67f20(arg1, 0, arg3, arg4)

if (rax != 0)
    return rax

if (*(arg1 + 0x40a) == rax.b && (*(arg1 + 0x164) != 2 || *(arg1 + 0x411) != rax.b)
        && sub_142c67db0(arg1) != 0)
    if ((*(arg1[0x88] + 0x7c) & 2) == 0)
        *arg2 = 1
    else
        int32_t rax_3 = sub_142c6c070(arg1, arg2, zmm2)
        
        if (rax_3 != 0)
            return rax_3

return 0
