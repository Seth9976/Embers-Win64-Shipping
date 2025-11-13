// 函数: sub_142c60f10
// 地址: 0x142c60f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0x4000

if (arg1 u<= 0x4000)
    if (arg1 == 0x4000)
        return result
    
    result = 0x80
    
    if (arg1 u> 0x80)
        if (arg1 u> 0x800)
            if (((arg1 - 0x1000) & 0xffffefff) == 0)
                return 0x1000
            
            return 0
        
        if (arg1 == 0x800)
            return 0x800
        
        if (arg1 == 0x100)
            return result
        
        if (arg1 == 0x200)
            return 0x200
        
        if (arg1 == 0x400)
            return 0x400
        
        return 0
    
    if (arg1 == 0x80)
        return result
    
    uint64_t rcx = zx.q(arg1 - 1)
    
    if (rcx.d u<= 0x3f)
        switch (rcx)
            case 0, 1
                return 1
            case 3, 7
                return 4
            case 0xf
                return 0x10
            case 0x1f
                return 0x20
            case 0x3f
                return 0x40
    
    return 0

if (arg1 u> 0x200000)
    if (arg1 u> 0x2000000)
        if (((arg1 - 0x4000000) & 0xfbffffff) == 0)
            return 0x4000000
        
        return 0
    
    if (arg1 == 0x2000000)
        return 0x2000000
    
    if (arg1 == 0x400000)
        return 0x400000
    
    if (arg1 == 0x800000)
        return 0x80000
    
    if (arg1 != 0x1000000)
        return 0
    
    return 0x100000

if (arg1 == 0x200000)
    return 0x200000

if (arg1 u> 0x40000)
    if (arg1 == 0x80000)
        return 0x80000
    
    if (arg1 != 0x100000)
        return 0
    
    return 0x100000

if (arg1 == 0x40000)
    return 0x40000

if (arg1 == 0x8000)
    return result

if (((arg1 - 0x10000) & 0xfffeffff) == 0)
    return 0x10000

return 0
