// 函数: sub_142bdedc0
// 地址: 0x142bdedc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[0x36]

if (not(test_bit(r8, 8)))
    *arg1 = 6
    arg1[4] = 0x20
    arg1[5] = 2
else
    *arg1 = 0xc
    arg1[4] = 0x100
    arg1[5] = 0x1e

int32_t rdx = 1 << (*arg1).b
arg1[1] = rdx
arg1[2] = rdx s>> 1
arg1[3] = rdx s>> 6

if ((r8.b & 8) == 0)
    if ((r8.b & 0x10) == 0)
        arg1[0x42].b = 0
    else
        arg1[0x42].b = 4
    
    if ((r8.b & 0x20) == 0)
        arg1[0x42].b += 1
else
    arg1[0x42].b = 2

*(arg1 + 0xe8) = sub_142bdf3c0
arg1[0x115] = 0
*(arg1 + 0xf0) = sub_142bdf3f0
*(arg1 + 0xf8) = sub_142bdf210
*(arg1 + 0x100) = sub_142bdf4e0
*(arg1 + 0x109) = not.b((r8 u>> 9).b) & 1
arg1[0x105].w = 0
*(arg1 + 0x416) = arg1[0x24].w - 1
int64_t rcx_1 = *(arg1 + 0xa0)
int32_t rdx_2 = arg1[0x26]
arg1[0x12].w = arg1[0x25].w
*(arg1 + 0x50) = rcx_1

if (rdx_2 s> 0)
    *(arg1 + 0x50) = sx.q((arg1[0x24] - 1) * rdx_2) + rcx_1

int32_t result = sub_142bdef80(arg1, 0)

if (result == 0)
    if (*(arg1 + 0x109) != 0 && arg1[0x42].b != 2)
        arg1[0x115] = 0
        *(arg1 + 0xe8) = sub_140594850
        *(arg1 + 0xf0) = sub_142bde840
        *(arg1 + 0xf8) = sub_142bde690
        *(arg1 + 0x100) = sub_140594850
        arg1[0x105].w = 0
        *(arg1 + 0x416) = arg1[0x25].w - 1
        result = sub_142bdef80(arg1, 1)
    
    if (*(arg1 + 0x109) == 0 || arg1[0x42].b == 2 || result == 0)
        return 0

return result
