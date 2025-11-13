// 函数: sub_140611150
// 地址: 0x140611150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_2 = *(arg1 + 0xc)
int32_t temp0 = *(arg2 + 0xc)

if (r8_2 != temp0)
    if (r8_2 s< temp0)
        return 0xffffffff
    
    return 1

int32_t r8 = **(arg1 + 0x10)
int32_t temp1 = **(arg2 + 0x10)

if (r8 != temp1)
    int32_t rcx = -1
    
    if (r8 s< temp1)
        rcx = 1
    
    return zx.q(rcx)

char r8_1 = *(arg1 + 0x20)
char temp2 = *(arg2 + 0x20)

if (r8_1 == temp2)
    return 0

if (r8_1 u< temp2)
    return 0xffffffff

return 1
