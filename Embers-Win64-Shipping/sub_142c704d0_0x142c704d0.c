// 函数: sub_142c704d0
// 地址: 0x142c704d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = *arg1

while (i != 0)
    char r10_1 = *arg2
    
    if (r10_1 == 0)
        break
    
    if (arg3 == 0)
        return 1
    
    if (i - 0x61 u<= 0x19)
        i -= 0x20
    
    if (r10_1 - 0x61 u<= 0x19)
        r10_1 -= 0x20
    
    if (i != r10_1)
        break
    
    i = arg1[1]
    arg1 = &arg1[1]
    arg3 -= 1
    arg2 = &arg2[1]

if (arg3 == 0)
    return 1

char r8 = *arg1

if (r8 - 0x61 u<= 0x19)
    r8 -= 0x20

char rcx = *arg2

if (rcx - 0x61 u<= 0x19)
    rcx -= 0x20

int64_t result
result.b = r8 == rcx
return result
