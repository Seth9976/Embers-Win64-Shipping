// 函数: sub_1406cbc00
// 地址: 0x1406cbc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
void**** result = arg1
void*** rax = j_sub_140a82f30(0x88)
arg_8 = rax
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_1406ca050(rax, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)
arg_8 = rax_2

if (rax_2 != 0)
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rax_2 = &data_142d83c20
    rax_2[2] = rbx_1

*result = rbx_1
void*** rbx_2 = rax_2
result[1] = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1
    rbx_2 = rax_2

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

return result
