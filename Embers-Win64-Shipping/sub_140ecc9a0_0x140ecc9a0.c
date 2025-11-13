// 函数: sub_140ecc9a0
// 地址: 0x140ecc9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140ebeb20(*(arg1 + 0x3f0), &var_18)
void* rcx_1 = var_18
char rax_1

if (rcx_1 != 0)
    rax_1 = sub_140f07210(rcx_1)

if (rcx_1 == 0 || rax_1 != 0)
    *arg2 = 0
else
    int64_t zmm0_1 = sub_140ebd660()
    sub_140ed9ca0(data_143e2a070, &var_18, zmm0_1)
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
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
