// 函数: sub_140dd4200
// 地址: 0x140dd4200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0xb70)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    type_info::type_info(rax)
    *rbx = &data_142ec93c0
    sub_140ddbcc0(&rbx[1], arg3 + 8)
    sub_140ddbcc0(&rbx[0x9b], arg3 + 0x4d8)
    sub_140ddbb00(&rbx[0x135], arg3 + 0x9a8)
    sub_14068e310(&rbx[0x158], arg3 + 0xac0)
    sub_140dd9fa0(&rbx[0x169], arg3 + 0xb48)

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
