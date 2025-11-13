// 函数: sub_141dad630
// 地址: 0x141dad630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int32_t result = sub_141daee30(arg1, zx.q(*(arg1 + 0x258)), 0xd, &var_18)

if (arg4 != 0)
    int64_t* rcx = *arg3
    result = (*(*rcx + 0x40))(rcx)
    
    if (result == 0xc8)
    label_141dad6a5:
        int64_t* rcx_2 = *arg2
        
        if (rcx_2 != 0)
            result = (*(*rcx_2 + 0x28))(rcx_2)
            *(arg1 + 0x358) += result
    else
        int64_t* rcx_1 = *arg3
        result = (*(*rcx_1 + 0x40))(rcx_1)
        
        if (result == 0xcc)
            goto label_141dad6a5

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
