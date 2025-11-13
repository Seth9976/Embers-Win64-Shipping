// 函数: sub_141c67850
// 地址: 0x141c67850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0x25].d == 1)
    int64_t rax
    rax.b = 0
    return rax

*(arg1 + 0x19c) &= 0xfffffffe
*(arg1 + 0x160) = 1
float temp1 = *(arg2 + 0xfc)
0f - temp1
int64_t rbp
rbp.b = 0f < temp1
void*** rax_1
uint128_t zmm0
float zmm6
rax_1, zmm0, zmm6 = sub_141c5f2f0(*(arg1 + 8), *arg2, rbp.b)
*(arg1 + 0x90) = rax_1
int64_t* rax_2

if (rax_1 != 0)
    int64_t* rdi_1 = *arg2
    *(arg1 + 0x18) = rax_1
    *(arg1 + 0x10) = arg2
    *(arg1 + 0x24) = 0x469c4000
    *(arg1 + 0x2c) = 0x7f7fffff
    *(arg1 + 0x30) = 0x7f7fffff
    *(arg1 + 0x174)
    *(arg1 + 0x174) = 0
    
    if (not(zmm6 f>= rdi_1[0x1f].d))
        if ((*(rdi_1 + 0x16d) & 4) != 0)
            if (sub_14236bbe0(rdi_1, zmm0.d) == 0)
                zmm0.d = _mm_cvtepi32_ps(zx.o(*(*(arg1 + 8) + 0xc))).d f* rdi_1[0x1f].d
                *(arg1 + 0x64) = int.d(zmm0.d)
        else
            zmm0.d = sub_142366f80(rdi_1).d f* rdi_1[0x1f].d
            *(arg1 + 0x64) = int.d(zmm0.d)
    
    void var_28
    rax_2 = sub_141c59db0(&var_28, *(arg1 + 0x90), rdi_1, arg2[0x1f].d, rbp.b, 0)
    
    if (arg1 + 0x98 != rax_2)
        *(arg1 + 0x98) = *rax_2
        *rax_2 = 0
        sub_1405aeff0(arg1 + 0xa0, &rax_2[1])
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rsi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rsi_1))
    
    int64_t temp2_1 = *(arg1 + 0x98)
    bool cond:4_1 = temp2_1 != 0
    
    if (temp2_1 == 0)
        sub_141c5c6b0(arg1)
        *(*(arg1 + 0x10) + 0xf8) = 0
        void* rcx_9 = (*(arg1 + 0x10))[0x18]
        
        if (rcx_9 != 0)
            *(rcx_9 + 0x180) &= 0xf7
        
        cond:4_1 = *(arg1 + 0x98) != 0
    
    rax_2.b = cond:4_1
else
    sub_141c5c6b0(arg1)
    rax_2.b = 0

return rax_2
