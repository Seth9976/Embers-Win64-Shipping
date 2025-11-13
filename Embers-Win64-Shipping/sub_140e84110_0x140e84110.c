// 函数: sub_140e84110
// 地址: 0x140e84110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x3d0))
int32_t rax = (rbp + 1).d
*(arg1 + 0x3d0) = rax

if (rax s> *(arg1 + 0x3d4))
    sub_1405a4f90(arg1 + 0x3c8)

int64_t* rdx_3 = (rbp << 4) + *(arg1 + 0x3c8)
*rdx_3 = 0
rdx_3[1].d = 0

if (arg3 != rdx_3 && arg3[1].d != 0)
    int64_t* rcx_1 = *arg3
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

int64_t rax_2 = *(arg1 + 0x3c8)
int64_t rcx_3 = sx.q(*(arg1 + 0x3d0)) * 2
*arg2 = 0

if (*(rax_2 + (rcx_3 << 3) - 8) != 0)
    int64_t* rcx_4 = *(rax_2 + (rcx_3 << 3) - 0x10)
    void arg_8
    
    if (rcx_4 != 0)
        *arg2 = *(*(*rcx_4 + 0x30))(rcx_4, &arg_8)

return arg2
