// 函数: sub_142b63540
// 地址: 0x142b63540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = 0
int64_t r8 = 0

while (true)
    char rax_1 = arg1[r8]
    r8 += 1
    
    if (rax_1 != *(r8 + 0x143651c0f))
        break
    
    if (r8 == 5)
        return zx.q((r8 - 3).d)

int64_t rcx = 0

while (true)
    char rax_3 = arg1[rcx]
    rcx += 1
    
    if (rax_3 != *(rcx + 0x1436714bb))
        break
    
    if (rcx == 7)
        return 0

while (true)
    char rax_5 = arg1[rdx]
    rdx += 1
    
    if (rax_5 != *(rdx + 0x1436714c3))
        break
    
    if (rdx == 6)
        return 1

uint32_t rcx_1 = zx.d(*arg1)
int32_t rcx_2 = rcx_1 - 0x61

if (rcx_1 == 0x61)
    uint32_t rcx_3 = zx.d(arg1[1])
    rcx_2 = rcx_3 - 0x74
    
    if (rcx_3 == 0x74)
        rcx_2 = zx.d(arg1[2])

if (rcx_2 == 0)
    return 3

return 0xffffffff
