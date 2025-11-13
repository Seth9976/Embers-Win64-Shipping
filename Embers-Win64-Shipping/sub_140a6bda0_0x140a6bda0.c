// 函数: sub_140a6bda0
// 地址: 0x140a6bda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x50)
int64_t* rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_140a60e30(rax, *(arg1 + 8))

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142e63320
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_2

if (rax_3 == 0)
    rbx_2 = nullptr
else
    uint128_t zmm0_1 = rbx_1.o
    uint128_t var_18 = zmm0_1
    void* rcx_1 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    rbx_2 = sub_140a610a0(rax_3, &var_18)

void*** rax_5 = j_sub_140a82f30(0x18)

if (rax_5 != 0)
    rax_5[1].d = 1
    *rax_5 = &data_142d42ea8
    *(rax_5 + 0xc) = 1
    rax_5[2] = rbx_2

*arg2 = rbx_2
arg2[1] = rax_5

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_2)[1](rax_2, 1)

return arg2
