// 函数: sub_141ba8820
// 地址: 0x141ba8820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* result = sub_141bab3c0(arg1, &var_18)
int64_t* rbx = var_18

if (rbx != 0)
    result = sub_140e25880(rbx, *(sub_140e12190(rbx) + 8), arg2)

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
