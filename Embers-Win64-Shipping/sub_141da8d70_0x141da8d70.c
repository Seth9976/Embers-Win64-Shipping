// 函数: sub_141da8d70
// 地址: 0x141da8d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 8)
int64_t r14 = *(arg1 + 0x10)
int64_t var_38 = 0
int32_t var_30 = 0

if (arg1 + 0x18 != &var_38 && *(arg1 + 0x20) != 0)
    int64_t* rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_38)

int64_t var_28 = *arg3
void* rax_3 = arg3[1]
void* var_20 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t var_18 = *arg2
void* rax_5 = arg2[1]
void* var_10 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int32_t result = r14(rbp, &var_18, &var_28, zx.q(arg4), &var_38)
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
