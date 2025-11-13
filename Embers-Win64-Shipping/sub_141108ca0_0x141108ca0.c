// 函数: sub_141108ca0
// 地址: 0x141108ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(*(arg1 + 8) + 8))
int64_t result

if (sub_14110e330(rcx.d, (*U"1111")[rcx]).b != 0)
    void* rdi_1 = *(arg1 + 8)
    void* rcx_1 = *(rdi_1 + 0xf80)
    
    if (rcx_1 != 0 && *(rcx_1 + 8) != 0 && sub_1413faff0(rcx_1).b == 0)
        char rcx_2 = *(*(rdi_1 + 0xf80) + 0x20)
        
        if ((rcx_2 & 2) == 0 && (rcx_2 & 4) == 0 && (*(arg1 + 0x3c) & 0x80000) != 0)
            result = sx.q(*(rdi_1 + 8))
            
            if (result.d s>= 3 && sub_1410f95b0((*1111")[result]).b == 0
                    && (*(*(*(arg1 + 8) + 0xf80) + 0x20) & 1) != 0
                    && (*(arg1 + 0x3c) & 0x400000) != 0)
                result.b = 1
                return result
    
    if (data_143e51018 != 0 && (*(arg1 + 0x3c) & 0x400000) != 0)
        result.b = 1
        return result

result.b = 0
return result
