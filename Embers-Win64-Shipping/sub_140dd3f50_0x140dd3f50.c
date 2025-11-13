// 函数: sub_140dd3f50
// 地址: 0x140dd3f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0x7f0)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_140dd7810(rax, arg3)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

void*** var_18 = rbx_1
int64_t result = sub_140dd28f0(arg1 + 0x30, &arg_10, &var_18)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rax_2)[1](rax_2, 1)

return result
