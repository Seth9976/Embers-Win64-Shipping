// 函数: sub_141bb9160
// 地址: 0x141bb9160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_141bab3c0(arg1, &var_18)
void* rbx = var_18
int64_t rdi

if (rbx == 0)
    rdi.b = 0
else
    if (*(rbx + 0x1b8) != 0)
        int64_t* rcx = *(rbx + 0x1b0)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(rbx + 0x1b8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rbx + 0x1b0)
            
            char arg_10
            (*(*rcx_1 + 0x48))(rcx_1, &arg_10)
            *(rbx + 0x1a8) = arg_10
    
    rdi.b = (*(rbx + 0x1a8) & 0x19) != 0

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

return zx.q(rdi.b)
