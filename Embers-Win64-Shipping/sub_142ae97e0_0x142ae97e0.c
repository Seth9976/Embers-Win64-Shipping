// 函数: sub_142ae97e0
// 地址: 0x142ae97e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg3

if (*arg6 s> 0)
    return 0

if (arg5 s< 0 || (arg4 == 0 && arg5 s> 0) || arg2 s> rsi)
    *arg6 = 1
    return 0

int64_t rax_1 = sx.q(*(arg1 + 0x70))

if (rsi s< 0)
    rsi = 0
else if (rsi s> rax_1)
    rsi = rax_1

int64_t* rbp = *(arg1 + 0x48)
int32_t rbx = 0
(*(*rbp + 0x78))(rbp)
int32_t i = *(rbp + 0xc)
int32_t i_1 = i
int32_t r8_1

for (; i s< rsi.d; i += r8_1 + 1)
    int32_t rax_4 = (*(*rbp + 0x28))(rbp)
    int32_t rdx = rax_4
    r8_1.b = rax_4 u> 0xffff
    int32_t rax_5 = r8_1 + 1 + rbx
    
    if (rax_5 s> arg5)
        rbx = rax_5
        *arg6 = 0xf
    else
        if (rdx u> 0xffff)
            int64_t rax_6 = sx.q(rbx)
            rbx += 1
            *(arg4 + (rax_6 << 1)) = (rdx s>> 0xa).w - 0x2840
            rdx.w &= 0x3ff
            rdx.w |= 0xdc00
        
        int64_t rax_7 = sx.q(rbx)
        i_1 = r8_1 + 1 + i
        rbx += 1
        *(arg4 + (rax_7 << 1)) = rdx.w

int32_t r8
r8.b = 1
sub_142ae95e0(arg1, i_1, r8.b)
sub_142a8c440(arg4, arg5, rbx, arg6)
return zx.q(rbx)
