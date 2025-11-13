// 函数: sub_141d7aeb0
// 地址: 0x141d7aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t* rcx = arg1 + 0xa0
    
    if (*(arg1 + 0x9c) == 0)
        rcx = arg1 + 0x94
    
    rdi[1] = *rcx
    *rdi = &data_143231fd0

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

void*** var_28 = rdi
void*** var_20 = rbx

if (arg1 + 0xe8 == &var_28)
label_141d7afbc:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    *(arg1 + 0xe8) = rdi
    int64_t* rdi_1 = *(arg1 + 0xf0)
    var_28 = nullptr
    
    if (rbx == rdi_1)
        goto label_141d7afbc
    
    void*** var_20_1 = nullptr
    *(arg1 + 0xf0) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx = var_20_1
        goto label_141d7afbc

int64_t* rcx_6 = *(arg1 + 0xe8)
(*(*rcx_6 + 8))(rcx_6)
var_28 = *arg2
void* rax_8 = arg2[1]
void* var_20_2 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

int64_t result
uint64_t zmm1
uint128_t zmm6
result, zmm1 = sub_141d7b080(arg1, &var_28, zmm6)
bool cond:1 = *(arg1 + 0x1f8) == 0
*(arg1 + 0x214) = arg3

if (not(cond:1))
    result = sub_141d7fa80(arg1 - 0x28, zmm1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
