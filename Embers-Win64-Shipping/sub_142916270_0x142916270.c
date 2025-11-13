// 函数: sub_142916270
// 地址: 0x142916270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbx = sx.q(arg4)

if (arg3 == 0)
    return zx.q((arg3 + 1).d)

if (arg4 s< 0)
    return 0

int64_t rcx = *arg1

if (rcx != 0)
    sub_1428a6890(rcx, *arg2, "crypto\kdf\scrypt.c", 0x64)

int64_t rax_1

if (rbx.d s<= 0)
    rax_1 = sub_1428a6730(1)
else
    rax_1 = sub_1428a6af0(arg3, rbx, "crypto\kdf\scrypt.c", 0x67)

*arg1 = rax_1

if (rax_1 != 0)
    *arg2 = rbx
    return 1

sub_1428a5670((rax_1 + 0x34).d, (rax_1 + 0x6b).d, (rax_1 + 0x41).d, "crypto\kdf\scrypt.c", 0x6c)
return 0
