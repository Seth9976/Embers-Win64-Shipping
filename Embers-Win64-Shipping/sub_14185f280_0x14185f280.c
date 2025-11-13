// 函数: sub_14185f280
// 地址: 0x14185f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_14185e800()
*arg1 = &rax[2]
arg1[1] = rax

if (rax != 0)
    rax[1].d += 1
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t rdi_1 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*rax)[1](rax, zx.q(rdi_1))

arg1[2].b = 0
return arg1
