// 函数: sub_142ab4740
// 地址: 0x142ab4740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*(arg1 + 0x40) != 0)
    sub_142ab3600(arg1, (rdi + 1).d)
    int64_t rax = *(arg1 + 0x30)
    *(rdi + rax) = arg3
    return rax

if (rdi.d s< 0x10)
    char rcx_1 = (rdi << 2).b
    int64_t rax_6 = sx.q(sx.d(arg3) << rcx_1)
    *(arg1 + 0x30) = (sx.q(not.d(0xf << rcx_1)) & *(arg1 + 0x30)) | rax_6
    return rax_6

sub_142ab4e10(arg1)
sub_142ab3600(arg1, (rdi + 1).d)
int64_t rax_1 = *(arg1 + 0x30)
*(rdi + rax_1) = arg3
return rax_1
