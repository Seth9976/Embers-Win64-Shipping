// 函数: sub_141f000c0
// 地址: 0x141f000c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* result = sub_141f191e0(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    int64_t arg_18 = arg2
    result = sub_1405a9f90(rcx, &arg_18)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_10 + 8))

return result
