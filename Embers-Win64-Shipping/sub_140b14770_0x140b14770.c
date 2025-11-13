// 函数: sub_140b14770
// 地址: 0x140b14770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b14620(&var_18)
int64_t rdx = *rax
int32_t r10 = rax[1].d
int64_t var_28 = rdx
*rax = 0
int32_t r9 = rax[1].d
int32_t r8 = *(rax + 0xc)
int32_t rdx_3 = sbb.d(rdx.d, rdx.d, r10 != 0) + 0xe + r9
rax[1] = 0

if (rdx_3 s> r8)
    sub_1405947f0(&var_28, rdx_3)

sub_140a20ba0(&var_28, u"FeaturePacks/", 0xd)
int64_t rcx_3 = var_18
*arg1 = var_28
arg1[1].d = r9
*(arg1 + 0xc) = r8

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg1
