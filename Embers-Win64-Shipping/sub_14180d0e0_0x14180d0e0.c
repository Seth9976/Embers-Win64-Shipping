// 函数: sub_14180d0e0
// 地址: 0x14180d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rdx = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx != 0)
        rdx = *(arg1 + 8)

int96_t zmm0 = (*(arg1 + 0x18)).12
int64_t var_58 = *(arg1 + 0x28)
void* rax_4 = *(arg1 + 0x30)
void* var_50 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t var_48 = *arg3
void* rax_6 = arg3[1]
void* var_40 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t var_38 = *arg2
void* rax_8 = arg2[1]
void* var_30 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

int64_t* var_68 = &var_58
int32_t result = zmm0.q(sx.q(zmm0:8.d) + rdx, &var_38, &var_48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
