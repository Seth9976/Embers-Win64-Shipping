// 函数: sub_1422c8fe0
// 地址: 0x1422c8fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x7c) = arg2
*(arg1 + 0x78) = arg3
*(arg1 + 0x82) = arg4
sub_1422b8fc0(arg1, arg4)
int64_t* rcx = *(arg1 + 0x40)
(*(*rcx + 8))(rcx, zx.q(*(arg1 + 0x7c)), 0)
int64_t rax_2
int32_t rdx_2

if (*(arg1 + 0x7c) == 0)
    rax_2 = 0
    rdx_2 = 0
else
    int64_t* rcx_1 = *(arg1 + 0x40)
    rax_2 = (*(*rcx_1 + 0x30))(rcx_1)
    rdx_2 = *(arg1 + 0x7c)

int64_t* rcx_2 = *(arg1 + 0x50)
uint64_t rdx_3 = zx.q(rdx_2 * *(arg1 + 0x78))
*(arg1 + 0x60) = rax_2
int64_t rax_4 = (*(*rcx_2 + 8))(rcx_2, rdx_3, 0)

if (*(arg1 + 0x7c) == 0)
    *(arg1 + 0x68) = 0
    return rax_4

int64_t* rcx_3 = *(arg1 + 0x50)
int64_t rax_6 = (*(*rcx_3 + 0x30))(rcx_3)
*(arg1 + 0x68) = rax_6
return rax_6
