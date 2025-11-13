// 函数: sub_141be8ae0
// 地址: 0x141be8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141802500()
int64_t r8 = *rax
int64_t* var_18
(*(r8 + 0x40))(rax, &var_18, r8)
int64_t* rcx_1 = var_18
int64_t* rax_2 = (*(*rcx_1 + 0x90))(rcx_1)
void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_143084368
    sub_140d3a3a0(&rax_3[1], arg1)
    rax_3[2] = sub_141bb3b50
    rax_3[4] = sub_140a387b0()
    *rax_3 = &data_1430843c0

int64_t var_28

if (&var_28 != rax_2)
    if (rax_3 != 0)
        (*rax_3)[8](rax_3, rax_2)
    else if (rax_2[1].d != 0)
        int64_t* rcx_4 = *rax_2
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x38))(rcx_4, 0)
            int64_t rcx_5 = *rax_2
            
            if (rcx_5 != 0)
                *rax_2 = sub_140a84c80(rcx_5, 0, 0)
            
            rax_2[1].d = 0

if (rax_3 != 0)
    (*rax_3)[7](rax_3, 0)
    int64_t rax_9 = sub_140a84c80(rax_3, 0, 0)
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)

int64_t* rcx_9 = var_18
(*(*rcx_9 + 0x50))(rcx_9, arg2)
var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 4)
int32_t rax_11 = var_20 + 4
var_20 = rax_11

if (rax_11 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, &data_142d85f90, 8)
int64_t* rcx_13 = var_18
(*(*rcx_13 + 0x48))(rcx_13, &var_28)
int64_t rcx_14 = var_28

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t* rcx_15 = var_18
int64_t result = (*(*rcx_15 + 0x88))(rcx_15)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

int64_t rcx_18 = *arg2

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
