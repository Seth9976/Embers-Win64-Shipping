// 函数: sub_14091d6e0
// 地址: 0x14091d6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
int64_t* rbx = nullptr

if (rax == 0)
    rax = nullptr
else
    rax[1].d = 1
    *rax = &data_142e21830
    *(rax + 0xc) = 1
    rax[2] = &data_142e20698
    __builtin_memset(&rax[3], 0, 0x11)
    rax[6] = 0
    rax[7] = 0

void* var_68 = &rax[2]
*(var_68 + 0x18) = 3
void var_58
char* result = sub_14093c570(&var_58, &arg1[2])
char* result_1 = result

if (arg1[1].d != 0)
    int64_t* rcx_1 = *arg1
    
    if (rcx_1 != 0)
        int64_t rdx_2 = *rcx_1
        result = (*(rdx_2 + 0x28))(rcx_1, rdx_2)
        
        if (result.b != 0)
            if (arg1[1].d != 0)
                rbx = *arg1
            
            result = (*(*rbx + 0x50))(rbx, result_1, &var_68)

int64_t* var_28

if (var_28 != 0)
    result = zx.q(var_28[1].d)
    var_28[1].d -= 1
    
    if (result.d == 1)
        result = (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_28 + 8))(var_28, zx.q(rdi_1))

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    result = sub_140a74f90(var_50)

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        result = (**rax)(rax)
        int32_t temp2_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*rax)[1](rax, 1)

return result
