// 函数: sub_140dc2270
// 地址: 0x140dc2270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140a96170(&var_38)
int64_t* rax = *arg1
char rdx = 0
int64_t var_18 = 0
char var_20 = 0
int32_t var_10 = 0
int64_t rax_1 = var_38
*arg2 = *rax
arg2[1] = rax_1
int64_t* var_30
arg2[2] = var_30

if (var_30 != 0)
    var_30[1].d += 1
    rdx = var_20

int32_t var_28
arg2[3].d = var_28
arg2[4].b = rdx
arg2[5] = 0
arg2[6].d = 0
sub_1407473e0(&arg2[5], &var_18)
sub_140745b20(&var_18)

if (var_30 == 0)
    return arg2

var_30[1].d -= 1

if (var_30[1].d == 1)
    (**var_30)(var_30)
    int32_t rsi_1 = *(var_30 + 0xc)
    *(var_30 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_30 + 8))(var_30, zx.q(rsi_1))

return arg2
