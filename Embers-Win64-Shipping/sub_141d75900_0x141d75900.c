// 函数: sub_141d75900
// 地址: 0x141d75900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
*arg2 = 0
void*** rax = j_sub_140a82f30(0x18)

if (rax != 0)
    rax[1].d = 1
    *rax = &data_142d42ea8
    *(rax + 0xc) = 1
    rax[2] = rbx

int64_t var_18 = rbx
int32_t result = sub_141d77e50(arg1, &arg1[0xa], &var_18, arg1[0xc])

if (rax != 0)
    result = rax[1].d
    rax[1].d -= 1
    
    if (result == 1)
        result = (**rax)(rax)
        int32_t rdi_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*rax)[1](rax, zx.q(rdi_1))

return result
