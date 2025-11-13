// 函数: sub_1423737b0
// 地址: 0x1423737b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    return 

EnterCriticalSection(arg1 + 0x1a8)
int32_t rdi_1 = 0
int32_t rcx_1 = *(arg1 + 0x1d8)

if (rcx_1 s> 0)
    int64_t* rsi_1 = nullptr
    int32_t rdx
    
    do
        int64_t r9_1 = *(arg1 + 0x1d0)
        rdx = rcx_1
        
        if (*(rsi_1 + r9_1) == *arg2)
            int32_t rax_3 = rcx_1 - rdi_1 - 1
            
            if (rax_3 s>= 1)
                rax_3 = 1
            
            if (rax_3 != 0)
                memcpy(r9_1 + (sx.q(rdi_1) << 3), r9_1 + (sx.q(rcx_1 - rax_3) << 3), rax_3 << 3)
                rcx_1 = *(arg1 + 0x1d8)
            
            *(arg1 + 0x1d8) = rcx_1 - 1
            sub_1405c53d0(arg1 + 0x1d0)
            rdx = *(arg1 + 0x1d8)
            rdi_1 -= 1
            rsi_1 -= 8
        
        rdi_1 += 1
        rsi_1 = &rsi_1[1]
        rcx_1 = rdx
    while (rdi_1 s< rdx)

if (arg1 != -0x1a8)
    LeaveCriticalSection(arg1 + 0x1a8)
