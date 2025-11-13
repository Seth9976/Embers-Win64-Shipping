// 函数: sub_141bcc7a0
// 地址: 0x141bcc7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* (* var_18)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = sub_141b6f270(arg1, &var_18)
*arg2 = *rax
void* rcx_1 = rax[1]
arg2[1] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

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
