// 函数: sub_1409733b0
// 地址: 0x1409733b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20
int32_t result = sub_1409633d0(&var_20, arg2, 0)
int64_t* rsi = var_20

if (rsi != 0)
    result = (*(*arg4 + 0x28))(arg4)
    
    if (result.b != 0)
        result = (*(*rsi + 0x2e0))(rsi, arg3, arg4, zx.q(arg5), 0)

int64_t* var_18

if (var_18 != 0)
    result = var_18[1].d
    var_18[1].d -= 1
    
    if (result == 1)
        result = (**var_18)(var_18)
        int32_t rdi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_18 + 8))(var_18, zx.q(rdi_1))

return result
