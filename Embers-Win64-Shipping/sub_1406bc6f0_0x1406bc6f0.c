// 函数: sub_1406bc6f0
// 地址: 0x1406bc6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg4)
void* lpCriticalSection = arg1 + 0x98
EnterCriticalSection(lpCriticalSection)
int64_t* rcx_2

if (arg3 != 0)
    if (arg3 == 1)
        if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x90))
            goto label_1406bc7d4
        
        rcx_2 = rsi * 0xa8 + *(arg1 + 0x88)
        goto label_1406bc765
    
    if (arg3 == 2)
        if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x130))
            goto label_1406bc7d4
        
        rcx_2 = rsi * 0xa8 + *(arg1 + 0x128)
        goto label_1406bc765
    
    if (arg3 != 6 || rsi.d s< 0 || rsi.d s>= *(arg1 + 0x190))
        goto label_1406bc7d4
    
    rcx_2 = rsi * 0xa8 + *(arg1 + 0x188)
    goto label_1406bc765

int32_t rax_2

if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x50))
label_1406bc7d4:
    sub_1405d9400()
    *arg2 = data_143cd6fd8
    void* rcx_7 = data_143cd6fe0
    arg2[1] = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
    
    rax_2 = data_143cd6fe8
else
    rcx_2 = rsi * 0xa8 + *(arg1 + 0x48)
label_1406bc765:
    *arg2 = *rcx_2
    void* rax_1 = rcx_2[1]
    arg2[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rax_2 = rcx_2[2].d

arg2[2].d = rax_2

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return arg2
