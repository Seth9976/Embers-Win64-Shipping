// 函数: sub_140b75710
// 地址: 0x140b75710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)

if (rax != 0)
    rax[1].d = 1
    *rax = &data_142d854f8
    *(rax + 0xc) = 1
    rax[2] = &data_142d84c78
    rax[4].b = arg3
    rax[3].d = 4

uint128_t zmm0 = (&rax[2]).o
uint128_t var_18 = zmm0
void* rax_1 = _mm_bsrli_si128(zmm0, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t result = sub_140b747b0(arg1, arg2, &var_18)
int64_t* rbx_1 = var_18:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        result = (**rax)(rax)
        int32_t temp3_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*rax)[1](rax, 1)

return result
