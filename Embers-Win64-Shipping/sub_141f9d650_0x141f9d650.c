// 函数: sub_141f9d650
// 地址: 0x141f9d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg1)

if (result.d u> 0x30)
label_141f9d679:
    
    if (*(result * 0x14 + 0x143f025f8) s>= 3)
        goto label_141f9d687
else
    switch (result)
        case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        label_141f9d687:
            
            if (((result - 2).d & 0xfffffffd) != 0
                    && ((*(result * 0x14 + &data_143f025fc) u>> 3).b & 1) == 0)
                result.b = 1
                return result
        case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
            goto label_141f9d679

result.b = 0
return result
