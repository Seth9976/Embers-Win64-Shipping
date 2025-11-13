// 函数: sub_14105cd00
// 地址: 0x14105cd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_140b74110(0xa, 0).b != 0)
    int32_t temp0_1 = *(arg1 + 0x18)
    bool cond:0_1 = temp0_1 s<= 0
    
    if (temp0_1 == 0)
        sub_141060bf0(arg1)
        cond:0_1 = *(arg1 + 0x18) s<= 0
    
    if (not(cond:0_1))
        void* rcx_1 = **(arg1 + 0x10)
        
        if (*(rcx_1 + 0x5c) != 0 && *(rcx_1 + 0x58) s>= 0 && *(rcx_1 + 0x5c) s>= 0xb000)
            result.b = 1
            return result

result.b = 0
return result
