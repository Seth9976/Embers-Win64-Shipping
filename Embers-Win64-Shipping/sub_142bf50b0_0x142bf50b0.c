// 函数: sub_142bf50b0
// 地址: 0x142bf50b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg3 + *(arg1 + 0x64)
int32_t result

if (rdx != 0 && rdx u>= *(arg1 + 0x68))
    result = sub_142bf4fb0(arg1, rdx)
    
    if (result.b == 0)
        return result

int64_t rdx_1 = *(arg1 + 0x70)

if (*(arg1 + 0x78) == rdx_1)
    uint64_t r8 = zx.q(*(arg1 + 0x64))
    
    if (r8.d + arg3 u> *(arg1 + 0x5c) + arg2)
        int64_t rcx_2 = *(arg1 + 0x80)
        *(arg1 + 0x78) = rcx_2
        memcpy(rcx_2, rdx_1, (r8 * 0x14).d)

result.b = 1
return result
