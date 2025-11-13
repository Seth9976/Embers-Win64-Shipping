// 函数: sub_1405f8360
// 地址: 0x1405f8360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
EnterCriticalSection(arg1 + 0x98)
int32_t rdi_1

if (arg2 == 0)
    if (rdi.d s< 0)
        rdi_1 = 0
    else if (rdi.d s>= *(arg1 + 0x50))
    label_1405f83dd:
        
        if (rdi.d s< 0)
            rdi_1 = 0
        else
            if (rdi.d s>= *(arg1 + 0x130))
                goto label_1405f83f0
            
            rdi_1 = 1
    else
        rdi_1 = *(rdi * 0x68 + *(arg1 + 0x48) + 0x28)
else if (arg2 == 1)
label_1405f83f0:
    
    if (rdi.d s< 0)
        rdi_1 = 0
    else if (rdi.d s< *(arg1 + 0x90))
        rdi_1 = 1
    else if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x1b0))
        rdi_1 = 0
    else
        rdi_1 = *(rdi * 0x68 + *(arg1 + 0x1a8) + 0x28)
else
    if (arg2 == 2)
        goto label_1405f83dd
    
    if (arg2 == 6 && rdi.d s>= 0 && rdi.d s< *(arg1 + 0x1b0))
        rdi_1 = *(rdi * 0x68 + *(arg1 + 0x1a8) + 0x28)
    else
        rdi_1 = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi_1)
