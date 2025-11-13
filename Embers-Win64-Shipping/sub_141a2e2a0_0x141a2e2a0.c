// 函数: sub_141a2e2a0
// 地址: 0x141a2e2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
else
    *r14 = &data_142d4c6c0
    r14[1] = 0
    r14[2] = 0
    int64_t rax_1 = data_143f2a908
    
    if (rax_1 == 0)
        rax_1 = sub_141a4fae0(&data_143f2a908, 0)
        data_143f2a908 = rax_1
    
    r14[3] = rax_1

int64_t* rcx = *(arg2 + 8)
int64_t arg_8 = r14
sub_1406f3ea0(rcx, arg2 + 0x24, &arg_8)
int64_t rcx_1 = arg_8

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

arg_8 = arg1[4]
int64_t arg_10 = arg1[3]
void var_28
int64_t* rax_5 = sub_140596d10(&var_28, &arg1[1])
int64_t rbx_1 = *arg1
int64_t* rax_6 = j_sub_140a82f30(0x78)
int64_t* rdi_1

if (rax_6 == 0)
    rdi_1 = nullptr
else
    int64_t* var_48_1 = &arg_8
    rdi_1 = sub_141a31350(rax_6, rbx_1, rax_5, &arg_10)

void*** rax_8 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_8

if (rax_8 == 0)
    rbx_2 = nullptr
else
    rax_8[1].d = 1
    *(rax_8 + 0xc) = 1
    *rbx_2 = &data_14302f4d8
    rbx_2[2] = rdi_1

int64_t* var_38 = rdi_1
void*** var_30 = rbx_2

if (&r14[1] == &var_38)
label_141a2e43b:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    r14[1] = rdi_1
    int64_t* rdi_2 = r14[2]
    var_38 = nullptr
    
    if (rbx_2 == rdi_2)
        goto label_141a2e43b
    
    void*** var_30_1 = nullptr
    r14[2] = rbx_2
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_2 = var_30_1
        goto label_141a2e43b

int64_t* result = sub_141a501c0(&data_143f2a090, &arg_8, rax_5)
r14[3] = *result
int64_t rcx_9 = *rax_5

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
