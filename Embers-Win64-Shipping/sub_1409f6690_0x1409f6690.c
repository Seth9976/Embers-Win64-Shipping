// 函数: sub_1409f6690
// 地址: 0x1409f6690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *(arg1 + 0x28)
int64_t var_48 = *arg3
void* rax_1 = arg3[1]
int128_t var_28 = zmm0
void* var_40 = rax_1
int128_t var_18 = *(arg1 + 0x18)

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t var_38 = *arg2
void* rax_3 = arg2[1]
void* var_30 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int32_t result = (*(arg1 + 8))(&var_38, &var_48, zx.q(arg4), *(arg1 + 0x10), &var_18, &var_28)
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
