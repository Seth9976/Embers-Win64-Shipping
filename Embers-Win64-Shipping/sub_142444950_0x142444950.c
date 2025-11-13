// 函数: sub_142444950
// 地址: 0x142444950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x168) = arg2
void* result

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x160))
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    result = sx.q(arg2)
    int64_t rcx = result * 0x78
    void* rcx_1 = rcx + *(arg1 + 0x158)
    
    if (rcx != neg.q(*(arg1 + 0x158)))
        *(arg1 + 0x30) = *(rcx_1 + 0x20)
        *(arg1 + 0x130) = *(rcx_1 + 8)
        void* rdi_1 = *(rcx_1 + 0x10)
        *(arg1 + 0x38) = rdi_1
        result = *(rcx_1 + 0x18)
        *(arg1 + 0xf0) = result
        
        if (rdi_1 != 0)
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(*(rdi_1 + 0x190), 0).b == 0
            result.b = *(rdi_1 + 0x194) != 0
            result.b |= rcx_2.b
            
            if (result.b != 0)
                result = sub_1423dcd80(data_143f5b298, arg1, *(*(arg1 + 0x38) + 0x190))
                
                if (result != *(arg1 + 0x38))
                    *(arg1 + 0x38) = result
        
        void* rdi_2 = *(arg1 + 0xf0)
        
        if (rdi_2 != 0)
            int32_t rcx_4
            rcx_4.b = sub_140b5b8a0(*(rdi_2 + 0x190), 0).b == 0
            result.b = *(rdi_2 + 0x194) != 0
            result.b |= rcx_4.b
            
            if (result.b != 0)
                result = sub_1423dcd80(data_143f5b298, arg1, *(*(arg1 + 0xf0) + 0x190))
                void* result_1 = result
                
                if (result == 0)
                    result_1 = nullptr
                else
                    void* rax_2 = sub_14249b2a0()
                    void* rcx_6 = *(result_1 + 0x10)
                    result = rax_2 + 0x30
                    int64_t rdx_2 = sx.q(*(result + 8))
                    
                    if (rdx_2.d s> *(rcx_6 + 0x38) || *(*(rcx_6 + 0x30) + (rdx_2 << 3)) != result)
                        result_1 = nullptr
                
                if (result_1 != *(arg1 + 0xf0))
                    *(arg1 + 0xf0) = result_1

return result
