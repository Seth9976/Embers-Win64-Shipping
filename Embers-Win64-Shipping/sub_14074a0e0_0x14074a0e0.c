// 函数: sub_14074a0e0
// 地址: 0x14074a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result_1 = *(arg1 + 0x12)
int32_t rsi = *(arg1 + 0x20)

if (result_1 == 0xffff)
    if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 1)
        *(arg1 + 0x12) = 0
        result_1 = 0
    else
        void* rax_1 = sub_140761a70(arg1 + 8)
        int16_t rcx_1 = *(rax_1 + 0x5c)
        result_1 = (*(rax_1 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
        *(arg1 + 0x12) = result_1

int32_t result = sx.d(result_1)

if (rsi != result)
    if (result_1 == 0xffff)
        if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 1)
            *(arg1 + 0x12) = 0
            result_1 = 0
        else
            void* rax_2 = sub_140761a70(arg1 + 8)
            int16_t rcx_3 = *(rax_2 + 0x5c)
            result_1 = (*(rax_2 + 0x58) - 1 + rcx_3) & neg.w(rcx_3)
            *(arg1 + 0x12) = result_1
    
    int64_t rbx_1 = sx.q(*(arg1 + 0x20))
    result = sx.d(result_1)
    
    if (result s> rbx_1.d)
        *(arg1 + 0x20) = result
        
        if (result s> *(arg1 + 0x24))
            sub_1405daba0(arg1 + 0x18)
        
        return memset(rbx_1 + *(arg1 + 0x18), 0, sx.q(result - rbx_1.d))
    
    if (result s< rbx_1.d && result != rbx_1.d)
        *(arg1 + 0x20) = result
        return sub_1405dac10(arg1 + 0x18)

return result
