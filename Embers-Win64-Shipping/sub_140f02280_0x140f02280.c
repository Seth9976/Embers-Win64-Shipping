// 函数: sub_140f02280
// 地址: 0x140f02280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140f02160(arg1, &var_18)
void* rcx = var_18

if (rcx == 0)
    *arg2 = 0
    arg2[1] = 0
else
    sub_140ebf3d0(rcx, arg2)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
