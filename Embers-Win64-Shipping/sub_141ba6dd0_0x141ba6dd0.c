// 函数: sub_141ba6dd0
// 地址: 0x141ba6dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
uint128_t zmm1 = *(arg1 + 0x10)
void var_18
int64_t* rax_2 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rax, &var_18, arg3, arg4)
*arg2 = *rax_2
void* rcx_5 = rax_2[1]
arg2[1] = rcx_5

if (rcx_5 != 0)
    *(rcx_5 + 8) += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
