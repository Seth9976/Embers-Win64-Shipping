// 函数: sub_140dd5030
// 地址: 0x140dd5030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0x5f0)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    type_info::type_info(rax)
    *rbx = &data_142ec9330
    sub_140ddb1d0(&rbx[1], arg3 + 8)
    sub_14068e310(&rbx[0x69], arg3 + 0x348)
    sub_14068e310(&rbx[0x7a], arg3 + 0x3d0)
    sub_14068e310(&rbx[0x8b], arg3 + 0x458)
    sub_14068e310(&rbx[0x9c], arg3 + 0x4e0)
    sub_14068e310(&rbx[0xad], arg3 + 0x568)

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

void*** var_18 = rbx
int64_t result = sub_140dd28f0(arg1 + 0x30, &arg_10, &var_18)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        result = (**rax_1)(rax_1)
        int32_t temp1_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rax_1)[1](rax_1, 1)

return result
