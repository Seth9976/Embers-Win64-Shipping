// 函数: sub_141cf4950
// 地址: 0x141cf4950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_5 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(arg1)) * 0x30 + *arg2
int64_t rax_6 = rax_5[1]
int64_t rdi_3 = *rax_5 & 0xffffffffffff
int64_t r8_1 = rdi_3 - 1 + rax_6

if (arg3 u>= rdi_3)
    rdi_3 = arg3

if (arg4 u<= r8_1)
    r8_1 = arg4

if (rdi_3 u<= r8_1)
    uint32_t rdi_5 = ((rdi_3 - arg3) u>> arg5).d
    uint32_t r8_3 = ((r8_1 - arg3) u>> arg5).d
    char r8_4 = r8_3.b & 0x3f
    uint64_t r9_1 = zx.q(r8_3 u>> 6)
    uint64_t rsi_2 = zx.q(rdi_5 u>> 6)
    int64_t rax_7 = *(arg6 + (rsi_2 << 3))
    int64_t* rbx_1 = arg6 + (rsi_2 << 3)
    int64_t r10_1 = -1 << (rdi_5.b & 0x3f)
    
    if (rsi_2.d == r9_1.d)
        *rbx_1 = (-1 u>> (0x3f - r8_4) & r10_1) | rax_7
        return rax_7
    
    rax_6 = rax_7 | r10_1
    uint64_t rdi_7 = zx.q((rsi_2 + 1).d)
    *rbx_1 = rax_6
    
    if (rdi_7.d u< r9_1.d)
        rax_6 = -1
        __builtin_memset(arg6 + (rdi_7 << 3), -1, zx.q(r9_1.d - rdi_7.d) << 3)
    
    *(arg6 + (r9_1 << 3)) |= 0xffffffffffffffff u>> (0x3f - r8_4)

return rax_6
