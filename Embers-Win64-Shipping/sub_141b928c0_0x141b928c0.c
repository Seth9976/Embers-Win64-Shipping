// 函数: sub_141b928c0
// 地址: 0x141b928c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218)

if (result == 0)
    return result

int64_t arg_8 = arg2
void var_18
int64_t rdi
rdi.b = *sub_141bb2520(result + 0x500, &var_18, &arg_8) != 0
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

return zx.q(rdi.b)
