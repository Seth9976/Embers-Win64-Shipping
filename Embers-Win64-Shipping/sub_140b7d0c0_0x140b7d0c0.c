// 函数: sub_140b7d0c0
// 地址: 0x140b7d0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b1a780(&var_18, arg1 + 0x18)
int32_t r8 = rax[1].d
*arg2 = 0
*arg2 = *rax
*rax = 0
arg2[1].d = rax[1].d
*(arg2 + 0xc) = *(rax + 0xc)
rax[1] = 0
int32_t rdx_3 = sbb.d(0, 0, r8 != 0) + 9 + arg2[1].d

if (rdx_3 s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rdx_3)

sub_140a2cf70(arg2, u"Content", 7)
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg2
