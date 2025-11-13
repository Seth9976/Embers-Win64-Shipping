// 函数: sub_140b0e700
// 地址: 0x140b0e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int32_t r8
rax, r8 = sub_140b257f0()
int32_t rdi = rax[1].d
int64_t rbx = *rax
int64_t var_28 = 0
sub_1405a4c70(&var_28, sbb.d(r8, r8, rdi != 0) + 0xc + rdi, 0)
memcpy(var_28, rbx, rdi * 2)
int32_t rdx_4 = sub_140a20ba0(&var_28, u"Automation/", 0xb)
int64_t var_18 = var_28
var_28 = 0
int32_t var_20
var_20.q = 0
int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdi != 0) + 0xb + rdi
int32_t var_1c

if (rdx_7 s> var_1c)
    sub_1405947f0(&var_18, rdx_7)

sub_140a20ba0(&var_18, u"Transient/", 0xa)
*arg1 = var_18
arg1[1].d = rdi
*(arg1 + 0xc) = var_1c
return arg1
