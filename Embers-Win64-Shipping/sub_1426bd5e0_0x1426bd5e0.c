// 函数: sub_1426bd5e0
// 地址: 0x1426bd5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = data_143b57f9c
int64_t rax_1 = *arg1
uint128_t var_28 = zx.o(0)
(*(rax_1 + 0x780))(zx.o(0), arg3, arg4, &var_28, var_28)

if (var_28.q != 0)
    uint128_t zmm0 = var_28
    uint128_t var_18 = zmm0
    void* rax_2 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    void arg_8
    *arg2 = *(*(*arg1 + 0x778))(arg1, &arg_8, arg3, &var_18)

int64_t* rbx_1 = var_28:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg2
