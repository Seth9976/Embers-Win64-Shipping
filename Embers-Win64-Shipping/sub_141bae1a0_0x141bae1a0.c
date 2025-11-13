// 函数: sub_141bae1a0
// 地址: 0x141bae1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_141bab3c0(arg1, &var_18)
void* rbx = var_18
uint8_t rbx_1

if (rbx == 0)
    rbx_1 = *(arg1 + 0xb4) u>> 2 & 1
else
    if (*(rbx + 0x1a0) != 0)
        int64_t* rcx = *(rbx + 0x198)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(rbx + 0x1a0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rbx + 0x198)
            
            *(rbx + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)
    
    rbx_1 = *(rbx + 0x190)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_1 = *var_10
        (*rdx_1)(var_10, rdx_1)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return zx.q(rbx_1)
