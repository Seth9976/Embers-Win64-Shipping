// 函数: sub_142b04670
// 地址: 0x142b04670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (r11.d s< 0x10000 || (*(arg1 + 0xfd) & 1) != 0)
    int64_t r10_1 = *(arg1 + 0x58)
    int32_t rdx_1 = r11.d & 0xf
    int32_t r10_2 =
        *(r10_1 + (zx.q(zx.d(*(r10_1 + (r11 s>> 0xa << 1))) + (r11.d s>> 4 & 0x3f)) << 2))
    int32_t r8_3
    uint32_t r9
    
    if (arg5 != 1)
        char* rcx_4 = zx.q(((zx.d(r10_2.w) << 4) + rdx_1) * 3) + *(arg1 + 0xe8)
        r9 = (zx.d(*rcx_4) << 8 | zx.d(rcx_4[1])) << 8 | zx.d(rcx_4[2])
        
        if (r9 u> 0xff)
            int32_t r8_4
            r8_4.b = r9 u> 0xffff
            r8_3 = r8_4 + 2
        else
            r8_3 = 1
    else
        r9 = zx.d(*(*(arg1 + 0xe8) + (zx.q((zx.d(r10_2.w) << 4) + rdx_1) << 1)))
        int32_t r8_2
        r8_2.b = r9 u> 0xff
        r8_3 = r8_2 + 1
    
    if (test_bit(r10_2, zx.d(rdx_1.b + 0x10)))
        *arg3 = r9
        return zx.q(r8_3)
    
    if ((arg4 != 0 || (r11 - 0xe000).d u< 0x1900 || (r11 - 0xf0000).d u< 0x20000) && r9 != 0)
        *arg3 = r9
        return zx.q(neg.d(r8_3))

void* rcx_6 = *(arg1 + 0x120)

if (rcx_6 == 0)
    return 0

return sub_142b6cc10(rcx_6, r11.d, arg3, arg4) __tailcall
