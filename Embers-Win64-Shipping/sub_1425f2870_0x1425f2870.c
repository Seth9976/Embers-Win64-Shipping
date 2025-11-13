// 函数: sub_1425f2870
// 地址: 0x1425f2870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2

if (arg2 == 0)
    int64_t pv = *arg1
    
    if (pv != 0)
        CoTaskMemFree(pv)
        *arg1 = 0
    
    return 

int16_t* r14_1 = arg2 * 2
int64_t rax = CoTaskMemAlloc(&r14_1[1])
int64_t rdx = *arg1

if (rdx != 0)
    int64_t rcx_1 = -1
    
    do
        rcx_1 += 1
    while (*(rdx + (rcx_1 << 1)) != 0)
    
    if (rbx u> rcx_1)
        rbx = -ffffffffffffffff
        
        do
            rbx += 1
        while (*(rdx + (rbx << 1)) != 0)
    
    memcpy(rax, rdx, rbx.d * 2)
    int64_t pv_1 = *arg1
    
    if (pv_1 != 0)
        CoTaskMemFree(pv_1)
    
    *(r14_1 + rax) = 0

*arg1 = rax
