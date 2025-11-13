// 函数: sub_141ba64d0
// 地址: 0x141ba64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int64_t rsi = *(arg1 + 0x10)
char var_48 = *(arg1 + 0x28)
int128_t var_58 = *(arg1 + 0x18)
int64_t var_40 = 0
int32_t var_38 = 0
sub_140692f90(&var_40, arg1 + 0x30)
void var_30
int128_t* rax_1 = rsi(rax, &var_30, &var_58)
*arg2 = *rax_1
arg2[1].b = rax_1[1].b
*(arg2 + 0x18) = *(rax_1 + 0x18)
void* rcx_5 = rax_1[2].q
arg2[2].q = rcx_5

if (rcx_5 != 0)
    *(rcx_5 + 8) += 1

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
