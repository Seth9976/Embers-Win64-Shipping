// 函数: sub_141d49230
// 地址: 0x141d49230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x88)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_1406ca050(rax, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d83c20
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

uint128_t zmm0 = rbx_1.o
uint128_t var_18 = zmm0
void* rax_3 = _mm_bsrli_si128(zmm0, 8).q

if (rax_3 != 0)
    *(rax_3 + 8) += 1
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp3_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rax_2)[1](rax_2, 1)

char rax_6 = sub_1409173d0(&var_18, arg1 + 0x10, 0)
int64_t* rbx_3 = var_18:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return zx.q(rax_6)
