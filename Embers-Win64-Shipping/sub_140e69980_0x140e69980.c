// 函数: sub_140e69980
// 地址: 0x140e69980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg3
void* rax_1 = arg3[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* rax_2 = sub_140e64c30(arg1, &var_18)

if (rax_2 == 0 || *(rax_2 + 0x38) == 0)
    *arg2 = data_1439ae51c
else
    int64_t* rcx = *(rax_2 + 0x30)
    
    if (rcx == 0)
        *arg2 = data_1439ae51c
    else
        int64_t rdx_1 = *rcx
        
        if ((*(rdx_1 + 0x28))(rcx, rdx_1) == 0)
            *arg2 = data_1439ae51c
        else
            int64_t* rcx_1
            
            if (*(rax_2 + 0x38) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rax_2 + 0x30)
            
            char rax_5 = (*(*rcx_1 + 0x48))(rcx_1)
            char rdx_2 = data_1439ae51d
            
            if (rax_5 != 0)
                rdx_2 = data_1439ae51c
            
            *arg2 = rdx_2

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
