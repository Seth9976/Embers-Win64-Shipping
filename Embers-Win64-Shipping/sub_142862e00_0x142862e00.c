// 函数: sub_142862e00
// 地址: 0x142862e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t r9 = 0
int64_t r8 = 0

while (true)
    char rax_1 = arg3[r8]
    r8 += 1
    
    if (rax_1 != *(r8 + 0x1434d88f3))
        break
    
    if (r8 == 4)
        *arg1 = 6
        return rax_1

int64_t rcx = 0

while (true)
    char rax_2 = arg3[rcx]
    rcx += 1
    
    if (rax_2 != *(rcx + 0x1434dcd17))
        break
    
    if (rcx == 8)
        *arg1 = 0x390
        return rax_2

int64_t rcx_1 = 0

while (true)
    char rax_3 = arg3[rcx_1]
    rcx_1 += 1
    
    if (rax_3 != data_1434dcd18[7][rcx_1])
        break
    
    if (rcx_1 == 4)
        *arg1 = 0x390
        return rax_3

int64_t rcx_2 = 0

while (true)
    char rax_4 = arg3[rcx_2]
    rcx_2 += 1
    
    if (rax_4 != *(rcx_2 + 0x1434dcd23))
        break
    
    if (rcx_2 == 4)
        *arg1 = 0x74
        return rax_4

while (true)
    char rax_5 = arg3[r9]
    r9 += 1
    
    if (rax_5 != *(r9 + 0x1434dbabb))
        break
    
    if (r9 == 6)
        *arg1 = 0x198
        return rax_5

int32_t rax_6 = sub_1428a9c80(arg3)
*arg2 = rax_6

if (rax_6 == 0)
    rax_6 = sub_1428a9380(arg3)
    *arg2 = rax_6

return rax_6
