// 函数: sub_140efc380
// 地址: 0x140efc380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg1 + 0x10)
int64_t r8 = *(arg1 + 8)
uint128_t var_18 = zmm1
void var_38
int64_t* rax_2 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + r8, &var_38, r8)
*arg2 = *rax_2
void* rcx_3 = rax_2[1]
arg2[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

arg2[2].d = rax_2[2].d
int64_t* var_30

if (var_30 == 0)
    return arg2

var_30[1].d -= 1

if (var_30[1].d == 1)
    (**var_30)(var_30)
    int32_t rsi_1 = *(var_30 + 0xc)
    *(var_30 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_30 + 8))(var_30, zx.q(rsi_1))

return arg2
