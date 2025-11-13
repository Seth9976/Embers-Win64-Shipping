// 函数: sub_141d10420
// 地址: 0x141d10420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140a54810()

if (result != 0 && data_143a21038 s> 0)
    int64_t rbp
    rbp.b = 0
    void* rdi_1 = data_143f36250
    result = EnterCriticalSection(rdi_1 + 0x298)
    int32_t temp0_1 = *(rdi_1 + 0x290)
    
    if (temp0_1 != arg2)
        *(rdi_1 + 0x290) = arg2
        rbp.b = temp0_1 s> arg2
    
    if (rdi_1 != -0x298)
        result = LeaveCriticalSection(rdi_1 + 0x298)
    
    if (rbp.b != 0)
        EnterCriticalSection(rdi_1 + 8)
        result = sub_141d11b70(rdi_1)
        
        if (rdi_1 != -8)
            return LeaveCriticalSection(rdi_1 + 8)

return result
