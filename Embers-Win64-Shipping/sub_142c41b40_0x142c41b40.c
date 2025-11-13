// 函数: sub_142c41b40
// 地址: 0x142c41b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x60)
int32_t* rdi = *(arg2 + 0x70)

if (result != 0)
    uint64_t rsi_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t rbx_1 = *rdi
        uint32_t r8_1 = zx.d(sub_142c47040(rbx_1))
        uint64_t rbx_2 = zx.q(rbx_1 - 0x179a)
        uint32_t r8_2 = r8_1 u>> 8
        result = r8_1 & 0x7f
        
        if (rbx_2.d u> 0x43)
        label_142c41bc2:
            
            if (result == 7)
                if (r8_2 == 3)
                    result = 0x1c
                else if (r8_2 == 6)
                    result = 0x1a
                else if (r8_2 == 8)
                    result = 0x1b
                else if (r8_2 == 0xb)
                    result = r8_2 + 0x12
        else
            switch (rbx_2)
                case 0
                    result = 0x10
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                        0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
                        0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                        0x2b, 0x38, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42
                    goto label_142c41bc2
                case 0x2c, 0x31, 0x33, 0x34, 0x35, 0x36, 0x37
                    result = 0x15
                case 0x2d, 0x2e, 0x39, 0x43
                    result = 0x16
                case 0x2f, 0x30, 0x32
                    result = 0x14
        
        *(rdi + 0x12) = result.b
        rdi = &rdi[5]
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
