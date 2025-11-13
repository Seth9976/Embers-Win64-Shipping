// 函数: sub_141fb87a0
// 地址: 0x141fb87a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x48) = arg2
void* rbp = arg2
int32_t* result = sub_140d3a3a0(arg1 + 0xd8, arg2)

if (*(arg1 + 0x48) == 0)
    return result

int64_t rax = *(rbp + 0x10)
*(arg1 + 8) &= 0xfffffff5
*(arg1 + 0x40) = rax
*(arg1 + 0x50) = arg3
*(arg1 + 0x60) = 0
int64_t** rdi_1 = *(arg1 + 0x30)
*(arg1 + 0x30) = 0

if (rdi_1 != 0)
    void* rsi_1 = rdi_1[1]
    
    if (rsi_1 != 0)
        sub_141fa6880(rsi_1)
        j_sub_140a74f90(rsi_1)
    
    sub_141fa8b80(rdi_1, *rdi_1)
    j_sub_140a74f90(rdi_1)

void* rcx_5 = *(arg1 + 0x50)
void* r8 = *(arg1 + 0x40)
*(arg1 + 0x58) = 0
*(arg1 + 4) = 0
void var_38
int64_t* rax_1 = sub_142168ae0(*(rcx_5 + 0x58), &var_38, r8)

if (arg1 + 0x20 != rax_1)
    *(arg1 + 0x20) = *rax_1
    *rax_1 = 0
    int64_t rcx_8 = rax_1[1]
    int64_t* rdi_2 = *(arg1 + 0x28)
    
    if (rcx_8 != rdi_2)
        rax_1[1] = 0
        *(arg1 + 0x28) = rcx_8
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (arg4 != 0)
    rbp = sub_140d209c0(*(arg1 + 0x48))

sub_141fb82d0(arg1, rbp)
void* rax_7 = *(arg1 + 0x50)
void* arg_10 = arg1
void arg_8
return sub_140812a70(*(rax_7 + 0x58) + 0x568, &arg_8, &arg_10, nullptr)
