// 函数: sub_141bb23f0
// 地址: 0x141bb23f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_141bab3c0(arg1, &var_18)
void* rdi = var_18
char rbx_1

if (rdi == 0)
    rbx_1 = *(arg1 + 0xc3)
else
    rbx_1 = 0
    
    if (*(rdi + 0x1b8) != 0)
        int64_t* rcx = *(rdi + 0x1b0)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(rdi + 0x1b8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rdi + 0x1b0)
            
            char arg_10
            (*(*rcx_1 + 0x48))(rcx_1, &arg_10)
            *(rdi + 0x1a8) = arg_10
    
    char rax_5 = *(rdi + 0x1a8)
    
    if (rax_5 != data_1439ae51c)
        if (rax_5 == data_1439ae51d)
            rbx_1 = 1
        else if (rax_5 == data_1439ae51e)
            rbx_1 = 2
        else if (rax_5 == data_1439ae51f)
            rbx_1 = 3
        else if (rax_5 == data_1439ae520)
            rbx_1 = 4

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_2 = *var_10
        (*rdx_2)(var_10, rdx_2)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return zx.q(rbx_1)
