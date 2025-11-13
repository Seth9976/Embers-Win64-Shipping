// 函数: sub_1419d8660
// 地址: 0x1419d8660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg1)

if (result.d u> 0x30)
label_1419d8689:
    
    if (*(result * 0x14 + 0x143f025f8) s>= 3 || (result.d u<= 0x16 && test_bit(0x42c000, result.d)))
        result.b = 1
        return result
    
    result.b = 0
    return result

switch (result)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        result.b = 1
        return result
    case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 
            0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
        goto label_1419d8689
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        if (result.d u> 0x16 || not(test_bit(0x42c000, result.d)))
            result.b = 0
            return result
        
        result.b = 1
        return result
