// 函数: sub_140eaeef0
// 地址: 0x140eaeef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
int64_t* result = sub_140ebeb20(*(arg1 + 0x3f0), &var_18)
void* rcx_1 = var_18

if (rcx_1 != 0)
    result = sub_140f14f00(rcx_1, arg2)

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
