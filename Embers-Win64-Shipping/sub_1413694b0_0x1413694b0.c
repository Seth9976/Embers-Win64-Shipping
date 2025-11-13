// 函数: sub_1413694b0
// 地址: 0x1413694b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg1[1] & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

if (rax_1 == 1)
    char rax_4 = sub_14128e090(*arg1)
    
    if (rax_4 == 0)
        return rax_4

int64_t rax_5 = sx.q(*arg1)

if (rax_5.d u<= 0x30)
    switch (rax_5)
        case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
            int64_t rax_6
            rax_6.b = false
            return 0
        case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
            int64_t rax_7
            rax_7.b = true
            return 1

int32_t rax_9
rax_9.b = *(rax_5 * 0x14 + 0x143f025f8) s<= 1
return rax_9
