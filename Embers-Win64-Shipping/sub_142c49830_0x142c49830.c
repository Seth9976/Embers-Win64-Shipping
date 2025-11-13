// 函数: sub_142c49830
// 地址: 0x142c49830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
HLOCAL lpBuffer = nullptr

if (arg1 != 0)
    uint32_t uSize = GetSystemDirectoryW(nullptr, 0)
    int64_t rdx_1 = -1
    
    do
        rdx_1 += 1
    while (*(arg1 + (rdx_1 << 1)) != 0)
    
    HLOCAL lpBuffer_1 = LocalAlloc(LMEM_ZEROINIT, (rdx_1 + zx.q(uSize + 1)) * 2)
    lpBuffer = lpBuffer_1
    
    if (lpBuffer_1 == 0)
        return lpBuffer_1
    
    uint64_t r8_1 = zx.q(GetSystemDirectoryW(lpBuffer, uSize))
    
    if (*(lpBuffer + (zx.q((r8_1 - 1).d) << 1)) != 0x5c)
        *(lpBuffer + (r8_1 << 1)) = 0x5c
        r8_1 = zx.q(r8_1.d + 1)
    
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (*(arg1 + (rax_2 << 1)) != 0)
    
    if (rax_2 != 0)
        uint64_t rdx_5 = 0
        int64_t rax_4
        
        do
            uint64_t rcx_3 = zx.q(rdi + r8_1.d)
            rdi += 1
            *(lpBuffer + (rcx_3 << 1)) = *(arg1 + (rdx_5 << 1))
            rdx_5 = zx.q(rdi)
            rax_4 = -1
            
            do
                rax_4 += 1
            while (*(arg1 + (rax_4 << 1)) != 0)
        while (rdx_5 u< rax_4)

return lpBuffer
