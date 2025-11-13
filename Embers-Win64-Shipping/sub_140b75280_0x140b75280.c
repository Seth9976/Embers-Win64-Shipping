// 函数: sub_140b75280
// 地址: 0x140b75280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t result
int128_t zmm0
zmm0, result = sub_140b74be0(*sub_140b74870(arg1, &var_28, arg2))
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

return result
