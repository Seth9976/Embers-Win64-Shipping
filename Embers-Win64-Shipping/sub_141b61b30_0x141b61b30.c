// 函数: sub_141b61b30
// 地址: 0x141b61b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x20)
int64_t* rsi_1

if (rax == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_141b4a820(rax, arg4, arg5, data_1439c8644, arg6)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_14306d0a8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rsi_1

uint128_t zmm0 = rsi_1.o
uint128_t var_18 = zmm0
void* rax_3 = _mm_bsrli_si128(zmm0, 8).q

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_141b61c60(arg1, arg2, arg3, &var_18)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t rsi_2 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*rax_2)[1](rax_2, zx.q(rsi_2))

return arg2
