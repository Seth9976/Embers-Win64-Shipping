// 函数: sub_140dd5180
// 地址: 0x140dd5180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0x1058)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    type_info::type_info(rax)
    *rbx = &data_142ec9420
    sub_14068def0(&rbx[1], arg3 + 8)
    sub_14068def0(&rbx[0x50], arg3 + 0x280)
    sub_14068def0(&rbx[0x9f], arg3 + 0x4f8)
    sub_14068def0(&rbx[0xee], arg3 + 0x770)
    sub_140ddd070(&rbx[0x13d], arg3 + 0x9e8)
    sub_14068e310(&rbx[0x18a], arg3 + 0xc50)
    sub_14068e310(&rbx[0x19b], arg3 + 0xcd8)
    sub_14068e310(&rbx[0x1ac], arg3 + 0xd60)
    sub_140dd9fa0(&rbx[0x1bd], arg3 + 0xde8)
    sub_14068e310(&rbx[0x1c2], arg3 + 0xe10)
    sub_140dd9fa0(&rbx[0x1d3], arg3 + 0xe98)
    sub_14068e310(&rbx[0x1d8], arg3 + 0xec0)
    sub_14068e310(&rbx[0x1e9], arg3 + 0xf48)
    sub_14068e310(&rbx[0x1fa], arg3 + 0xfd0)

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
