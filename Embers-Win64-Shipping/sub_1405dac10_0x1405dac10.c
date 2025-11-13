// 函数: sub_1405dac10
// 地址: 0x1405dac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xc)
int64_t r8 = sx.q(arg1[1].d)
int32_t rcx_1 = r9 - r8.d

if (rcx_1 u< 0x4000 && (r8 * 3).d s>= r9 * 2)
    r8 = zx.q(r9)
else if (rcx_1 s> 0x40)
    if (r8.d s> 0)
        uint64_t rax = sub_140a846a0(r8, 0)
        r9 = *(arg1 + 0xc)
        r8 = rax
else if (r8.d != 0)
    r8 = zx.q(r9)

if (r8.d == r9)
    return 

*(arg1 + 0xc) = r8.d
int64_t rcx_3 = *arg1

if (rcx_3 != 0 || r8.d != 0)
    *arg1 = sub_140a84c80(rcx_3, sx.q(r8.d), 0)
