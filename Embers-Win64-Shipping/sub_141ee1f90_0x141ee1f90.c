// 函数: sub_141ee1f90
// 地址: 0x141ee1f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    return 

if (*(arg1 + 0x30) s< *(arg1 + 0x58))
    int64_t rbp_1 = sx.q(*(arg1 + 0x30))
    int32_t rax_2 = (rbp_1 + 1).d
    *(arg1 + 0x30) = rax_2
    
    if (rax_2 s> *(arg1 + 0x34))
        sub_1405a4f90(arg1 + 0x28)
    
    int64_t* rcx_3 = (rbp_1 << 4) + *(arg1 + 0x28)
    *rcx_3 = *arg2
    void* rax_4 = arg2[1]
    rcx_3[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1

void var_18

if (*(arg1 + 0x38) == *arg2 && arg1 + 0x38 != &var_18)
    *(arg1 + 0x38) = 0
    int64_t* rbx_1 = *(arg1 + 0x40)
    
    if (rbx_1 != 0)
        *(arg1 + 0x40) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg1 + 0x48) != *arg2 || arg1 + 0x48 == &var_18)
    return 

*(arg1 + 0x48) = 0
int64_t* rbx_2 = *(arg1 + 0x50)

if (rbx_2 == 0)
    return 

*(arg1 + 0x50) = 0
rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp3_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
