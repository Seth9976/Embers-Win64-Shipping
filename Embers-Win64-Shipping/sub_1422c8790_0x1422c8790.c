// 函数: sub_1422c8790
// 地址: 0x1422c8790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422b8f40(arg1)
int64_t* rcx = *(arg1 + 0x28)
*(arg1 + 0x38) = arg2
int64_t rax_1 = (*(*rcx + 8))(rcx, zx.q(arg2), 0)

if (*(arg1 + 0x38) == 0)
    *(arg1 + 0x30) = 0
    return rax_1

int64_t* rcx_1 = *(arg1 + 0x28)
int64_t rax_3 = (*(*rcx_1 + 0x30))(rcx_1)
*(arg1 + 0x30) = rax_3
return rax_3
