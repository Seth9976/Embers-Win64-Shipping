// 函数: sub_1429342f0
// 地址: 0x1429342f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 0

char r9 = *arg1

if (r9 s>= 0)
    *arg3 = zx.d(r9) & 0x7f
    return 1

if ((r9 & 0xe0) == 0xc0)
    if (arg2 s< 2)
        return 0xffffffff
    
    char rdx = arg1[1]
    
    if ((rdx & 0xc0) == 0x80)
        int32_t r8_5 = (zx.d(r9) & 0x1f) << 6 | (zx.d(rdx) & 0x3f)
        
        if (r8_5 u< 0x80)
            return 0xfffffffc
        
        *arg3 = r8_5
        return 2
else if ((r9 & 0xf0) == 0xe0)
    if (arg2 s< 3)
        return 0xffffffff
    
    char rdx_1 = arg1[1]
    
    if ((rdx_1 & 0xc0) == 0x80)
        char r10_1 = arg1[2]
        
        if ((r10_1 & 0xc0) == 0x80)
            int32_t r8_11 =
                ((zx.d(r9) & 0xf) << 6 | (zx.d(rdx_1) & 0x3f)) << 6 | (zx.d(r10_1) & 0x3f)
            
            if (r8_11 u< 0x800)
                return 0xfffffffc
            
            *arg3 = r8_11
            return 3
else if ((r9 & 0xf8) == 0xf0)
    if (arg2 s< 4)
        return 0xffffffff
    
    char rdx_2 = arg1[1]
    
    if ((rdx_2 & 0xc0) == 0x80)
        char r10_2 = arg1[2]
        
        if ((r10_2 & 0xc0) == 0x80 && (arg1[3] & 0xc0) == 0x80)
            int32_t r8_18 = ((zx.d(rdx_2) & 0x3f) << 6 | (zx.d(r10_2) & 0x3f)) << 6
                | (zx.d(arg1[3]) & 0x3f) | (zx.d(r9) & 7) << 0x12
            
            if (r8_18 u< 0x10000)
                return 0xfffffffc
            
            *arg3 = r8_18
            return 4
else if ((r9 & 0xfc) != 0xf8)
    if ((r9 & 0xfe) != 0xfc)
        return 0xfffffffe
    
    if (arg2 s< 6)
        return 0xffffffff
    
    char r10_4 = arg1[1]
    
    if ((r10_4 & 0xc0) == 0x80)
        char r11_1 = arg1[2]
        
        if ((r11_1 & 0xc0) == 0x80 && (arg1[3] & 0xc0) == 0x80 && (arg1[4] & 0xc0) == 0x80
                && (arg1[5] & 0xc0) == 0x80)
            int32_t r8_37 = (
                (((zx.d(r9) & 1) << 6 | (zx.d(r10_4) & 0x3f)) << 6 | (zx.d(r11_1) & 0x3f)) << 6
                | (zx.d(arg1[3]) & 0x3f)) << 0xc | (zx.d(arg1[4]) & 0x3f) << 6 | (zx.d(arg1[5]) & 0x3f)
            
            if (r8_37 u< 0x4000000)
                return 0xfffffffc
            
            *arg3 = r8_37
            return 6
else
    if (arg2 s< 5)
        return 0xffffffff
    
    char rdx_3 = arg1[1]
    
    if ((rdx_3 & 0xc0) == 0x80)
        char r10_3 = arg1[2]
        
        if ((r10_3 & 0xc0) == 0x80 && (arg1[3] & 0xc0) == 0x80 && (arg1[4] & 0xc0) == 0x80)
            int32_t r8_27 =
                (((zx.d(r9) & 3) << 6 | (zx.d(rdx_3) & 0x3f)) << 6 | (zx.d(r10_3) & 0x3f)) << 0xc
                | (zx.d(arg1[3]) & 0x3f) << 6 | (zx.d(arg1[4]) & 0x3f)
            
            if (r8_27 u< 0x200000)
                return 0xfffffffc
            
            *arg3 = r8_27
            return 5

return 0xfffffffd
