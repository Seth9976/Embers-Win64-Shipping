// 函数: sub_14294f390
// 地址: 0x14294f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t var_30 = arg2
int32_t var_34 = 4
int32_t var_38 = arg3
int32_t rdi = 1
int32_t rax = sub_1428c3770(&var_38, nullptr)
int32_t rax_1 = sub_142897860(arg6)

if (rax s> rax_1 - 0xb)
    sub_1428a5670(4, 0x76, 0x70, "crypto\rsa\rsa_saos.c", 0x22)
    return 0

int64_t rax_5 = sub_1428a6730(zx.q(rax_1 + 1))

if (rax_5 == 0)
    sub_1428a5670((rax_5 + 4).d, (rax_5 + 0x76).d, (rax_5 + 0x41).d, "crypto\rsa\rsa_saos.c", 0x27)
    return 0

int64_t arg_10 = rax_5
sub_1428c3770(&var_38, &arg_10)
int32_t rax_7 = sub_142897580(zx.q(rax), rax_5, arg4, arg6, 1)

if (rax_7 s> 0)
    *arg5 = rax_7
else
    rdi = 0

sub_1428a6890(rax_5, zx.q(rax_1 + 1), "crypto\rsa\rsa_saos.c", 0x32)
return zx.q(rdi)
