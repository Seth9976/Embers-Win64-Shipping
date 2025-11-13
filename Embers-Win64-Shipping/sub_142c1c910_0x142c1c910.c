// 函数: sub_142c1c910
// 地址: 0x142c1c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 0x90)
int128_t* const rbp = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_1

if (0 != rcx * 0x100 + r8_1.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r8_1
else
    rcx_1 = &data_14369a5d0

int32_t rdx_2 = *(*(rsi + 0x70) + zx.q(*(rsi + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_1, rdx_2)
label_142c1c9a2:
    
    if (result != 0xffffffff && result u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
        uint32_t rdx_5 = (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5))
        int32_t rcx_11 = rdx_5 u>> 1 & 0x5b6db6db
        int32_t rdx_7 = rdx_5 - (rcx_11 u>> 1 & 0x5b6db6db) - rcx_11
        void* rdx_9 =
            arg1 + 8 + (zx.q((((rdx_7 u>> 3) + rdx_7) & 0xc71c71c7) u% 0x3f * result) << 1)
        
        if (rdx_9 u>= arg1 + 8)
            rbp = rdx_9
        
        sub_142c1d4c0(arg1 + 4, arg2, arg1, rbp, *(rsi + 0x80) + zx.q(*(rsi + 0x5c)) * 0x14)
        *(rsi + 0x5c) += 1
        result.b = 1
    else
        result.b = 0
else
    if (r8_4 == 2)
        result = sub_142c1e990(rcx_1, rdx_2)
        goto label_142c1c9a2
    
    result.b = 0

return result
