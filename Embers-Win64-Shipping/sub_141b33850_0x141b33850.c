// 函数: sub_141b33850
// 地址: 0x141b33850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *(arg1 + 0xc) & 3
uint64_t result
result.b = r9 != 0

if (result.b == (*(arg2 + 0xc) & 3) != 0)
    if (r9 != 0)
        result.b = 0
        return result
    
    void* rdx = *arg1
    void* r8_1 = *arg2
    result = zx.q(*(rdx + 0xac))
    int32_t temp0_1 = *(r8_1 + 0xac)
    
    if (result.d == temp0_1)
        result = (*(rdx + 0x90)).q
        uint64_t result_1 = result
        int64_t zmm0 = (*(r8_1 + 0x90)).q
        int64_t arg_10 = zmm0
        uint64_t* rcx_1
        char rdx_1
        
        if (result.b != 2)
            if (zmm0.b != 2)
                uint32_t rcx_2 = (zmm0 u>> 0x20).d
                uint32_t rdx_3 = (result u>> 0x20).d
                
                if (rdx_3 s> rcx_2)
                    rcx_1 = &result_1
                    rdx_1 = result.b
                    goto label_141b33919
                
                if (rdx_3 s>= rcx_2)
                    rcx_1 = &result_1
                    
                    if (result.b != 0)
                        rcx_1 = &arg_10
                else
                    rcx_1 = &arg_10
                
                goto label_141b3390e
            
            rcx_1 = &result_1
            rdx_1 = result.b
        label_141b33919:
            
            if (rdx_1 == 2 || *(rcx_1 + 4) == (result u>> 0x20).d)
                result.b = 1
                return result
        else
            rcx_1 = &arg_10
        label_141b3390e:
            rdx_1 = *rcx_1
            
            if (rdx_1 == result.b)
                goto label_141b33919
        result.b = 0
        return result
    
    result.b = result.d s> temp0_1

return result
