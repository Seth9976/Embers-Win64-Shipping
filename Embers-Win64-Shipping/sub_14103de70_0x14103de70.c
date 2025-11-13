// 函数: sub_14103de70
// 地址: 0x14103de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
memset(&arg1[0x35], 0, 0x400)
arg1[0xb5].d = 0xffffffff
*(arg1 + 0x5ac) = 0
arg1[0xbd] = 0
int64_t i_1 = 0x30
arg1[0xbe] = 0
void* rax = &arg1[0xfb]
arg1[0xf3] = 0
int64_t i

do
    __builtin_memset(rax, 0, 0x40)
    rax += 0x40
    i = i_1
    i_1 -= 1
while (i != 1)
sub_141044cf0(&arg1[0xf5])
arg1[0x404] = -1
arg1[0x405].d = 0xffffffff
memset(&arg1[0x406], 0, 0x600)
arg1[0x4c6] = -1
arg1[0x4c7].d = 0xffffffff
memset(&arg1[0x4c8], 0, 0x600)
int64_t rcx_4 = 6

if (&arg1[0x588] u> &arg1[0x58b])
    rcx_4 = 0

if (&arg1[0x588] u<= &arg1[0x58b])
    __builtin_memset(&arg1[0x588], 0xffffffff, rcx_4 << 2)

arg1[0x58b] = -1
arg1[0x58c].d = 0xffffffff
memset(&arg1[0x58d], 0, 0x300)
return arg1
