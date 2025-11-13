// 函数: sub_142c0fc10
// 地址: 0x142c0fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int128_t* const rbx = &data_14369a5d0
int32_t i = 1

if ((zx.d(rax:1.b) << 0x10) + (zx.d(rax:2.b) << 8) + (zx.d(rax.b) << 0x18) + zx.d(rax:3.b) u> 1)
    do
        int128_t* const r8_4
        
        if (i u< (zx.d(*(arg1 + 1)) << 0x10) + (zx.d(*(arg1 + 2)) << 8) + (zx.d(rax.b) << 0x18)
                + zx.d(*(arg1 + 3)))
            uint64_t i_1 = zx.q(i)
            r8_4 = arg1 + ((i_1 + ((i_1 + 1) << 1)) << 1)
        else
            r8_4 = &data_14369a5d0
        
        if (arg2 u< (zx.d(*(r8_4 + 1)) << 0x10) + (zx.d(*(r8_4 + 2)) << 8) + (zx.d(*r8_4) << 0x18)
                + zx.d(*(r8_4 + 3)))
            break
        
        i += 1
    while (i u< (zx.d((rax u>> 0x10).b) << 8) + zx.d(rax:3.b) + (zx.d(rax.b) << 0x18)
        + (zx.d(rax:1.b) << 0x10))

uint64_t r10 = zx.q(i - 1)

if (r10.d u< (zx.d(*(arg1 + 1)) << 0x10) + (zx.d(*(arg1 + 2)) << 8) + (zx.d(*arg1) << 0x18)
        + zx.d(*(arg1 + 3)))
    rbx = arg1 + ((r10 + ((r10 + 1) << 1)) << 1)

return zx.q((zx.d(*(rbx + 4)) << 8) + zx.d(*(rbx + 5)))
