// 函数: sub_140b9b210
// 地址: 0x140b9b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rsi = sx.q(arg2)
EnterCriticalSection(arg1 + 0x290)
int32_t result
void arg_8

if (*(arg1 + 0x248) == *(arg1 + 0x274))
labelid_4:
    result = sub_14077a5e0(arg1 + 0x240, &arg_8, &arg_10, nullptr)
else
    void* rcx_1 = *(arg1 + 0x280)
    void* r8_1 = arg1 + 0x278
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = *(r8_1 + (((sx.q(*(arg1 + 0x288)) - 1) & rsi) << 2))
    
    if (result == 0xffffffff)
    label_140b9b29e:
        result = sub_14077a5e0(arg1 + 0x240, &arg_8, &arg_10, nullptr)
    else
        int64_t r8_2 = *(arg1 + 0x240)
        
        while (true)
            int64_t rdx_3 = sx.q(result) * 3
            
            if (*(r8_2 + (rdx_3 << 2)) == rsi.d)
                break
            
            result = *(r8_2 + (rdx_3 << 2) + 4)
            
            if (result == 0xffffffff)
                goto label_140b9b29e_1
        
        if (result == 0xffffffff)
        label_140b9b29e_1:
            result = sub_14077a5e0(arg1 + 0x240, &arg_8, &arg_10, nullptr)

if (arg1 == -0x290)
    return result

return LeaveCriticalSection(arg1 + 0x290)
