// 函数: sub_140eb8bb0
// 地址: 0x140eb8bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg1 + 0x10)
int64_t r8 = *(arg1 + 8)
void var_38
uint128_t* rax_2 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + r8, &var_38, r8)
*arg2 = *rax_2
arg2[1].b = rax_2[1].b
*(arg2 + 0x18) = *(rax_2 + 0x18)
void* rcx_4 = rax_2[2].q
arg2[2].q = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t temp1_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_18 + 8))(var_18, 1)

return arg2
