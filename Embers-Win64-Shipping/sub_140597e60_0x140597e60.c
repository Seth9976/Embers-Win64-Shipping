// 函数: sub_140597e60
// 地址: 0x140597e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xc0)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_142076a60(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

void*** var_18 = rbx
int64_t result = sub_140babbe0(arg2, &var_18, rbx)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rax_2)[1](rax_2, 1)

return result
