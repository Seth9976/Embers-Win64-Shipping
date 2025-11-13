// 函数: sub_140b27970
// 地址: 0x140b27970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x2e0)
int32_t i = 0

if (*(arg1 + 0x2a8) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdi_1 = *(arg1 + 0x2a0)
        int32_t arg_8
        sub_140b63580(rdi_1 + 8 + rsi_1, &arg_8)
        result = (*(*arg2 + 8))(arg2, *(rsi_1 + rdi_1), zx.q(*(rsi_1 + rdi_1 + 0x20)), &arg_8, 
            *(rsi_1 + rdi_1 + 0x18))
        i += 1
        rsi_1 = &rsi_1[5]
    while (i s< *(arg1 + 0x2a8))

if (arg1 == -0x2e0)
    return result

return LeaveCriticalSection(arg1 + 0x2e0) __tailcall
