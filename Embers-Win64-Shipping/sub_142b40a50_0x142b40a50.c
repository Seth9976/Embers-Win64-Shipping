// 函数: sub_142b40a50
// 地址: 0x142b40a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x84)
int32_t r8_1

if (rdx == 0)
    r8_1 = *(arg1 + 0x80)

uint64_t result
int32_t r8_2

if (rdx != 0 || r8_1 s<= 0)
    int32_t rcx
    
    if (*arg1 == 0)
        rcx = 0x28
    else
        rcx = *(arg1 + 0x10)
    
    int32_t r8_3 = *(arg1 + 0x80)
    
    if (rdx + 1 + r8_3 s>= rcx)
        result = sub_142b404c0(arg1, rdx, 1, arg2)
        r8_2 = result.d
    else
        result = zx.q(rdx + 1)
        *(arg1 + 0x84) = result.d
        r8_2 = r8_3 - 1 + result.d
else
    r8_2 = r8_1 - 1
    result = zx.q(rdx + 1)
    *(arg1 + 0x80) = r8_2
    *(arg1 + 0x84) = result.d

if (*arg2 s<= 0)
    void* rcx_2
    
    if (*arg1 == 0)
        rcx_2 = &arg1[8]
    else
        rcx_2 = *(arg1 + 8)
    
    int64_t rdx_1 = sx.q(r8_2)
    *(rcx_2 + (rdx_1 << 1)) = 0
    
    if (*arg1 == 0)
        result = &arg1[0x58]
    else
        result = *(arg1 + 0x58)
    
    *(rdx_1 + result) = 0xd
    *(arg1 + 0x84) -= 1

return result
