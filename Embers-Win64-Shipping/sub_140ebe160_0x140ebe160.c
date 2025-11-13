// 函数: sub_140ebe160
// 地址: 0x140ebe160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140ebeb20(*(arg1 + 0x3f0), &var_18)
void* rcx_1 = var_18
int64_t result

if (rcx_1 == 0)
    result = sub_140e15430()
else
    result = sub_140f00ab0(rcx_1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return result
