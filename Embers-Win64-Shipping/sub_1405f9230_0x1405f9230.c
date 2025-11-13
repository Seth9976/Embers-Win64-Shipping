// 函数: sub_1405f9230
// 地址: 0x1405f9230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
EnterCriticalSection(arg1 + 0x98)
int32_t rdi_1
void* rcx_3

if (arg2 == 0)
    if (rdi.d s< 0)
        rdi_1 = -1
    else if (rdi.d s>= *(arg1 + 0x50))
    label_1405f92ac:
        
        if (rdi.d s>= 0)
            if (rdi.d s>= *(arg1 + 0x130))
                goto label_1405f92c5
            
            rcx_3 = rdi * 0x68 + *(arg1 + 0x128)
            goto label_1405f92f5
        
        rdi_1 = -1
    else
        rcx_3 = rdi * 0x68 + *(arg1 + 0x48)
    label_1405f92f5:
        
        if (rcx_3 == 0)
            rdi_1 = -1
        else
            rdi_1 = *(rcx_3 + 0x5c)
else if (arg2 == 1)
label_1405f92c5:
    
    if (rdi.d s< 0)
        rdi_1 = -1
    else
        if (rdi.d s< *(arg1 + 0x90))
            rcx_3 = rdi * 0x68 + *(arg1 + 0x88)
            goto label_1405f92f5
        
        if (rdi.d s>= 0 && rdi.d s< *(arg1 + 0x1b0))
            goto label_1405f92ee
        
        rdi_1 = -1
else
    if (arg2 == 2)
        goto label_1405f92ac
    
    if (arg2 == 6 && rdi.d s>= 0 && rdi.d s< *(arg1 + 0x1b0))
    label_1405f92ee:
        rcx_3 = rdi * 0x68 + *(arg1 + 0x1a8)
        goto label_1405f92f5
    
    rdi_1 = -1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi_1)
