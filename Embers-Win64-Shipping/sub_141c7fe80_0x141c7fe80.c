// 函数: sub_141c7fe80
// 地址: 0x141c7fe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int64_t* rbx = arg4[1]
int64_t rdi = *arg4
int128_t zmm6 = *arg3

if (rbx != 0)
    *(rbx + 0xc) += 1

void*** rax = sub_1405978f0(0x40, arg1)

if (rax != 0)
    int128_t var_28 = zmm6
    int64_t var_38 = rdi
    int64_t* var_30_1 = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    sub_141c81b20(rax, arg2, &var_28, &var_38, arg5)

if (rbx != 0)
    int32_t rax_2 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rax_2 == 1)
        (*(*rbx + 8))(rbx, 1)

int64_t* rcx_2 = arg4[1]

if (rcx_2 != 0)
    int32_t rdi_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rdi_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, zx.q(rdi_1))

return arg1
