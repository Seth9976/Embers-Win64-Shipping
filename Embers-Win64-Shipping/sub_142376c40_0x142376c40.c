// 函数: sub_142376c40
// 地址: 0x142376c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1 + zx.q(arg2) * 0x28
*(rdi + 8) = 3
void var_18

if (&var_18 != rdi + 0x20 && *(rdi + 0x28) != 0)
    int64_t* rcx = *(rdi + 0x20)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(rdi + 0x20)
        
        if (rcx_1 != 0)
            *(rdi + 0x20) = sub_140a84c80(rcx_1, 0, 0)
        
        *(rdi + 0x28) = 0

void* result = rdi + 0x10

if (result != &var_18)
    *result = 0
    int64_t* rcx_2 = *(result + 8)
    *(result + 8) = 0
    
    if (rcx_2 != 0)
        int32_t temp0_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp0_1 == 1)
            return (*(*rcx_2 + 8))(rcx_2, 1)

return result
