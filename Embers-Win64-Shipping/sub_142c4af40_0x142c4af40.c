// 函数: sub_142c4af40
// 地址: 0x142c4af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    arg1 = arg2
else if (arg2 != 0)
    int64_t rcx_1 = -1
    int64_t rdx_1 = -1
    
    do
        rdx_1 += 1
    while (arg1[rdx_1] != 0)
    
    do
        rcx_1 += 1
    while (arg2[rcx_1] != 0)
    
    int32_t rbp
    
    if (rdx_1 == 0 || arg1[rdx_1 - 1] == 0x5c || rcx_1 == 0 || *arg2 == 0x5c)
        rbp = 0
    else
        rbp = 1
    
    HLOCAL hMem_1 = LocalAlloc(LMEM_ZEROINIT, ((zx.q(rbp) + rcx_1 + rdx_1) << 1) + 2)
    int16_t* hMem = hMem_1
    
    if (hMem_1 != 0)
        if (sub_142c4b270(hMem_1, ((zx.q(rbp) + rcx_1 + rdx_1) << 1) + 2, arg1) s< 0)
            LocalFree(hMem)
            return nullptr
        
        int32_t rax_5
        
        if (rbp != 0)
            rax_5 = sub_142c4b190(hMem, ((zx.q(rbp) + rcx_1 + rdx_1) << 1) + 2, &data_1436b0194)
        
        if (rbp != 0 && rax_5 s< 0)
            LocalFree(hMem)
            return nullptr
        
        if (sub_142c4b190(hMem, ((zx.q(rbp) + rcx_1 + rdx_1) << 1) + 2, arg2) s< 0)
            LocalFree(hMem)
            return nullptr
    
    return hMem

return sub_142c4b050(arg1) __tailcall
