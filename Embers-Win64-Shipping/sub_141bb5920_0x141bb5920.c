// 函数: sub_141bb5920
// 地址: 0x141bb5920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_141bab3c0(arg1, &var_18)
void* rcx = var_18
uint64_t rdi

if (rcx == 0)
    rdi.b = 0
else
    rdi = zx.q(sub_140e19760(rcx, arg2))

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return zx.q(rdi.b)
