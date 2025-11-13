// 函数: sub_141ed63f0
// 地址: 0x141ed63f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_28 = 0
int32_t i_4 = 0

if (&var_28 != arg2)
    void* rdi_1 = *arg2
    int32_t i_2 = arg2[1].d
    i_4 = i_2
    
    if (i_2 != 0)
        sub_1405a4be0(&var_28, i_2, 0)
        uint64_t rbx_1 = var_28
        int32_t i
        
        do
            *rbx_1 = 0
            int32_t rsi_1 = *(rdi_1 + 8)
            int64_t r14_1 = *rdi_1
            *(rbx_1 + 8) = rsi_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(rbx_1, rsi_1, 0)
                memcpy(*rbx_1, r14_1, rsi_1 * 2)
            else
                *(rbx_1 + 0xc) = 0
            
            rbx_1 += 0x10
            rdi_1 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)

int64_t result = sub_1405a9f90(arg1 + 0x110, &var_28)
int32_t i_3 = i_4
uint64_t rbx_2 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx_2 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_28

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
