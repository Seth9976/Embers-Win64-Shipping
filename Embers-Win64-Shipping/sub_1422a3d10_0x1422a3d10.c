// 函数: sub_1422a3d10
// 地址: 0x1422a3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg2
*(arg1 + 0x38) = arg5
*(arg1 + 0x34) = arg3
sub_14228fd40(arg1, arg5)
int64_t* rcx = *(arg1 + 0x18)
(*(*rcx + 8))(rcx, zx.q(arg3), 0)
int64_t* rcx_1 = *(arg1 + 0x18)
int32_t* rax_2 = (*(*rcx_1 + 0x30))(rcx_1)

if (arg3 != 0)
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        int32_t rcx_2 = *rbx
        rbx += zx.q(arg4)
        *rax_2 = rcx_2
        rax_2 = &rax_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_3 = *(arg1 + 0x18)
int64_t result = (*(*rcx_3 + 0x30))(rcx_3)
*(arg1 + 0x28) = result
return result
