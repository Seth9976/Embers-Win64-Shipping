// 函数: sub_1421924c0
// 地址: 0x1421924c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*arg4)
void* rdi = *(arg2 + 0x1e8)
uint64_t rbx = 2
*arg4 = (r10 + 0x60).d
*arg5 = arg3 + r10

if (*(arg1 + 0x48) s> 0)
    int64_t rcx = sx.q(*arg4)
    *arg4 = (rcx + 0xc).d
    *arg6 = arg3 + rcx
    *arg4 += ((zx.q(*(arg1 + 0x48) * 3) << 2) + -0xfffffffffffffff4).d
    int32_t rax_5 = *(arg1 + 0x48)
    
    if (rax_5 != 0)
        rbx = zx.q(rax_5 + 1)

if (rdi != 0 && (*(rdi + 0x30) & 1) != 0)
    int64_t rcx_3 = sx.q(*arg4)
    int32_t rbx_1 = *(rdi + 0x34)
    *arg4 = (rcx_3 + 4).d
    *arg7 = arg3 + rcx_3
    int64_t rcx_4 = sx.q(*arg4)
    *arg4 = (rcx_4 + 4).d
    *arg8 = arg3 + rcx_4
    int64_t rcx_5 = sx.q(*arg4)
    *arg4 = (rcx_5 + 0xc).d
    *arg9 = arg3 + rcx_5
    uint32_t r10_1 = (rbx_1 + 1) * 0xc
    int32_t rcx_8 = *arg4 + r10_1
    int32_t rdx_4 = rcx_8 - 0xc
    *arg4 = rdx_4
    
    if ((*(rdi + 0x108) & 1) != 0)
        *arg4 = rcx_8
        *arg10 = sx.q(rdx_4) + arg3
        *arg4 += r10_1 - 0xc
        rdx_4 = *arg4
    
    int32_t rax_15 = *(rdi + 0x150)
    int32_t rcx_11 = 1
    
    if (rax_15 != 0)
        rcx_11 = rax_15
    
    rbx = zx.q((rbx_1 + 2) * rcx_11)
    
    if ((*(rdi + 0x15c) & 1) != 0)
        *arg4 = rdx_4 + 4
        *arg12 = sx.q(rdx_4) + arg3

if (*(arg1 + 0x90) != 0)
    int64_t rcx_14 = sx.q(*arg4)
    *arg4 = (rcx_14 + 4).d
    *arg11 = arg3 + rcx_14
    *arg4 += ((rbx << 2) + -fffffffffffffffc).d

int64_t rax_21 = sx.q(*(arg2 + 0x1f8))

if (rax_21.d != 0xffffffff)
    int32_t rdx_6 = *arg4
    *arg13 = arg3 + rax_21
    *arg4 = rdx_6

int64_t result = sx.q(*(arg2 + 0x208))

if (result.d != 0xffffffff)
    int32_t rdx_7 = *arg4
    int64_t rcx_16 = arg3 + result
    result = arg14
    *result = rcx_16
    *arg4 = rdx_7

return result
