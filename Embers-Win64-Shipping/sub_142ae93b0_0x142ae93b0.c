// 函数: sub_142ae93b0
// 地址: 0x142ae93b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = arg6
int64_t rbx = arg3

if (*r13 s> 0)
    return 0

int64_t rbp = sx.q(arg5)

if (rbp.d s< 0 || (arg4 == 0 && rbp.d s> 0) || arg2 s> rbx)
    *r13 = 1
    return 0

arg3.b = 1
sub_142ae91f0(arg1, arg2, arg3.b)
int64_t r10 = sx.q(*(arg1 + 0x70))
int32_t rdi = 0
int64_t r15 = *(arg1 + 0x30)
int64_t rcx = sx.q(*(arg1 + 0x28))
arg6.d = rcx.d

if (r10.d s< 0)
    if (rbx s< 0)
        rbx = 0
    else if (rbx s> 0x7fffffff)
        rbx = 0x7fffffff
else if (rbx s< 0)
    rbx = 0
else if (rbx s> r10)
    rbx = r10

int64_t r11 = sx.q(rbx.d)
int32_t rdx = rcx.d
int64_t r8 = rcx

if (rcx s< r11)
    int64_t rax_3 = rcx * 2
    int16_t* rcx_1 = rax_3 + r15
    int64_t r15_2 = neg.q(r8)
    
    do
        if (r10.d s< 0 && *rcx_1 == 0)
            int64_t rax_6 = sx.q(rdx)
            r10 = zx.q(rdx)
            *(arg1 + 0x70) = rax_6
            *(arg1 + 0x10) = rax_6
            *(arg1 + 0x2c) = rdx
            *(arg1 + 0x1c) = rdx
            break
        
        if (r15_2 + r8 s< rbp)
            *(arg4 - rax_3 - r15 + rcx_1) = *rcx_1
        else if (r10.d s>= 0)
            rdx = rbx.d
            rdi = rbx.d - arg6.d
            break
        
        rdi += 1
        rdx += 1
        r8 += 1
        rcx_1 = &rcx_1[1]
    while (r8 s< r11)

if (rdx s> 0 && (zx.d(*(r15 + (sx.q(rdx - 1) << 1))) & 0xfffffc00) == 0xd800
        && (rdx s< r10.d || r10.d s< 0))
    uint32_t rcx_3 = zx.d(*(r15 + (sx.q(rdx) << 1)))
    
    if ((rcx_3 & 0xfffffc00) == 0xdc00)
        if (rdi s< rbp.d)
            int64_t rax_13 = sx.q(rdi)
            rdi += 1
            *(arg4 + (rax_13 << 1)) = rcx_3.w
        
        rdx += 1

int64_t rax_14 = sx.q(rdx)

if (rax_14 s> *(arg1 + 0x10))
    r8.b = 1
    sub_142ae91f0(arg1, rax_14, r8.b)
else
    *(arg1 + 0x28) = rdx

sub_142a8c440(arg4, rbp.d, rdi, r13)
return zx.q(rdi)
