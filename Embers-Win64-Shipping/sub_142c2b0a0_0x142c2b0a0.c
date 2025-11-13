// 函数: sub_142c2b0a0
// 地址: 0x142c2b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rdx
int128_t* const r8
int32_t** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2b0da:
    int32_t* rcx_2 = *rax_1
    rdx = &data_14369a5d0
    int32_t* r8_1 = &data_14369a5d0
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    if (r8_1[6] u>= 0xa)
        r8 = *(r8_1 + 0x10)
    else
        r8 = &data_14369a5d0
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2b0da
    
    rdx = &data_14369a5d0
    r8 = &data_14369a5d0
uint16_t r9 = zx.w(*(r8 + 8))
uint64_t r10 = zx.q(*(r8 + 9))

if (0 != r9 * 0x100 + r10.w)
    rdx = &r8[zx.q(r9.b) * 0x10] + r10

return zx.q((zx.d(*rdx) << 8) + zx.d(*(rdx + 1)))
