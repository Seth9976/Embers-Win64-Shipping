// 函数: sub_142b2be40
// 地址: 0x142b2be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x188)
int32_t rdx_1 = *(arg1 + 0x190) - 1

if (*(sx.q(rdx_1) + rcx) s>= 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t arg_8 = rdx_1
uint32_t rdx_2 = zx.d(*(sx.q(rdx_1) + rcx))

if (rdx_2.b s< 0)
    rdx_2 = sub_142a9be90(rcx, 0, &arg_8, rdx_2, 0xfd)

if (rdx_2 s> 0xffff)
    rdx_2 = zx.d((rdx_2 s>> 0xa).w - 0x2840)

if (rdx_2 s>= 0xc0)
    uint64_t r8_2 = zx.q(*((sx.q(rdx_2) s>> 5) + 0x14367be00))
    
    if (r8_2.d != 0 && test_bit(*((r8_2 << 2) + 0x14367c720), rdx_2 & 0x1f))
        int32_t rax_5
        rax_5.b = 1
        return rax_5

return 0
