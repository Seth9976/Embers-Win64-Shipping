// 函数: sub_1406bc370
// 地址: 0x1406bc370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x98)
int32_t rdi_1

if (arg2 == 0)
    if (arg3 s< 0)
        rdi_1 = 0
    else if (arg3 s< *(arg1 + 0x50))
        rdi_1 = 1
    else
    label_1406bc3df:
        
        if (arg3 s< 0)
            rdi_1 = 0
        else
            if (arg3 s>= *(arg1 + 0x130))
                goto label_1406bc3f6
            
            rdi_1 = 1
else if (arg2 != 1)
    if (arg2 == 2)
        goto label_1406bc3df
    
    if (arg2 == 6 && arg3 s>= 0 && arg3 s< *(arg1 + 0x190))
        rdi_1 = 1
    else
        rdi_1 = 0
else if (arg3 s< 0)
    rdi_1 = 0
else
label_1406bc3f6:
    
    if (arg3 s< *(arg1 + 0x90))
        rdi_1 = 1
    else if (arg3 s>= *(arg1 + 0x190))
        rdi_1 = 0
    else
        rdi_1 = 1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi_1)
