// 函数: sub_141fa94c0
// 地址: 0x141fa94c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x770)
int32_t rax_1 = (*(*rcx + 0x60))(rcx)
int64_t var_38
int64_t var_28
sub_140596d10(&var_28, sub_142441630(&var_38, arg2))
int64_t rbx_1 = sx.q(*(arg1 + 0xc80))
int32_t rcx_3 = (rbx_1 + 1).d
*(arg1 + 0xc80) = rcx_3

if (rcx_3 s> *(arg1 + 0xc84))
    sub_1405a4df0(arg1 + 0xc78)

int64_t* rdx_3 = *(arg1 + 0xc78) + rbx_1 * 0x18
*rdx_3 = var_28
int32_t var_20
rdx_3[1].d = var_20
int32_t result
*(rdx_3 + 0xc) = result
rdx_3[2].d = rax_1
int64_t rcx_6 = var_38

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
