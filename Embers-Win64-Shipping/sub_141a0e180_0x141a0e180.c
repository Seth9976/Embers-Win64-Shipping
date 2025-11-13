// 函数: sub_141a0e180
// 地址: 0x141a0e180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
int64_t result

if (arg4 != 0)
    int128_t* rbx_1 = arg5
    *(rbx_1 + 0x78) = *(arg1 + 0x5a8)
    rbx_1[8].q = (*(*arg4 + 0x280))(arg4)
    uint32_t rax_3 = zx.d(*(arg1 + 0x35))
    *(rbx_1 + 0x9c) &= 0xfc4f0042
    *(rbx_1 + 0x9a) = r15.b
    *(rbx_1 + 0x9c) |= (zx.d(arg3) & 7) << 0x17 | (rax_3 & 1) | 0x400000
    rbx_1[7].d = 0
    
    if (*(rbx_1 + 0x74) != 1)
        sub_141a14950(rbx_1, 1)
    
    int64_t rsi_1 = sx.q(arg6[1].d)
    int32_t rax_5 = (rsi_1 + 1).d
    arg6[1].d = rax_5
    
    if (rax_5 s> *(arg6 + 0xc))
        sub_1405c4e40(arg6)
    
    int64_t rcx_9 = rsi_1 << 5
    int64_t* rcx_10 = rcx_9 + *arg6
    
    if (rcx_9 == neg.q(*arg6))
        rcx_10 = nullptr
    else
        *rcx_10 = 0
    
    int32_t var_4c
    int32_t var_4c_1 = var_4c & 0xf8000000
    int32_t var_24
    int32_t var_24_1 = var_24 & 0xfffff800
    rcx_10[1] = arg1 + 0x628
    rcx_10[2] = arg1
    rcx_10[3].d = r15.d
    void* r9 = *(arg1 + 0x598)
    int64_t rax_7 = *(arg1 + 0x140)
    int64_t rdi_2 = sx.q(rbx_1[7].d)
    int64_t var_80_1 = 0
    int64_t var_70_1 = 0
    int64_t rcx_11 = *(*(r9 + 0x40) + (r15 << 3))
    int32_t rax_9 = *(arg1 + 0x49c)
    int64_t rcx_13 = *(r9 + 0x48)
    int32_t rdx_3 = (*(arg1 + 0x4a4) s>> r15.b) - 1
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x14)
    int64_t rdx_4 = r15 * 5
    int32_t var_2c_1 = zx.o(0).d
    int64_t var_40_1 = 1
    int32_t var_30_1 = 0xffffffff
    int32_t var_44_1 = rax_9 * rax_9 * rdx_3 * rdx_3 * 2
    int32_t rax_14 = *(rcx_13 + (rdx_4 << 3) + 0x20)
    int32_t var_34_1 = *(rcx_13 + (rdx_4 << 3) + 0x24)
    int32_t rax_16 = (rdi_2 + 1).d
    rbx_1[7].d = rax_16
    
    if (rax_16 s> *(rbx_1 + 0x74))
        sub_14083a750(rbx_1, rdi_2.d)
    
    int128_t* rax_17 = *(rbx_1 + 0x68)
    
    if (rax_17 != 0)
        rbx_1 = rax_17
    
    int64_t rcx_15 = rdi_2 * 0x68
    result.b = 1
    *(rbx_1 + rcx_15) = rax_7.o
    *(rbx_1 + rcx_15 + 0x10) = rcx_11.o
    *(rbx_1 + rcx_15 + 0x20) = rcx_10.o
    int64_t var_58
    *(rbx_1 + rcx_15 + 0x30) = var_58.o
    *(rbx_1 + rcx_15 + 0x40) = 0.o
    *(rbx_1 + rcx_15 + 0x50) = rax_14.o
    *(rbx_1 + rcx_15 + 0x60) = 0x3f800000.q
else
    result.b = 0

return result
