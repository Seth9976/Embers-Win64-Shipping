// 函数: sub_142358050
// 地址: 0x142358050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_142361500(arg1 - 0x390, &var_18, arg2)
void* result = sub_140de1aa0(sub_140de7320(*(var_18 + 0x10), arg4), arg3)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
