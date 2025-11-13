// 函数: sub_141813070
// 地址: 0x141813070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x2b8)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_14181e1b0(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

if ((*rbx)[0x28](rbx, arg3, rbx) == 0)
    *arg2 = nullptr
    arg2[1] = 0
label_14181312d:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rbx_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*rax_2)[1](rax_2, zx.q(rbx_1))
else
    *arg2 = rbx
    arg2[1] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        goto label_14181312d

return arg2
