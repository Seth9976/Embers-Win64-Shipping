// 函数: sub_141c7fb60
// 地址: 0x141c7fb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int64_t* rbx = arg4[1]
int64_t rdi = *arg4
int128_t zmm6 = *arg3

if (rbx != 0)
    rbx[1].d += 1

void*** rax = sub_1405978f0(0x38, arg1)

if (rax != 0)
    int128_t var_28 = zmm6
    int64_t var_38 = rdi
    int64_t* var_30_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_141c81880(rax, arg2, &var_28, &var_38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return arg1
