// 函数: sub_1405eb890
// 地址: 0x1405eb890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void*** rax = sub_1405ead20()
*arg1 = &rax[2]
void*** rbx = rax
arg1[1] = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rbx)[1](rbx, zx.q(rdi_1))

arg1[2].b = 0
return arg1
