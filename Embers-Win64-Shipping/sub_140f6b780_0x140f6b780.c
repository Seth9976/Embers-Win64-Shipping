// 函数: sub_140f6b780
// 地址: 0x140f6b780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx == 0)
    return 

int64_t* rcx_1 = *rcx
int64_t var_28
int64_t* rax_2 = (*(*rcx_1 + 0x80))(rcx_1, &var_28)
int64_t* rbx_1 = rax_2[1]
int64_t rbp_1 = *rax_2

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* rcx_4 = data_143e29f28
var_28 = rbp_1
int64_t* var_20_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_18
int64_t* rax = (*(*rcx_4 + 0x28))(rcx_4, &var_18, &var_28)
*(arg1 + 0x10) = *rax
void* rdi_2 = rax[1]
int64_t* rcx_6 = *(arg1 + 0x18)

if (rdi_2 != rcx_6)
    if (rdi_2 != 0)
        *(rdi_2 + 0xc) += 1
        rcx_6 = *(arg1 + 0x18)
    
    if (rcx_6 != 0)
        int32_t temp5_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)
    
    *(arg1 + 0x18) = rdi_2

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp4_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp6_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp6_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
