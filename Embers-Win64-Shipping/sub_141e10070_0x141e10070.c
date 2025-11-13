// 函数: sub_141e10070
// 地址: 0x141e10070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
void* const rcx_3

if (*(arg1 + 0x290) == *(arg1 + 0x2bc))
labelid_d:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x2c0
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x2d0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e10110:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x288)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_2 + (rdx_3 << 2)
            
            if (*(r8_2 + (rdx_3 << 2)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_141e10110_1
        
        if (rax_4 == 0xffffffff)
        label_141e10110_1:
            rcx_3 = nullptr

void* result = rcx_3 + 8

if (rcx_3 == 0)
    result = nullptr

if (result != 0)
    int64_t rdx_4 = sx.q(*result) * 3
    result = *((sx.q(*(arg1 + 0x208)) << 4) + arg1 + 0x2d8)
    *(result + (rdx_4 << 2)) = arg3.d
    *(result + (rdx_4 << 2) + 4) = arg4.d
    int64_t rcx_5
    
    if (*(result + (rdx_4 << 2) + 8) != 0 || arg3.d f> 9.99999975e-06f)
        rcx_5.b = 1
    else
        rcx_5.b = 0
    
    *(result + (rdx_4 << 2) + 8) = rcx_5.b

return result
