// 函数: sub_142afc250
// 地址: 0x142afc250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if (r10.d s<= 0xffff || (*(arg1 + 0xfd) & 1) != 0)
    char r8 = *(arg1 + 0xfc)
    int64_t rdx = *(arg1 + 0x58)
    uint64_t rcx_1 = zx.q(zx.d(*(rdx + (r10 s>> 0xa << 1))) + (r10.d s>> 4 & 0x3f))
    
    if (r8 != 0)
        int32_t rsi_1 = *(rdx + (rcx_1 << 2))
        
        if (r8 != 1)
            return 0xffffffff
        
        int32_t rdx_3 = r10.d & 0xf
        uint32_t r9 = zx.d(*(*(arg1 + 0xe8) + (zx.q((zx.d(rsi_1.w) << 4) + rdx_3) << 1)))
        int32_t r8_2
        r8_2.b = r9 u> 0xff
        
        if (test_bit(rsi_1, zx.d(rdx_3.b + 0x10)))
            *arg3 = r9
            return zx.q(r8_2 + 1)
        
        if ((arg4 != 0 || (r10 - 0xe000).d u< 0x1900 || (r10 - 0xf0000).d u< 0x20000) && r9 != 0)
            *arg3 = r9
            return zx.q(r8_2 + 1)
    else
        uint32_t rdx_1 =
            zx.d(*(*(arg1 + 0xe8) + (zx.q(zx.d(*(rdx + (rcx_1 << 1))) + (r10.d & 0xf)) << 1)))
        bool cond:1_1
        
        if (arg4 == 0)
            cond:1_1 = rdx_1 u>= 0xc00
        else
            cond:1_1 = rdx_1 u>= 0x800
        
        int32_t r8_1
        r8_1.b = cond:1_1
        
        if (r8_1 != 0)
            *arg3 = zx.d(rdx_1.b)
            return 1

void* rcx_8 = *(arg1 + 0x120)

if (rcx_8 == 0)
    return 0

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142b6cc10(rcx_8, r10.d, arg3, arg4))
return zx.q((temp1 ^ temp0) - temp0)
