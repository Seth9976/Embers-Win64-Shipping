// 函数: sub_1422a3a50
// 地址: 0x1422a3a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x34) = arg2
*(arg1 + 0x38) = arg3
sub_14228fd40(arg1, arg3)
int64_t* rcx = *(arg1 + 0x18)
int64_t rax_1 = (*(*rcx + 8))(rcx, zx.q(*(arg1 + 0x34)), 0)

if (arg2 == 0)
    *(arg1 + 0x28) = 0
    return rax_1

int64_t* rcx_1 = *(arg1 + 0x18)
int64_t rax_3 = (*(*rcx_1 + 0x30))(rcx_1)
*(arg1 + 0x28) = rax_3
return rax_3
