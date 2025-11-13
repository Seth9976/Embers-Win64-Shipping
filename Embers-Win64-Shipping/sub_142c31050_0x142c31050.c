// 函数: sub_142c31050
// 地址: 0x142c31050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg4 + 0x50)
void* rax_5 = sub_142c31d20(
    zx.q(*(arg1 + 0x13)) + ((zx.q(*(arg1 + 0x12))
        + (((zx.q(*(arg1 + 0x10)) << 8) + zx.q(*(arg1 + 0x11))) << 8)) << 8) + arg1, 
    arg2, rdi)
int32_t rsi = 0
uint16_t rcx_4

if (rax_5 == 0)
    rcx_4 = 0
else
    rcx_4 = (zx.d(*rax_5) << 8).w + zx.w(*(rax_5 + 1))

void* rax_12 = sub_142c31d20(
    zx.q(*(arg1 + 0x17)) + ((zx.q(*(arg1 + 0x16))
        + (((zx.q(*(arg1 + 0x14)) << 8) + zx.q(*(arg1 + 0x15))) << 8)) << 8) + arg1, 
    arg3, rdi)
uint16_t rcx_8

if (rax_12 == 0)
    rcx_8 = 0
else
    rcx_8 = zx.w(*(rax_12 + 1)) + (zx.d(*rax_12) << 8).w

int128_t* const rdi_1 = &data_14369a5d0
void* rdx_6 = zx.q(*(arg1 + 0x1b))
    + ((zx.q(*(arg1 + 0x1a)) + (((zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19))) << 8)) << 8)
    + arg1
void* rax_21 = rdx_6 + (zx.q(zx.d(rcx_8) + zx.d(rcx_4)) << 1)

if (rax_21 u>= rdx_6)
    rdi_1 = rax_21

if (sub_142bf7510(arg4 + 0x20, rdi_1, 2) == 0)
    return 0

uint32_t r8_7 = (zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8)
    + (zx.d(*(arg1 + 8)) << 0x18) + zx.d(*(arg1 + 0xb))
int32_t rax_30 = sx.d(zx.w(*(rdi_1 + 1)) + zx.w(*rdi_1) * 0x100)

if (r8_7 == 0)
    rsi = rax_30
else
    void* rdi_3 = zx.q(rax_30) + arg1
    
    if (r8_7 u< 0x7fffffff && sub_142bf7510(arg4 + 0x20, rdi_3, r8_7 * 2) != 0)
        rsi = sx.d(zx.w(*rdi_3) * 0x100 + zx.w(*(rdi_3 + 1)))

return zx.q(rsi)
