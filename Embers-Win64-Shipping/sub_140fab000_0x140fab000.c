// 函数: sub_140fab000
// 地址: 0x140fab000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1

int64_t rdx = 0

if (rbx != 0)
    rdx = *(arg1 + 8)

uint128_t zmm1 = *(arg1 + 0x18)
void var_18
int64_t* rax_5 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rdx, &var_18)
*arg2 = *rax_5
arg2[1] = rax_5[1]
rax_5[1] = 0
*rax_5 = 0
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
