// 函数: sub_141475ca0
// 地址: 0x141475ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414415d0(arg1, arg2)
*(arg1 + 0x140) = 0
__builtin_memset(arg1 + 0x148, 0, 0x18)
sub_1407862f0(arg1 + 0x140, arg2[3], u"RWGvListBuffer")
sub_1407862f0(arg1 + 0x148, arg2[3], u"RWGvListHeadBuffer")
sub_1407862f0(arg1 + 0x150, arg2[3], u"RWVplListBuffer")
sub_1407862f0(arg1 + 0x158, arg2[3], u"RWVplListHeadBuffer")
int32_t rax_2 = arg2[1].d u>> 4 & 0x7f
int32_t rbx
void* rdi

switch (rax_2)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        rbx = 3
        rdi = arg1 + 0x138
        sub_1419c75a0(rdi, arg2[3], data_143ed90a0, 0)
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        rbx = 1
        rdi = arg1 + 0x138
    default
        rbx = *(zx.q(rax_2) * 0x14 + 0x143f025f8)
        
        if (rbx s< 3)
            rdi = arg1 + 0x138
        else
            rdi = arg1 + 0x138
            sub_1419c75a0(rdi, arg2[3], data_143ed90a0, 0)

if (rbx s< 3)
    sub_1419c75a0(rdi, arg2[3], data_143ed9150, 0)

return arg1
