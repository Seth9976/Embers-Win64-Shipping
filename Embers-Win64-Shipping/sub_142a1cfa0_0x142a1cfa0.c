// 函数: sub_142a1cfa0
// 地址: 0x142a1cfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0xfffffffe

int64_t r10 = sx.q(arg7)
int32_t r9 = r10.d
int64_t r15 = sx.q(arg6)

if (r10.d == 0)
    r9 = 1

int32_t rcx_1 = (arg2 + 7) & 0xfffffff8
int32_t r8_1 = (arg3 + 7) & 0xfffffff8
int32_t rax = (r15 * 2).d
int32_t r11_2 = (rax + 0x1f + rcx_1) & 0xffffffe0
int64_t r10_3 = sx.q(rax + r8_1) * sx.q(r11_2) + r10
int32_t r8_2 = arg5
int32_t rax_6 = r8_1 s>> r8_2.b
char rcx_4 = arg4.b
int32_t rbp_1 = r11_2 s>> rcx_4
uint64_t rsi_1 = zx.q(r15.d s>> r8_2.b)
int64_t rcx_8 = sx.q(rax_6 + (rsi_1 << 1).d) * sx.q(rbp_1) + r10
int64_t rdi_2 = r10_3 + (rcx_8 << 1)

if (arg9 != 0)
    if (arg9(arg10, rdi_2 + 0x1f, arg8) s< 0)
        return 0xffffffff
    
    int64_t rax_11 = *arg8
    
    if (rax_11 == 0 || arg8[1] u< rdi_2 + 0x1f)
        return 0xffffffff
    
    rsi_1 = zx.q(rsi_1.d)
    *(arg1 + 0x58) = (rax_11 + 0x1f) & 0xffffffffffffffe0
    r8_2 = arg5
else if (rdi_2 u> sx.q(arg1[0x18]))
    sub_1429dde60(*(arg1 + 0x58))
    *(arg1 + 0x58) = 0
    void* rax_15 = sub_1429ddec0(0x20, rdi_2)
    *(arg1 + 0x58) = rax_15
    
    if (rax_15 == 0)
        return 0xffffffff
    
    arg1[0x18] = rdi_2.d
    memset(rax_15, 0, sx.q(rdi_2.d))
    r8_2 = arg5

if ((r15.b & 0x1f) != 0)
    return 0xfffffffd

*arg1 = rcx_1
arg1[1] = r8_1
arg1[7] = (arg4 + arg2) s>> arg4.b
arg1[8] = (arg3 + r8_2) s>> r8_2.b
arg1[5] = rcx_1 s>> arg4.b
arg1[6] = rax_6
int64_t rdx_3 = sx.q(r9 - 1)
int64_t r9_2 = sx.q(neg.d(r9))
arg1[4] = r11_2
arg1[2] = arg2
arg1[3] = arg3
arg1[9] = rbp_1
arg1[0x19] = r15.d
arg1[0x1a] = rdi_2.d
arg1[0x1b] = arg4
int64_t rcx_18 = (sx.q(r11_2 * r15.d) + rdx_3 + r15 + *(arg1 + 0x58)) & r9_2
arg1[0x1c] = r8_2
*(arg1 + 0x38) = rcx_18
arg1[0x22] = 0
int64_t rdx_6 = rdx_3 + sx.q(rsi_1.d * rbp_1) + sx.q(r15.d s>> rcx_4) + *(arg1 + 0x58)
*(arg1 + 0x40) = (rdx_6 + r10_3) & r9_2
*(arg1 + 0x48) = (rcx_8 + rdx_6 + r10_3) & r9_2
return 0
