// 函数: sub_140b4a6b0
// 地址: 0x140b4a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140b3a6e0(arg1, &var_18, arg2)
void* rdi = var_18

if (rdi == 0 || *(rdi + 0x28) == 0)
    rdi.b = 0
else
    char temp0_1 = *(rdi + 0x31)
    *(rdi + 0x31) = 0
    int64_t rax_1
    rax_1.b = temp0_1
    int64_t* rcx = *(rdi + 0x28)
    (*(*rcx + 0x20))(rcx)
    int64_t* rcx_1 = *(rdi + 0x28)
    
    if (rcx_1 != 0)
        *(rdi + 0x28) = 0
        (**rcx_1)(rcx_1, 1)
    
    if (arg3 == 0)
        sub_140b34430(arg1 + 0x310, arg2, 1)
        rdi.b = 1
    else
        rdi.b = 1
        *(var_18 + 0x30) = 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rsi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *var_10
            (*(r8_2 + 8))(var_10, zx.q(rsi_1), r8_2)

return zx.q(rdi.b)
