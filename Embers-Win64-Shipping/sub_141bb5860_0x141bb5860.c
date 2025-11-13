// 函数: sub_141bb5860
// 地址: 0x141bb5860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_141bab3c0(arg1, &var_18)
void* rcx = var_18
uint64_t rdi

if (rcx == 0)
    rdi.b = 0
else
    void arg_10
    sub_140e195e0(rcx, &arg_10)
    rdi = zx.q(arg2)

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
