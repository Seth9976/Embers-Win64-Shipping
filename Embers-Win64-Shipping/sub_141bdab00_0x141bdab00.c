// 函数: sub_141bdab00
// 地址: 0x141bdab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141bda110(arg1)
int64_t* result = arg1 + 0x368
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = result[1]
    
    if (rbx_1 != 0)
        result[1] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*rbx_1 + 8))

return result
