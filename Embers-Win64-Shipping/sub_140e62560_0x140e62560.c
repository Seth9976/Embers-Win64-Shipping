// 函数: sub_140e62560
// 地址: 0x140e62560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rdx = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx != 0)
        rdx = *(arg1 + 8)

uint128_t zmm1 = *(arg1 + 0x18)
uint128_t var_18 = zmm1
void var_38
int64_t* rax_5 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rdx, &var_38)
*arg2 = *rax_5
void* rcx_3 = rax_5[1]
arg2[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

arg2[2].d = rax_5[2].d
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rbp_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rbp_1))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
