// 函数: sub_142b465f0
// 地址: 0x142b465f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_1 = sx.q(arg1[1].d)
void* rcx = *arg1
int16_t r8 = *(rcx + 8)
int32_t rax_1

if (r8 s< 0)
    rax_1 = *(rcx + 0xc)
else
    rax_1 = sx.d(r8) s>> 5

int16_t r9

if (rdx_1.d u>= rax_1)
    r9 = -1
else
    void* r8_1 = rcx + 0xa
    
    if ((r8.b & 2) == 0)
        r8_1 = *(rcx + 0x18)
    
    r9 = *(r8_1 + (rdx_1 << 1))

uint32_t r8_3 = zx.d(r9)

if ((r8_3 & 0xfffffc00) == 0xd800 && (rdx_1 + 1).d s< *(arg1 + 0xc))
    return sub_142a486d0(rcx, rdx_1.d) __tailcall

if ((r8_3 & 0xfffff800) == 0xd800)
    r8_3 = -1

return zx.q(r8_3)
