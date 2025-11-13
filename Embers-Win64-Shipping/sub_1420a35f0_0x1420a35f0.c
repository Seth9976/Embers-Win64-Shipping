// 函数: sub_1420a35f0
// 地址: 0x1420a35f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return zx.q(arg2)

int64_t r10 = *(arg1 + 0x70)
int64_t* rcx = r10 + sx.q(arg2) * 0xc

if (arg4 == 0)
    *rcx = arg3.d
    return zx.q(arg2)

int32_t r8_1 = *(arg1 + 0x78)
int32_t rax_2 = r8_1 - arg2
int32_t rbp = rcx[1].d
int64_t var_28 = *rcx

if (rax_2 != 1)
    memmove(rcx, r10 + sx.q(arg2 + 1) * 0xc, (rax_2 - 1) * 0xc)
    r8_1 = *(arg1 + 0x78)

*(arg1 + 0x78) = r8_1 - 1
sub_140775970(arg1 + 0x70)
int64_t rax_8 = sx.q(*(arg1 + 0x78))
int32_t rbx = 0
var_28.d = arg3.d

if (rax_8.d s> 0)
    int64_t rcx_2 = 0
    int32_t* rax_9 = *(arg1 + 0x70)
    
    while (not(arg3.d f<= *rax_9))
        rbx += 1
        rcx_2 += 1
        rax_9 = &rax_9[3]
        
        if (rcx_2 s>= rax_8)
            break

sub_142075310(arg1 + 0x70, rbx, 1)
int64_t rdx_4 = sx.q(rbx) * 3
int64_t rcx_5 = *(arg1 + 0x70)
*(rcx_5 + (rdx_4 << 2)) = 0
*(rcx_5 + (rdx_4 << 2) + 8) = 0
int64_t rcx_6 = *(arg1 + 0x70)
*(rcx_6 + (rdx_4 << 2)) = var_28
*(rcx_6 + (rdx_4 << 2) + 8) = rbp
return zx.q(rbx)
