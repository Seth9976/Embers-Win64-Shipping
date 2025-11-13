// 函数: sub_142897f40
// 地址: 0x142897f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rdi = 0
int64_t* rax = sub_142898600(0, 0, arg2)

if (rax == 0)
    return rax

if (sub_1428dd150(rax) != 0)
    int64_t rcx_1 = *rax
    rdi = rax[1]
    *rax = 0
    *arg1 = rcx_1

sub_1428a7140(*rax, rax[3], "crypto\rand\rand_lib.c", 0x1d4)
sub_1428a6780(rax)
return rdi
