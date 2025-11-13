// 函数: sub_141f00280
// 地址: 0x141f00280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* result = sub_141f194a0(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    char var_28 = arg2
    int64_t r8
    int64_t var_20_1 = r8
    result = sub_1405a9f90(rcx, &var_28)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
