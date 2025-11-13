// 函数: sub_142c49510
// 地址: 0x142c49510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int64_t rax_1 = -1
int64_t rdx = -1

do
    rdx += 1
while (*(arg1 + (rdx << 1)) != 0)

int64_t rcx = -1
bool cond:0_1

do
    cond:0_1 = *(arg1 + (rcx << 1) + 2) != 0
    rcx += 1
while (cond:0_1)
int16_t* r9 = arg1 + (rcx << 1)
int16_t* rcx_1 = r9

if (arg1 u< r9)
    do
        int16_t r8_1 = *rcx_1
        
        if (0x5c == r8_1)
            break
        
        if (0x2e == r8_1)
            break
        
        rcx_1 -= 2
    while (arg1 u< rcx_1)

if (0x2e == *rcx_1)
    r9 = rcx_1

do
    rax_1 += 1
while (r9[rax_1] != 0)

if (rax_1 != 0)
    if (rax_1 == 1)
        return sub_142c4b0e0(arg1, rdx - 1)
    
    return sub_142c4b050(arg1)

HLOCAL hMem = LocalAlloc(LMEM_ZEROINIT, (rdx << 1) + 0xa)

if (hMem != 0)
    if (sub_142c4b270(hMem, (rdx << 1) + 0xa, arg1) s< 0)
        LocalFree(hMem)
        return nullptr
    
    if (sub_142c4b190(hMem, (rdx << 1) + 0xa, u".dll") s< 0)
        LocalFree(hMem)
        return nullptr

return hMem
