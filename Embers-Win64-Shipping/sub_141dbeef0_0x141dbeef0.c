// 函数: sub_141dbeef0
// 地址: 0x141dbeef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140d21830(*(arg1 + 0x28), &var_18, 0, 0)
int64_t rcx_1 = *rax
int32_t r9 = rax[1].d
*rax = 0
int32_t r8 = rax[1].d
int64_t var_28 = rcx_1
int32_t rcx_2 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_3 = sbb.d(0, 0, r9 != 0) + 0xc + r8

if (rdx_3 s> rcx_2)
    sub_1405947f0(&var_28, rdx_3)

sub_140a20ba0(&var_28, u"[TickActor]", 0xb)
int64_t rcx_5 = var_18
*arg2 = var_28
arg2[1].d = r8
*(arg2 + 0xc) = rcx_2

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
