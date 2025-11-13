// 函数: sub_142256e20
// 地址: 0x142256e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rcx = *(arg2 + 0x4c)
int16_t r9 = rcx | 0x10
int32_t result

if (0f < arg3[3] || 0f < arg3[2])
    rcx |= 0x11
    *(arg2 + 0x40) = arg3[2]
    result = arg3[3]
    *(arg2 + 0x44) = result
    *(arg2 + 0x2c) = 0
else
    rcx |= 0x18
    bool cond:0_1 = *(arg2 + 0xc) <= 0f
    *(arg2 + 0x4e) = 0x401
    *(arg2 + 0x40) = *arg3
    result = arg3[1]
    *(arg2 + 0x44) = result
    
    if (cond:0_1)
        rcx = r9
    
    bool cond:1_1 = 0f >= *arg3
    *(arg2 + 0x2c) = 0
    
    if (not(cond:1_1))
        *(arg2 + 0x4c) = rcx | 4
        return result

*(arg2 + 0x4c) = rcx
return result
