// 函数: sub_1428e8c80
// 地址: 0x1428e8c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 0)
    return zx.q((arg2 + 1).d)

char* rdi = nullptr
int64_t* rax_2 = sub_1428e49a0(arg2, nullptr)
char* rax_3

if (rax_2 != 0)
    rax_3 = sub_1428e98e0(rax_2)
    rdi = rax_3

if (rax_2 == 0 || rax_3 == 0)
    sub_1428a5670(0x22, 0x78, 0x41, "crypto\x509v3\v3_utl.c", 0xa4)

sub_1428901a0(rax_2)

if (rdi == 0)
    return 0

int32_t rax_5 = sub_1428e8b00(arg1, rdi, arg3)
sub_1428a6780(rdi)
return zx.q(rax_5)
