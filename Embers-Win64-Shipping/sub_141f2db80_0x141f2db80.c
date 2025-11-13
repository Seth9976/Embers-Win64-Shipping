// 函数: sub_141f2db80
// 地址: 0x141f2db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
void* r11 = nullptr
arg1[1] = 0
arg1[2].d = 0
*(arg1 + 0x14) = 0
float zmm1[0x4] = data_143f3b4b0
*(arg1 + 0x30) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x40) = __andps_xmmxud_memxud(data_143f3b4b0, data_143f3b4c0)
*(arg1 + 0x74) = 0xffffffff
arg1[0x44] = 0
arg1[0x45].d = 0
*(arg1 + 0x22c) = 3
arg1[0x68] = 0
arg1[0x69].d = 0
*(arg1 + 0x34c) = 2
arg1[0x6a].b &= 0xfe
arg1[0x6a].b = ((arg3 == 1 | arg1[0x6a].b) & 0xf9) | arg4 << 2
void* const rax_8

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_2
        int32_t temp1_1
        temp0_2:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_2)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (arg2 == 0 || ((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    *arg1 = 0
else
    if (*(arg2 + 0x178) s> 0)
        r11 = *(*(arg2 + 0x170) + (sx.q(*(arg2 + 0x178)) << 3) - 8)
    
    arg1[1] = r11
    *(arg1 + 0x20) = *(arg2 + 0x1c0)
    *(arg1 + 0x30) = *(arg2 + 0x1d0)
    *(arg1 + 0x40) = *(arg2 + 0x1e0)
    arg1[0xa] = *(arg2 + 0x11c)
    arg1[0xb].d = *(arg2 + 0x124)
    *(arg1 + 0x5c) = *(arg2 + 0x128)
    *(arg1 + 0x64) = *(arg2 + 0x130)
    arg1[0xd] = *(arg2 + 0x134)
    arg1[0xe].d = *(arg2 + 0x13c)
    
    if (arg3 == 0 && r11 != 0 && (*(r11 + 0x350) & 1) != 0)
        int32_t rax_15 = data_143f3b724
        
        if (rax_15 u< 0x64 || (data_143de5458.b & 0x1f) == 0)
            data_143f3b724 = rax_15 + 1
        
        arg1[0x6a].b |= 1
    
    if ((arg1[0x6a].b & 1) != 0)
        int64_t rsi = sx.q(*(arg2 + 0x178))
        int32_t rax_17 = (rsi + 1).d
        *(arg2 + 0x178) = rax_17
        
        if (rax_17 s> *(arg2 + 0x17c))
            sub_1405a4d70(arg2 + 0x170)
        
        *(*(arg2 + 0x170) + (rsi << 3)) = arg1

return arg1
