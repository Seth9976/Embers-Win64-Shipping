// 函数: sub_141a1f6b0
// 地址: 0x141a1f6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t i = 0
int32_t var_24 = 0x10
int32_t var_28 = 0
char var_b8[0x10]
char* rax_2 = sub_1419c5110(arg1, &var_b8, arg1 + 0x140, 0)
int64_t rdi = sx.q(var_28)
int32_t rcx = (rdi + 1).d
int32_t var_28_1 = rcx
int64_t var_a8[0x10]

if (rcx s> var_24)
    sub_14088f7f0(&var_a8)

var_a8[rdi] = *rax_2

if (*(arg1 + 0x170) s> 0)
    do
        char* rax_5 = sub_1419c5110(arg1, &var_b8, ((sx.q(i) + 0x15) << 4) + arg1, i.b + 1)
        int64_t rdi_1 = sx.q(var_28_1)
        int32_t rcx_3 = (rdi_1 + 1).d
        var_28_1 = rcx_3
        
        if (rcx_3 s> var_24)
            sub_14088f7f0(&var_a8)
        
        i += 1
        var_a8[rdi_1] = *rax_5
    while (i s< *(arg1 + 0x170))

int64_t result = sub_1419d0260(arg1, &var_a8, 0)
__security_check_cookie(rax_1 ^ &var_d8)
return result
