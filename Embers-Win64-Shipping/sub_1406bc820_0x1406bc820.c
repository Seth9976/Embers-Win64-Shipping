// 函数: sub_1406bc820
// 地址: 0x1406bc820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
EnterCriticalSection(arg1 + 0x98)
int64_t rcx_1

if (arg2 == 0)
    if (rdi.d s< 0)
        rcx_1 = 0
    else if (rdi.d s>= *(arg1 + 0x50))
    label_1406bc8a8:
        
        if (rdi.d s>= *(arg1 + 0x130))
            goto label_1406bc8c4
        
        rcx_1 = rdi * 0xa8 + *(arg1 + 0x128)
    else
        rcx_1 = rdi * 0xa8 + *(arg1 + 0x48)
else if (arg2 == 1)
    if (rdi.d s< 0)
        rcx_1 = 0
    else
    label_1406bc8c4:
        
        if (rdi.d s< *(arg1 + 0x90))
            rcx_1 = rdi * 0xa8 + *(arg1 + 0x88)
        else if (rdi.d s>= *(arg1 + 0x190))
            rcx_1 = 0
        else
            rcx_1 = rdi * 0xa8 + *(arg1 + 0x188)
else if (arg2 == 2)
    if (rdi.d s>= 0)
        goto label_1406bc8a8
    
    rcx_1 = 0
else if (arg2 == 6 && rdi.d s>= 0 && rdi.d s< *(arg1 + 0x190))
    rcx_1 = rdi * 0xa8 + *(arg1 + 0x188)
else
    rcx_1 = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(neg.d(sbb.d(rdi.d, rdi.d, rcx_1 != 0)) - 1)
