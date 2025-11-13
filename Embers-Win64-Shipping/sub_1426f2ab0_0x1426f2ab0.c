// 函数: sub_1426f2ab0
// 地址: 0x1426f2ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*arg1 = &data_14347e478
arg1[5] = &data_14347e880
__builtin_memset(&arg1[0x16], 0, 0x18)
arg1[0x19].b = 0xff
sub_140b58260(arg1 + 0xcc, u"Invalid", 1)
arg1[0x1c].d = 0
sub_142703fe0(arg1 + 0xe4)
arg1[0x1d] = 0
void* rcx_2 = &arg1[0x1f]
arg1[0x1e] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
__builtin_memset(&arg1[0x27], 0, 0x20)
arg1[0x2b].d &= 0xfffffffd
__builtin_memset(&arg1[0x2c], 0, 0x20)
int64_t* rax_1 = sub_14272b250()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    int64_t rdx = *rax_1
    (*(rdx + 0x390))(rax_1, rdx)
    rax_2 = rax_1[0x23]

arg1[0x2b].d ^= (zx.d(*(rax_2 + 0x9a)) ^ arg1[0x2b].d) & 1
return arg1
