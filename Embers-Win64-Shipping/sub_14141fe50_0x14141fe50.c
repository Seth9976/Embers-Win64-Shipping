// 函数: sub_14141fe50
// 地址: 0x14141fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0
uint64_t rcx = zx.q(*(arg1 + 0x12c))
uint32_t r9_1

if (rcx.d u<= 3)
    r9_1 = 0
else
    r9_1 = (rcx * 5).d << 4

int64_t i_1 = sx.q(*(arg1 + 0x128))

if (i_1 s> 0)
    void* r11_1 = arg1 + 0x30
    void* rcx_1 = *(r11_1 + 0xf0)
    
    if (rcx_1 != 0)
        r11_1 = rcx_1
    
    int64_t i
    
    do
        uint64_t rcx_2 = zx.q(*(rax + r11_1 + 0xc))
        int32_t r8_1 = *(rax + r11_1 + 0x2c)
        rax += 0x50
        r9_1 += (((r8_1 + 0x1f) u>> 5) + ((rcx_2 * 3).d << 2) + *(rax + r11_1 - 8)) << 2
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t r8_7 =
    zx.q((((*(arg1 + 0x294) + 0x1f) u>> 5) + *(arg1 + 0x274) * 0xc + *(arg1 + 0x2b0)) << 2)
    + zx.q((*(arg1 + 0x224) * 3 + ((*(arg1 + 0x244) + 0x1f) u>> 5) + *(arg1 + 0x260)) << 2)
return zx.q(r9_1) + r8_7
    + zx.q((*(arg1 + 0x1254) * 0x1c + ((*(arg1 + 0x1274) + 0x1f) u>> 5) + *(arg1 + 0x1290)) << 2)
    + 0x12a0
