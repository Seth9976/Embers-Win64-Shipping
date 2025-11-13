// 函数: sub_141d8d620
// 地址: 0x141d8d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142d3fe58
    rax[2] = sub_141d8c290
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

void var_18

if (&var_18 != arg1 + 0x38)
    if (rax != 0)
        (*rax)[8](rax, arg1 + 0x38)
    else if (*(arg1 + 0x40) != 0)
        int64_t* rcx_1 = *(arg1 + 0x38)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *(arg1 + 0x38)
            
            if (rcx_2 != 0)
                *(arg1 + 0x38) = sub_140a84c80(rcx_2, 0, 0)
            
            *(arg1 + 0x40) = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_6 = sub_140a84c80(rax, 0, 0)
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)

void*** rax_7 = sub_140a84c80(0, 0x30, 0)

if (rax_7 != 0)
    rax_7[1] = arg1
    *rax_7 = &data_142d3fe58
    rax_7[2] = sub_141d8c298
    rax_7[4] = sub_140a387b0()
    *rax_7 = &data_142d3feb0

if (&var_18 != arg1 + 0x48)
    if (rax_7 != 0)
        (*rax_7)[8](rax_7, arg1 + 0x48)
    else if (*(arg1 + 0x50) != 0)
        int64_t* rcx_7 = *(arg1 + 0x48)
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = *(arg1 + 0x48)
            
            if (rcx_8 != 0)
                *(arg1 + 0x48) = sub_140a84c80(rcx_8, 0, 0)
            
            *(arg1 + 0x50) = 0

if (rax_7 != 0)
    (*rax_7)[7](rax_7, 0)
    int64_t rax_13 = sub_140a84c80(rax_7, 0, 0)
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)

sub_1423ebf10(data_143f5b298, arg1 + 0x38)
return sub_1423ebf20(data_143f5b298, arg1 + 0x48) __tailcall
