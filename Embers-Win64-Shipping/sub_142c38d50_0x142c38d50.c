// 函数: sub_142c38d50
// 地址: 0x142c38d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9_1 = zx.d(*(arg1 + 0x10))
uint32_t r9

if ((1 << (r9_1.b & 0x1f) & 0x1c00) == 0)
    r9 = 0
else
    r9 = r9_1 u>> 8

uint32_t rdx = zx.d(*(arg2 + 0x10))
bool cond:0

if ((1 << (rdx.b & 0x1f) & 0x1c00) == 0)
    cond:0 = r9 != 0
else
    uint32_t rdx_1 = rdx u>> 8
    cond:0 = r9 != rdx_1
    
    if (r9 u< rdx_1)
        return 0xffffffff

int32_t r10
r10.b = cond:0
return zx.q(r10)
