// 函数: sub_14096c770
// 地址: 0x14096c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
(*(*arg1 + 0x2a0))(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    (*(*rcx + 0xd0))(rcx, &arg1[0x12])

int32_t result = sub_14095a5d0(arg1, &arg1[0x13], arg2, &arg1[7])
int64_t* var_10

if (var_10 != 0)
    result = var_10[1].d
    var_10[1].d -= 1
    
    if (result == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
