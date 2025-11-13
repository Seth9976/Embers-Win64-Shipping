// 函数: sub_141c2da10
// 地址: 0x141c2da10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2
__builtin_memset(&arg1[4], 0, 0x20)
*(arg1 + 0x38) = 0
arg1[0x10] = 0
arg1[0xc] = arg2
arg1[1] = arg4
uint32_t r9 = arg4 u>> 2
*arg1 = arg5
arg1[0xd] = arg3.d
arg1[2] = r9

if (modu.dp.d(0:r10, r9) != 0)
    do
        r10 += 1
    while (modu.dp.d(0:r10, r9) != 0)
    
    arg1[0xc] = r10

if (arg3.d s> 0x1fffffff)
    arg1[0xd] = 0x1fffffff
    arg3 = 0x1fffffff

if (r10 s> 0x1fffffff)
    arg1[0xc] = 0x1fffffff
    r10 = 0x1fffffff

if (arg3.d s> r10)
    arg1[0xc] = arg3.d

int64_t rax_5 = sub_140a82f30(sx.q((arg3 << 2).d), zx.q(arg5))
uint64_t rdx_3 = zx.q(*arg1)
*(arg1 + 0x18) = rax_5
*(arg1 + 0x10) = sub_140a82f30(sx.q(arg1[0xc] << 2), rdx_3)
uint64_t rax_9 = zx.q(arg1[0xd])

if (rax_9.d s> 0)
    memset(*(arg1 + 0x18), 0, sx.q((rax_9 << 2).d))

uint64_t rax_11 = zx.q(arg1[0xc])

if (rax_11.d s> 0)
    memset(*(arg1 + 0x10), 0, sx.q((rax_11 << 2).d))

int64_t rax_13 = *(arg1 + 0x10)
*(arg1 + 0x28) = rax_13
*(arg1 + 0x20) = rax_13
return arg1
