// 函数: sub_141da8ea0
// 地址: 0x141da8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 8)
int64_t r15 = *(arg1 + 0x10)
int64_t var_58 = 0
int32_t var_50 = 0

if (arg1 + 0x18 != &var_58 && *(arg1 + 0x20) != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_58)

int64_t var_48 = *arg3
void* rax_3 = arg3[1]
void* var_40 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t var_38 = *arg2
void* rax_5 = arg2[1]
void* var_30 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void var_28
int32_t result =
    r15(r14, &var_38, &var_48, zx.q(arg4), &var_58, sub_140596d10(&var_28, arg1 + 0x28))
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
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
