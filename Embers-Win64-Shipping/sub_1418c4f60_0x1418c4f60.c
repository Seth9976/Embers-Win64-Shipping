// 函数: sub_1418c4f60
// 地址: 0x1418c4f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x30)
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = *(arg1 + 0x10)
        void* rcx_1 = *(rdi_1 + result)
        
        if (rcx_1 != arg2)
            result = sub_1418c4d80(rcx_1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x18))

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(arg1 + 0x30) __tailcall
