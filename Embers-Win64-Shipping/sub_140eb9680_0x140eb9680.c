// 函数: sub_140eb9680
// 地址: 0x140eb9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
int512_t zmm1
result, zmm1 = sub_140eadcb0(arg1)

if (result != 0)
    void var_18
    result = sub_140f14f00(*sub_140ebeb20(*(arg1 + 0x3f0), &var_18), zmm1)
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
