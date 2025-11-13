// 函数: src_process
// 地址: 0x141c2c690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

if (arg1[5] == 0 || arg1[6] == 0)
    return 7

if (arg1[3].d != 0x22b)
    return 0x12

if (arg2 == 0)
    return zx.q((arg2 + 3).d)

int64_t r9 = *arg2

if (r9 != 0)
    int64_t r10_1 = arg2[1]
    
    if (r10_1 != 0)
        uint128_t zmm1 = zx.o(arg2[5])
        int64_t zmm2 = 0x3f70000000000000
        
        if (zmm1.q f< zmm2 || zmm1.q f> 256.0)
            return 6
        
        int32_t r11 = arg2[2].d
        
        if (r11 s< 0)
            arg2[2].d = 0
            r11 = 0
        
        int32_t rcx = *(arg2 + 0x14)
        
        if (rcx s< 0)
            *(arg2 + 0x14) = 0
            rcx = 0
        
        int32_t rax_3 = *(arg1 + 0x14)
        bool cond:0
        
        if (r9 u>= r10_1)
            cond:0 = r10_1 + (sx.q(rax_3 * rcx) << 2) u<= r9
        else
            cond:0 = r9 + (sx.q(rax_3 * r11) << 2) u<= r10_1
        
        if (not(cond:0))
            return 0x10
        
        arg2[3] = 0
        uint128_t zmm0 = zx.o(*arg1)
        
        if (not(zmm0.q f>= zmm2))
            *arg1 = zmm1.q
            zmm0 = zmm1
            zmm1 = zx.o(arg2[5])
        
        zmm0.q = zmm0.q f- zmm1.q
        
        if (__andps_xmmxud_memxud(zmm0, data_142d57d00).q f>= 1.0000000000000001e-15)
            jump(*(arg1 + 0x28))
        
        jump(*(arg1 + 0x30))

return 4
