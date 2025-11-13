// 函数: sub_141be2f60
// 地址: 0x141be2f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb4) &= 0xfb
*(arg1 + 0xb4) |= arg2 << 2
int64_t* var_38
int64_t* result = sub_141bab3c0(arg1, &var_38)
int64_t* rcx = var_38

if (rcx != 0)
    char var_28 = arg2
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    char var_27_1 = 1
    sub_1406a4f10(rcx, &var_28)
    result = sub_140745b20(&var_20)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_30 + 8))

return result
