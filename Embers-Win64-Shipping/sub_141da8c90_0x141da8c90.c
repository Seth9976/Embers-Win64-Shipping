// 函数: sub_141da8c90
// 地址: 0x141da8c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg1 + 8)
int64_t r11 = *(arg1 + 0x10)
int64_t var_28 = *arg3
void* rax_1 = arg3[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t var_18 = *arg2
void* rax_3 = arg2[1]
void* var_10 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

char var_30 = *(arg1 + 0x1c)
int32_t var_38 = *(arg1 + 0x18)
int32_t result = r11(r10, &var_18, &var_28)
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
