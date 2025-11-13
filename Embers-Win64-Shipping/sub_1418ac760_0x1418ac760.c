// 函数: sub_1418ac760
// 地址: 0x1418ac760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa4) == 0)
    int64_t var_38 = arg1[3]
    int64_t* rax_1 = arg1[4]
    
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    int32_t result = sub_1418acac0(arg1, &var_38, arg3, arg4, arg2, rax_1)
    
    if (rax_1 != 0)
        result = rax_1[1].d
        rax_1[1].d -= 1
        
        if (result == 1)
            result = (**rax_1)(rax_1)
            int32_t rdi_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                jump(*(*rax_1 + 8))
    
    return result

void* arg_8 = &arg1[0x20]
void*** rax_5 = sub_14189c8f0(&arg_8)

if (rax_5 != 0)
    rax_5[1].d += 1

CRITICAL_SECTION* rbp_1 = arg1[0x1a]
void var_18

if (rbp_1 + 0x80 == &var_18)
label_1418ac890:
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp3_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rax_5)[1](rax_5, 1)
else
    *(rbp_1 + 0x80) = &rax_5[2]
    void*** rdi_2 = *(rbp_1 + 0x88)
    
    if (rax_5 == rdi_2)
        goto label_1418ac890
    
    *(rbp_1 + 0x88) = rax_5
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp6_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rdi_2)[1](rdi_2, 1)

sub_1405fc0f0(rbp_1, arg2, arg3, arg4)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp5_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rax_5)[1](rax_5, 1)

int64_t rax_13 = (*(*arg1 + 8))(arg1)
void* rdx_3 = arg1[0xc]
void* rcx_12 = &arg1[0xe]

if (rdx_3 != 0)
    rcx_12 = rdx_3

int64_t rdx_4 = *rcx_12
return arg1[0xa]((*(rdx_4 + 8))(rcx_12, rdx_4), rax_13)
