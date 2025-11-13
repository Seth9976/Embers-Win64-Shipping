// 函数: sub_1405f9110
// 地址: 0x1405f9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t rsi = sx.q(arg4)
void* lpCriticalSection = arg1 + 0x98
EnterCriticalSection(lpCriticalSection)
int64_t rdx

if (arg3 != 0)
    if (arg3 == 1)
        if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x90))
            goto label_1405f91da
        
        rdx = *(arg1 + 0x88)
        goto label_1405f9175
    
    if (arg3 == 2)
        if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x130))
            goto label_1405f91da
        
        rdx = *(arg1 + 0x128)
        goto label_1405f9175
    
    if (arg3 != 6 || rsi.d s< 0 || rsi.d s>= *(arg1 + 0x1b0))
        goto label_1405f91da
    
    rdx = *(arg1 + 0x1a8)
    goto label_1405f9175

int32_t rax_2

if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x50))
label_1405f91da:
    sub_1405d9400()
    *arg2 = data_143cd6fd8
    void* rcx_3 = data_143cd6fe0
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    rax_2 = data_143cd6fe8
else
    rdx = *(arg1 + 0x48)
label_1405f9175:
    int64_t rcx_1 = rsi * 0x68
    *arg2 = *(rcx_1 + rdx + 8)
    void* rax_1 = *(rcx_1 + rdx + 0x10)
    arg2[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rax_2 = *(rcx_1 + rdx + 0x18)

arg2[2].d = rax_2

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return arg2
