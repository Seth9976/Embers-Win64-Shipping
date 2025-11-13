// 函数: sub_141d7ab20
// 地址: 0x141d7ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d772b0(arg1)
void*** rax = j_sub_140a82f30(0x20)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_143234110
    rbx[1] = 0
    rbx[2] = 0

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*(rbx + 8) = *arg3
rbx[3].d = arg1[0xf].d - 1
*arg2 = rbx
arg2[1] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t rdi_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*rax_1)[1](rax_1, zx.q(rdi_1))

return arg2
