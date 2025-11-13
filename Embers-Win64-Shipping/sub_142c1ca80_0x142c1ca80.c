// 函数: sub_142c1ca80
// 地址: 0x142c1ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x90)
uint16_t rcx = zx.w(*(arg1 + 2))
int32_t rdi = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14)
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_1

if (0 != rcx * 0x100 + r8_1.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r8_1
else
    rcx_1 = &data_14369a5d0

uint32_t rdx_4 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
uint32_t result

if (rdx_4 == 1)
    result = sub_142c1e900(rcx_1, rdi)
label_142c1cb0e:
    
    if (result != 0xffffffff)
        sub_142c22da0(arg2, zx.d(zx.w(*(arg1 + 4)) * 0x100 + zx.w(*(arg1 + 5)) + rdi.w))
        result.b = 1
    else
        result.b = 0
else
    if (rdx_4 == 2)
        result = sub_142c1e990(rcx_1, rdi)
        goto label_142c1cb0e
    
    result.b = 0

return result
