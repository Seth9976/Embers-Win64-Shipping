// 函数: sub_1427ceb60
// 地址: 0x1427ceb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434cd910
__builtin_memset(&arg1[1], 0, 0x28)
arg1[6].d = 0x3f400000
*(arg1 + 0x34) = 0xffffffff
arg1[7] = 0
sub_1427cf740(&arg1[1], 0x40)
__builtin_memset(&arg1[8], 0, 0x38)
arg1[0xf].d = 0x3f400000
*(arg1 + 0x7c) = 0xffffffff
arg1[0x10] = 0
sub_1427cdca0(&arg1[0xa], 0x40)
__builtin_memset(&arg1[0x11], 0, 0x28)
arg1[0x16].d = 0x3f400000
*(arg1 + 0xb4) = 0xffffffff
arg1[0x17] = 0
sub_1427cdca0(&arg1[0x11], 0x40)
__builtin_memset(&arg1[0x18], 0, 0x28)
arg1[0x1d].d = 0x3f400000
*(arg1 + 0xec) = 0xffffffff
arg1[0x1e] = 0
sub_1427cf740(&arg1[0x18], 0x40)
arg1[0x1f] = arg2
arg1[0x20] = arg3
int64_t rax = PxGetFoundation()
int64_t rdx = *rax
sub_1427f5e70(&arg1[0x21], (*(rdx + 0x20))(rax, rdx))
void* rax_2 = arg1[0x1f]
int32_t i = 0

if (*(rax_2 + 0x74) u> 0)
    do
        int64_t rdi_1 = *(*(rax_2 + 0x48) + zx.q(i) * 0x10)
        int64_t arg_10 = rdi_1
        char arg_8
        int64_t* rax_4 = sub_1427cf220(&arg1[0x18], &arg_10, &arg_8)
        
        if (arg_8 == 0 && rax_4 != 0)
            *rax_4 = rdi_1
            rax_4[1].d = 0
        
        rax_4[1].d = i
        i += 1
        rax_2 = arg1[0x1f]
    while (i u< *(rax_2 + 0x74))

return arg1
