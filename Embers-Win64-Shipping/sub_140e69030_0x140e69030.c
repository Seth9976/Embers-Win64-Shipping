// 函数: sub_140e69030
// 地址: 0x140e69030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140da2300(&var_18, arg1 + 0x68, arg3)
void* rcx_1 = var_18

if (rcx_1 == 0)
    __builtin_memset(arg2, 0, 0x20)
else
    sub_140e173c0(rcx_1, arg2)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
