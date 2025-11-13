// 函数: sub_142b63600
// 地址: 0x142b63600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = strcmp(arg1, "midnight")

if (result == 0)
    return result

int64_t rdi = 0
int64_t rcx = 0

while (true)
    char rax = arg1[rcx]
    rcx += 1
    
    if (rax != *(rcx + 0x143670c5b))
        break
    
    if (rcx == 5)
        return zx.q((rcx - 4).d)

if (strcmp(arg1, "morning1") == 0)
    return 2

if (strcmp(arg1, "afternoon1") == 0)
    return 3

if (strcmp(arg1, "evening1") == 0)
    return 4

int64_t rdx = 0

while (true)
    char rcx_4 = arg1[rdx]
    rdx += 1
    
    if (rcx_4 != *(rdx + 0x143670c93))
        break
    
    if (rdx == 7)
        return zx.q((rdx - 2).d)

if (strcmp(arg1, "morning2") == 0)
    return 6

if (strcmp(arg1, "afternoon2") == 0)
    return 7

if (strcmp(arg1, "evening2") == 0)
    return 8

while (true)
    char rax_15 = arg1[rdi]
    rdi += 1
    
    if (rax_15 != *(rdi + 0x143670ccb))
        break
    
    if (rdi == 7)
        return zx.q((rdi + 2).d)

if (*arg1 == 0x61 && arg1[1] == 0x6d && arg1[2] == 0)
    return 0xa

uint32_t rcx_8 = zx.d(*arg1)
int32_t rcx_9 = rcx_8 - 0x70

if (rcx_8 == 0x70)
    uint32_t rcx_10 = zx.d(arg1[1])
    rcx_9 = rcx_10 - 0x6d
    
    if (rcx_10 == 0x6d)
        rcx_9 = zx.d(arg1[2])

if (rcx_9 == 0)
    return 0xb

return 0xffffffff
