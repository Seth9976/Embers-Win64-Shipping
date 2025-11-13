// 函数: sub_1410378e0
// 地址: 0x1410378e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x5c))

if (result.d != 0)
    int32_t r9_1 = (result - 1).d
    int32_t r10_1 = -1
    int64_t rax = sx.q(r9_1)
    
    if (r9_1 s>= 0)
        int64_t temp0_1
        
        do
            if (*(arg1 + rax + 0x60) != 0)
                r10_1 = r9_1
                break
            
            r9_1 -= 1
            temp0_1 = rax
            rax -= 1
        while (temp0_1 - 1 s>= 0)
    
    result = zx.q(r10_1 + 1)

uint64_t r10_2 = 0
*(arg2 + 0x20) = result.d
int32_t r9_2 = 0x57

if (*(arg1 + 0x5c) u> 0)
    do
        int32_t r8 = *(arg1 + (r10_2 << 2) + 0x68)
        int32_t result_1
        
        if (not(test_bit(r8, 0x18)))
            result_1 = (&data_1439c85fc)[zx.q(*(r10_2 + arg1 + 0x60)) * 0xa]
        else
            result_1 = 0x57
        
        if (result_1 - 0x1b u> 0x46)
        label_141037a10:
            
            if (result_1 == 0x13)
                result = 0x15
            else if (result_1 == 0x27)
                result = 0x29
            else if (result_1 == 0x2c)
                result = 0x2e
            else
                result = 0x38
                
                if (result_1 != 0x35)
                    result = zx.q(result_1)
        else
            int64_t rax_3 = sx.q(result_1 - 0x1b)
            
            if (((r8 u>> 4).b & 1) == 0)
                switch (rax_3)
                    case 0
                        result = 0x1c
                    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                            0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
                            0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                            0x2c, 0x2d, 0x2f, 0x30, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 
                            0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45
                        goto label_141037a10
                    case 0x2b
                        result = 0x47
                    case 0x2e
                        result = 0x4a
                    case 0x31
                        result = 0x4d
                    case 0x3f
                        result = 0x57
                    case 0x46
                        result = 0x62
            else
                switch (rax_3)
                    case 0
                        result = 0x1d
                    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                            0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
                            0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                            0x2c, 0x2d, 0x2f, 0x30, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 
                            0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45
                        goto label_141037a10
                    case 0x2b
                        result = 0x48
                    case 0x2e
                        result = 0x4b
                    case 0x31
                        result = 0x4e
                    case 0x3f
                        result = 0x5b
                    case 0x46
                        result = 0x63
        
        *(arg2 + (r10_2 << 2)) = result.d
        r10_2 = zx.q(r10_2.d + 1)
    while (r10_2.d u< *(arg1 + 0x5c))

if ((*(arg1 + 0x8c) & 0x1000000) == 0)
    result = sx.q(*(arg1 + 0x88))
    r9_2 = (&data_1439c85fc)[result * 0xa]
    
    if (r9_2 == 0x13)
        *arg3 = 0x14
        return result
    
    if (r9_2 == 0x27)
        *arg3 = 0x28
        return result
    
    if (r9_2 == 0x2c)
        *arg3 = 0x2d
        return result
    
    if (r9_2 == 0x35)
        *arg3 = 0x37
        return result

*arg3 = r9_2
return result
