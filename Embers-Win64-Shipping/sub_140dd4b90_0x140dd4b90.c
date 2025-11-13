// 函数: sub_140dd4b90
// 地址: 0x140dd4b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0x2e8)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    type_info::type_info(rax)
    *rbx = &data_142ec9360
    sub_14068e310(&rbx[1], arg3 + 8)
    sub_14068e310(&rbx[0x12], arg3 + 0x90)
    sub_14068e310(&rbx[0x23], arg3 + 0x118)
    sub_14068e310(&rbx[0x34], arg3 + 0x1a0)
    sub_14068e310(&rbx[0x45], arg3 + 0x228)
    sub_140dd9fa0(&rbx[0x56], arg3 + 0x2b0)
    *(rbx + 0x2d8) = *(arg3 + 0x2d8)

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
