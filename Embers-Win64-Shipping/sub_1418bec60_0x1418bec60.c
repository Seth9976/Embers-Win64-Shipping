// 函数: sub_1418bec60
// 地址: 0x1418bec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb208)
int64_t* r10 = *(arg1 + 0x28)
int64_t rdx = sx.q(*(arg1 + 0x30))
int64_t* r9 = r10
void* rcx = &r10[rdx]
int32_t r9_3

if (r10 != rcx)
    while (*r9 != arg2)
        r9 = &r9[1]
        
        if (r9 == rcx)
            goto label_1418bec9f
    
    r9_3 = ((r9 - r10) s>> 3).d

if (r10 != rcx && r9_3 != 0xffffffff)
    int32_t rax_3 = rdx.d - r9_3 - 1
    
    if (rax_3 s>= 1)
        rax_3 = 1
    
    if (rax_3 != 0)
        memcpy(&r10[sx.q(r9_3)], &r10[sx.q(rdx.d - rax_3)], rax_3 << 3)
        rdx = zx.q(*(arg1 + 0x30))
    
    *(arg1 + 0x30) = (rdx - 1).d
    goto label_1418bed68

label_1418bec9f:
int64_t* r9_1 = *(arg1 + 0x38)
int64_t r10_1 = sx.q(*(arg1 + 0x40))
int64_t* rcx_1 = r9_1
void* rdx_1 = &r9_1[r10_1]

if (r9_1 != rdx_1)
    while (*rcx_1 != arg2)
        rcx_1 = &rcx_1[1]
        
        if (rcx_1 == rdx_1)
            goto label_1418beda8
    
    int32_t rcx_4 = ((rcx_1 - r9_1) s>> 3).d
    
    if (rcx_4 != 0xffffffff)
        int32_t rax_9 = r10_1.d - rcx_4 - 1
        
        if (rax_9 s>= 1)
            rax_9 = 1
        
        if (rax_9 != 0)
            memcpy(&r9_1[sx.q(rcx_4)], &r9_1[sx.q(r10_1.d - rax_9)], rax_9 << 3)
            r10_1 = zx.q(*(arg1 + 0x40))
        
        *(arg1 + 0x40) = (r10_1 - 1).d
    label_1418bed68:
        *(arg2 + 0x2c) = data_14399fa54
        int64_t rsi_1 = sx.q(*(arg1 + 0x50))
        int32_t rax_14 = (rsi_1 + 1).d
        *(arg1 + 0x50) = rax_14
        
        if (rax_14 s> *(arg1 + 0x54))
            sub_1405a4d70(arg1 + 0x48)
        
        *(*(arg1 + 0x48) + (rsi_1 << 3)) = arg2

label_1418beda8:
return LeaveCriticalSection(&data_143efb208) __tailcall
