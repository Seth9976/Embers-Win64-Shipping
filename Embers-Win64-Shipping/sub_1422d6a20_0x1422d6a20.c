// 函数: sub_1422d6a20
// 地址: 0x1422d6a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422d6100(arg1, 0)
arg1[5] = 0
arg1[6].d = 0
*(arg1 + 0x34) = 2
arg1[8] = 0
arg1[9].d = 0
*(arg1 + 0x4c) = 2
arg1[0xc] = 0
arg1[0xd].d = 0
*(arg1 + 0x6c) = 2
arg1[0x10] = 0
arg1[0x11].d = 0
*(arg1 + 0x8c) = 2
arg1[0x13] = 0
arg1[0x14].d = 0
*(arg1 + 0xa4) = 2
__builtin_memset(&arg1[0x15], 0, 0x40)
arg1[0x1d].d = arg2
uint32_t rax = sub_140b011d0()
int64_t rcx
int64_t rbx_1

if (rax.b != 0)
    rbx_1 = data_143f554f0
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rax.b == 0 || *(rbx_1 + (rcx << 2)) s<= 0)
    rax = 0
else
    rax.b = 1

*(arg1 + 0xec) = rax.b
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x22] = 0
arg1[0x23].d = 0
*(arg1 + 0x11c) = 2
return arg1
