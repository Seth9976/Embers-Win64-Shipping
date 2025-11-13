// 函数: sub_141be5890
// 地址: 0x141be5890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc4) = arg2.d
int64_t* var_28
int64_t* result = sub_141bab3c0(arg1, &var_28)
int64_t* rcx = var_28

if (rcx != 0 && not(arg2.d f== rcx[0x38].d))
    rcx[0x38].d = arg2.d
    result = sub_140e19ef0(rcx, 2)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_20 + 8))(var_20, 1)

return result
