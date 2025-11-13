// 函数: sub_141bc4c30
// 地址: 0x141bc4c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x418)

if (rcx == 0)
    return 

uint128_t zmm0 = data_143e244b0.o
uint128_t var_18 = zmm0
void* rax_1 = _mm_bsrli_si128(zmm0, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1

(*(*rcx + 0x240))(rcx, &var_18)
