// 函数: sub_142c20d70
// 地址: 0x142c20d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (rdx_1 != 7)
    uint32_t rax
    rax.b = rdx_1 == 8
    return rax

int128_t* const r10 = &data_14369a5d0
void* rax_2 = &data_14369a5d0

if (zx.d(arg1[4]) << 8 != neg.d(zx.d(arg1[5])))
    rax_2 = &arg1[6]

uint16_t rdx_5 = zx.w(*rax_2)
uint32_t r8 = 0
uint64_t r11 = zx.q(*(rax_2 + 1))
void* rdx_6

if (0 != rdx_5 * 0x100 + r11.w)
    rdx_6 = &arg1[(zx.q(rdx_5.b) << 8) + r11]
else
    rdx_6 = &data_14369a5d0

if ((zx.d(*rdx_6) << 8) + zx.d(*(rdx_6 + 1)) == 1)
    r8 = (zx.d(*(rdx_6 + 2)) << 8) + zx.d(*(rdx_6 + 3))
    
    if (r8 == 7)
        uint32_t rcx_8 =
            (zx.d(*(rdx_6 + 5)) << 0x10) + (zx.d(*(rdx_6 + 6)) << 8) + (zx.d(*(rdx_6 + 4)) << 0x18)
        uint32_t rax_8 = zx.d(*(rdx_6 + 7))
        
        if (rcx_8 != neg.d(rax_8))
            r10 = zx.q(rcx_8 + rax_8) + rdx_6
        
        return sub_142c20d00(r10) __tailcall

uint32_t rax_3
rax_3.b = r8 == 8
return rax_3
