// 函数: sub_140dd3da0
// 地址: 0x140dd3da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0x700)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    type_info::type_info(rax)
    *rbx = &data_142ec93d8
    sub_14068def0(&rbx[1], arg3 + 8)
    sub_14068e310(&rbx[0x50], arg3 + 0x280)
    sub_14068e310(&rbx[0x61], arg3 + 0x308)
    sub_14068e310(&rbx[0x72], arg3 + 0x390)
    sub_14068e310(&rbx[0x83], arg3 + 0x418)
    sub_14068e310(&rbx[0x94], arg3 + 0x4a0)
    sub_14068e310(&rbx[0xa5], arg3 + 0x528)
    sub_14068e310(&rbx[0xb6], arg3 + 0x5b0)
    sub_14068e310(&rbx[0xc7], arg3 + 0x638)
    *(rbx + 0x6c0) = *(arg3 + 0x6c0)
    rbx[0xda].d = *(arg3 + 0x6d0)
    sub_140dd9fa0(&rbx[0xdb], arg3 + 0x6d8)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

void*** var_18 = rbx
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
