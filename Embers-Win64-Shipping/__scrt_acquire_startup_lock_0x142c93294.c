// 函数: __scrt_acquire_startup_lock
// 地址: 0x142c93294
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_142c94400().d == 0)
label_142c932c2:
    result.b = 0
else
    TEB* gsbase
    void* StackBase = gsbase->NtTib.Self->NtTib.StackBase
    
    do
        result = 0
        bool z_1
        
        if (0 == data_14401b118)
            data_14401b118 = StackBase
            z_1 = true
        else
            result = data_14401b118
            z_1 = false
        
        if (z_1)
            goto label_142c932c2
    while (StackBase != result)
    
    result.b = 1

return result
