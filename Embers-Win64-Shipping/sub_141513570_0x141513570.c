// 函数: sub_141513570
// 地址: 0x141513570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*arg1)
uint64_t result

if (sub_1405fba70(rbx.d, 3).b == 0)
    if (rbx.d u> 0x30)
    label_1415135b0:
        
        if (*(rbx * 0x14 + 0x143f025f8) != 1)
            result.b = 0
            return result
    else
        switch (rbx)
            case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
                result.b = 0
                return result
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                goto label_1415135b0

result.b = 1
return result
