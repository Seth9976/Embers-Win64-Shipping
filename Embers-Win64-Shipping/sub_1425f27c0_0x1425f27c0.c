// 函数: sub_1425f27c0
// 地址: 0x1425f27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t pv = *arg1
    
    if (pv != 0)
        CoTaskMemFree(pv)
        *arg1 = arg2
    
    return 

char* rax = CoTaskMemAlloc(arg2 + 1)
char* rdx = *arg1

if (rdx != 0)
    int64_t r8_1 = arg2
    int64_t rcx_1 = -1
    
    do
        rcx_1 += 1
    while (rdx[rcx_1] != 0)
    
    if (arg2 u> rcx_1)
        r8_1 = -1
        
        do
            r8_1 += 1
        while (rdx[r8_1] != 0)
    
    memcpy(rax, rdx, r8_1.d)
    int64_t pv_1 = *arg1
    
    if (pv_1 != 0)
        CoTaskMemFree(pv_1)
    
    rax[arg2] = 0

*arg1 = rax
