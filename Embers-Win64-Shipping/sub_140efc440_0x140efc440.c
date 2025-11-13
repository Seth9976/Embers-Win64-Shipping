// 函数: sub_140efc440
// 地址: 0x140efc440
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
void var_58
int64_t* rax_5 = zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rdx, &var_58)
*arg2 = *rax_5
arg2[1] = rax_5[1]
*(arg2 + 0x10) = *(rax_5 + 0x10)
*(arg2 + 0x20) = *(rax_5 + 0x20)
arg2[6] = rax_5[6]
arg2[7] = rax_5[7]
rax_5[7] = 0
rax_5[6] = 0
arg2[8] = rax_5[8]
arg2[9].d = rax_5[9].d
*(arg2 + 0x4c) = *(rax_5 + 0x4c)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
