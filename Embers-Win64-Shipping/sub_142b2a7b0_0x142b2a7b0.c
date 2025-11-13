// 函数: sub_142b2a7b0
// 地址: 0x142b2a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x198) != 3)
    return 0

int64_t r9 = sx.q(*(arg1 + 0x190))
int16_t rcx = *(arg1 + 0x1b8)
int32_t rax_2

if (rcx s< 0)
    rax_2 = *(arg1 + 0x1bc)
else
    rax_2 = sx.d(rcx) s>> 5

int16_t r8

if (r9.d u>= rax_2)
    r8 = -1
else
    void* rcx_1 = arg1 + 0x1ba
    
    if ((rcx.b & 2) == 0)
        rcx_1 = *(arg1 + 0x1c8)
    
    r8 = *(rcx_1 + (r9 << 1))

if ((zx.d(r8) & 0xfffffc00) == 0xdc00)
    *(arg1 + 0x190) = (r9 + 1).d

return zx.q(r8)
