// 函数: sub_141888460
// 地址: 0x141888460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rdi = arg1[4]
int32_t rax_3 = *arg1 - arg1[5]

if (rax_3 u<= rdi)
    rdi = rax_3

void var_e8
sub_140b2f110(&var_e8)
sub_140b4ad80(&var_e8, zx.q(modu.dp.d(0:(arg1[5] - arg1[4] + *arg1), *arg1)) + *(arg1 + 8), 
    zx.q(rdi))
int32_t rax_8 = arg1[4]

if (rdi u< rax_8)
    sub_140b4ad80(&var_e8, *(arg1 + 8), zx.q(rax_8 - rdi))

sub_140b39010(&var_e8)
sub_140b3da80(&var_e8, arg2)
sub_140b30ae0(&var_e8)
__security_check_cookie(rax_1 ^ &var_108)
return 0
