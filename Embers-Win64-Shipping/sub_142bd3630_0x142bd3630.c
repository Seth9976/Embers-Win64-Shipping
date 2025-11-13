// 函数: sub_142bd3630
// 地址: 0x142bd3630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x4968)
*arg1 = arg2
arg1[1] = arg3
arg1[0x911] = *arg2
arg1[0x913] = 0x10
arg1[0x912] = &arg2[1]
arg1[0x915] = 0xa
arg1[0x914] = 0
__builtin_memset(&arg1[0x916], 0, 0x18)
memset(&arg1[0x60c], 0, 0x1828)
*(arg1 + 0x3079) = arg2[0x20].b
*(arg1 + 0x307c) = arg4
arg1[0x60c] = arg2
arg1[0x60d] = &arg1[0x60c]
arg1[0x60e] = &arg1[0x911]
memset(&arg1[0x307], 0, 0x1828)
*(arg1 + 0x1851) = arg2[0x20].b
*(arg1 + 0x1854) = arg4
arg1[0x307] = arg2
arg1[0x308] = &arg1[0x60c]
arg1[0x309] = &arg1[0x911]
memset(&arg1[2], 0, 0x1828)
*(arg1 + 0x29) = arg2[0x20].b
*(arg1 + 0x2c) = arg4
arg1[2] = arg2
arg1[3] = &arg1[0x60c]
arg1[4] = &arg1[0x911]
arg1[0x919].d = *(arg2 + 0x2c)
*(arg1 + 0x48cc) = *(arg2 + 0x34)
arg1[0x91a].d = arg2[7].d
int64_t rcx_3 = *arg10
arg1[0x91c] = arg5
arg1[0x91d] = arg6
arg1[0x91e] = arg7
arg1[0x91f].d = arg8
arg1[0x920] = arg9
*(arg1 + 0x48d4) = rcx_3
*(arg1 + 0x48de) = *(arg2 + 0x101)
int32_t rax_15 = *(arg2 + 0x12c)
int32_t rdx = rax_15
arg1[0x921].d = rax_15
int32_t rcx_4 = arg2[0x26].d
*(arg1 + 0x490c) = rcx_4

if (rax_15 s< 0)
    rdx = neg.d(rdx)

int32_t r8 = rcx_4

if (rcx_4 s< 0)
    r8 = neg.d(r8)

bool cond:0

if (rdx s<= r8)
    rax_15 = rcx_4
    cond:0 = rcx_4 s>= 0
else
    cond:0 = rax_15 s>= 0

if (not(cond:0))
    rax_15 = neg.d(rax_15)

int32_t result = rax_15 * 2
arg1[0x922].d = result
*(arg1 + 0x4914) = 0x199a
*(arg1 + 0x48df) = 1
*(arg1 + 0x48dc) = 0
arg1[0x928].b = 0
return result
