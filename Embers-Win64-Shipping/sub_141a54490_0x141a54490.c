// 函数: sub_141a54490
// 地址: 0x141a54490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t* rax = j_sub_140a82f30(0x78)
int64_t* rdi

if (rax == 0)
    rdi = nullptr
else
    void arg_28
    void* var_38_1 = &arg_28
    rdi = sub_141a31350(rax, arg2, arg3, &arg_20)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_14302f4d8
    rbx_1[2] = rdi

int64_t* var_28 = rdi
void*** var_20 = rbx_1

if (arg1 + 8 == &var_28)
label_141a5458e:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 8) = rdi
    int64_t* rdi_1 = *(arg1 + 0x10)
    var_28 = nullptr
    
    if (rbx_1 == rdi_1)
        goto label_141a5458e
    
    void*** var_20_1 = nullptr
    *(arg1 + 0x10) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_1 = var_20_1
        goto label_141a5458e

int64_t arg_8
int64_t* result = sub_141a501c0(&data_143f2a090, &arg_8, arg3)
*(arg1 + 0x18) = *result
int64_t rcx_6 = *arg3

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
