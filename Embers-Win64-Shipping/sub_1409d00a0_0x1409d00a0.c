// 函数: sub_1409d00a0
// 地址: 0x1409d00a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb0) != 0)
    return 

int64_t* rax_1 = j_sub_140a82f30(0x58)
int64_t* rdi_1 = rax_1
int64_t* var_18
int32_t var_10

if (rax_1 == 0)
    rdi_1 = nullptr
else
    int64_t rdx = *(arg1 + 0x28)
    var_18 = nullptr
    var_10 = 1
    sub_1405c4a00(&var_18, 1, 0)
    *var_18 = rdx
    sub_1409aa2b0(rdi_1, &var_18, arg3, 1)
    int64_t* rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142e40b10
    rbx_1[2] = rdi_1

var_18 = rdi_1
var_10.q = rbx_1

if (arg1 + 0xb0 == &var_18)
label_1409d01e4:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 0xb0) = rdi_1
    int64_t* rdi_2 = *(arg1 + 0xb8)
    var_18 = nullptr
    
    if (rbx_1 == rdi_2)
        goto label_1409d01e4
    
    var_10.q = 0
    *(arg1 + 0xb8) = rbx_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_1 = var_10.q
        goto label_1409d01e4

int64_t* rcx_8 = *(arg1 + 0x28)
(*(*rcx_8 + 0x300))(rcx_8)
sub_1419ba820(*(arg1 + 0x28) + 0x98, 0)
