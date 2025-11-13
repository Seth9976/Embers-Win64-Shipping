// 函数: sub_140b63640
// 地址: 0x140b63640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

RemoveVectoredExceptionHandler(*(arg1 + 0x40))

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x10))
        *(arg1 + 0x10) = 0
        z_1 = true
    else
        *(arg1 + 0x10)
        z_1 = false
    
    if (not(z_1))
        break
    
    if (WaitForSingleObject(*(arg1 + 0x18), 0x1f4) == WAIT_OBJECT_0)
        ResetEvent(*(arg1 + 0x20))
        sub_140b5ecc0(arg1)
        ResetEvent(*(arg1 + 0x18))
        SetEvent(*(arg1 + 0x20))
        break

return 0
