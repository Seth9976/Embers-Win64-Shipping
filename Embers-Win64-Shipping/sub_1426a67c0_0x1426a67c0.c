// 函数: sub_1426a67c0
// 地址: 0x1426a67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db7c50(arg1, arg2)
int64_t* rcx = &arg1[0x1d]
*arg1 = &data_1434635a0
__builtin_memset(&arg1[0xb], 0, 0x30)
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x21].d = 0xffffffff
*(arg1 + 0x10c) = 0
arg1[0x23] = 0
arg1[0x24].d = 0
arg1[0x25] = 0
uint8_t rax_2 = (arg1[1].d u>> 4).b
arg1[0x11].d = 0x40a00000
*(arg1 + 0x94) = 0x101
*(arg1 + 0x9b) = 3

if ((rax_2 & 1) != 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"FixedSeed") == 0)
        void arg_8
        int32_t rcx_3 = (*sub_140b21590(&arg_8) s% 0x7fffffff).d
        data_143f72008 = rcx_3
        data_143f7200c = rcx_3

return arg1
