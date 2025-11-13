// 函数: sub_140b12eb0
// 地址: 0x140b12eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int32_t r8
rax, r8 = sub_140b257f0()
int64_t var_18 = 0
int32_t rdi = rax[1].d
int64_t rbx = *rax
sub_1405a4c70(&var_18, sbb.d(r8, r8, rdi != 0) + 6 + rdi, 0)
memcpy(var_18, rbx, rdi * 2)
sub_140a20ba0(&var_18, u"Diff/", 5)
*arg1 = var_18
arg1[1].d = rdi
int32_t var_c
*(arg1 + 0xc) = var_c
return arg1
