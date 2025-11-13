// 函数: sub_140bd6490
// 地址: 0x140bd6490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = arg4
sub_140d15db0(arg1, arg2)
arg1[7].d = 0xffffffff
arg1[6] = 0
*arg1 = &data_142e874d0
arg1[8] = arg3
arg1[9] = 0
arg1[0xa] = 0

if (rsi == 0)
    int32_t rax_1
    
    if (arg3 == 0)
        rax_1 = 0
    else
        rax_1 = *(arg3 + 0x58)
    
    rsi = zx.q(rax_1)

uint64_t rax_2 = arg5
arg1[0xb].d = rsi.d

if (rax_2 == 0)
    rax_2 = 1
    int32_t rcx
    
    if (arg3 == 0)
        rcx = 1
    else
        rcx = *(arg3 + 0x5c)
    
    if (rcx s>= 1)
        rax_2 = zx.q(rcx)

*(arg1 + 0x5c) = rax_2.d
__builtin_memset(&arg1[0xc], 0, 0x50)
sub_140ca20f0(&arg1[6])
return arg1
