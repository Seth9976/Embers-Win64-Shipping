// 函数: sub_140928de0
// 地址: 0x140928de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
(*(*arg1 + 0xf0))(arg1, &var_18, zx.q(arg2))
int64_t rdx_1 = var_18
int32_t rdi

if (rdx_1 == 0)
    rdi = 0
else
    rdi = (*(*arg1 + 0x110))(arg1, rdx_1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return zx.q(rdi)
