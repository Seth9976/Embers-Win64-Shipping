// 函数: sub_1411e7c20
// 地址: 0x1411e7c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*arg1)
uint64_t result

if ((r8.d u<= 0x1b && test_bit(0x857c041, r8.d))
        || ((*(r8 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
    if (r8.d u> 0x30)
    label_1411e7c74:
        
        if (*(r8 * 0x14 + 0x143f025f8) == 3)
            goto label_1411e7c88
    else
        switch (r8)
            case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
            label_1411e7c88:
                
                if (test_bit(zx.q(arg1[0xc]), 0x1d))
                    result.b = arg1[3].b u>> 7
                    
                    if ((result.b & 1) != 0 && arg1[4] u<= 1)
                        result.b = 1
                        return result
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                goto label_1411e7c74

result.b = 0
return result
