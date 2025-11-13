// 函数: sub_141ffe060
// 地址: 0x141ffe060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x88)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_1406695d0(rax, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d83c20
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

*arg1 = rbx_1
arg1[1] = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp1_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_2)[1](rax_2, 1)

return arg1
