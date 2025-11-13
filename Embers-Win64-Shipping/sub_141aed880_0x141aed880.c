// 函数: sub_141aed880
// 地址: 0x141aed880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_1405bb0c0(arg1, &var_48, arg2)
void var_18
void* rax = sub_140d3c6e0(&var_18)

if (rax == 0)
    void* rax_1 = sub_1405bdd80(&var_48)
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x4c))
        int64_t var_20
        int128_t* rax_3 = rax_2 + var_20
        
        if (rax_2 != neg.q(var_20))
            *rax_3 = *arg3
            rax_3[1] = *(arg3 + 0x10)
            rax_3[2] = *(arg3 + 0x20)
else
    sub_141af2380(arg2, rax, arg3)

void var_10
int64_t result = sub_140d3c6e0(&var_10)

if (result != 0)
    int64_t r9_1 = *arg2
    result = (*(r9_1 + 0x210))(arg2, result, 0, r9_1)

int64_t var_30

if (var_30 == 0)
    return result

return sub_140a74f90(var_30)
