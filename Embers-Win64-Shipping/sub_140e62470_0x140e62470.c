// 函数: sub_140e62470
// 地址: 0x140e62470
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
void var_38
uint128_t* rax_5 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rdx, &var_38)
*arg2 = *rax_5
arg2[1].b = rax_5[1].b
*(arg2 + 0x18) = *(rax_5 + 0x18)
void* rcx_4 = rax_5[2].q
arg2[2].q = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t temp2_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_18 + 8))(var_18, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
