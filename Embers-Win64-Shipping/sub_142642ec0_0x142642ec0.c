// 函数: sub_142642ec0
// 地址: 0x142642ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3a3a0(arg1, arg2)
*(arg1 + 8) = *arg3
arg1[4] = arg3[1].d
*(arg1 + 0x14) = *arg4
arg1[7] = arg4[1].d
*(arg1 + 0x20) = *arg5
void* rax_3 = arg5[1]
*(arg1 + 0x28) = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0xe] &= 0xfffffffe
arg1[0xd] = arg6
arg1[0xe] |= zx.d(arg7)
arg1[0xc] = arg8.d
int64_t* rbx_2 = arg5[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return arg1
