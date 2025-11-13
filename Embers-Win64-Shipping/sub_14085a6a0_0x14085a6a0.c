// 函数: sub_14085a6a0
// 地址: 0x14085a6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xc)
int64_t rdx = sx.q(arg1[1].d)
int32_t r9_1 = r8 - rdx.d

if (r9_1 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
    rdx = zx.q(r8)
else if (r9_1 s> 0x40)
    if (rdx.d s> 0)
        uint64_t rax = sub_140a846a0(rdx, 0x10)
        r8 = *(arg1 + 0xc)
        rdx = rax
else if (rdx.d != 0)
    rdx = zx.q(r8)

if (rdx.d == r8)
    return 

*(arg1 + 0xc) = rdx.d
int64_t rcx_2 = *arg1

if (rcx_2 != 0 || rdx.d != 0)
    *arg1 = sub_140a84c80(rcx_2, sx.q(rdx.d), 0x10)
