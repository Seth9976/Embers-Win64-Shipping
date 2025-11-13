// 函数: sub_140dd48e0
// 地址: 0x140dd48e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void*** rax = j_sub_140a82f30(0xa80)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    type_info::type_info(rax)
    *rbx = &data_142ec9300
    sub_140dd7810(&rbx[1], arg3 + 8)
    rbx[0xff] = *(arg3 + 0x7f8)
    rbx[0x100] = *(arg3 + 0x800)
    *(rbx + 0x808) = *(arg3 + 0x808)
    *(rbx + 0x818) = *(arg3 + 0x818)
    rbx[0x105] = *(arg3 + 0x828)
    void* rax_4 = *(arg3 + 0x830)
    rbx[0x106] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    rbx[0x107] = *(arg3 + 0x838)
    rbx[0x108].d = *(arg3 + 0x840)
    *(rbx + 0x844) = *(arg3 + 0x844)
    sub_14068e310(&rbx[0x109], arg3 + 0x848)
    sub_14068e310(&rbx[0x11a], arg3 + 0x8d0)
    sub_14068e310(&rbx[0x12b], arg3 + 0x958)
    sub_14068e310(&rbx[0x13c], arg3 + 0x9e0)
    *(rbx + 0xa68) = *(arg3 + 0xa68)
    rbx[0x14f].b = *(arg3 + 0xa78)

void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 != 0)
    rax_9[1].d = 1
    *rax_9 = &data_142d42ea8
    *(rax_9 + 0xc) = 1
    rax_9[2] = rbx

void*** var_18 = rbx
int64_t result = sub_140dd28f0(arg1 + 0x30, &arg_10, &var_18)

if (rax_9 != 0)
    rax_9[1].d -= 1
    
    if (rax_9[1].d == 1)
        result = (**rax_9)(rax_9)
        int32_t temp1_1 = *(rax_9 + 0xc)
        *(rax_9 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rax_9)[1](rax_9, 1)

return result
