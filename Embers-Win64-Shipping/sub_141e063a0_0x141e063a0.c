// 函数: sub_141e063a0
// 地址: 0x141e063a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
*(arg1 + 0x2bc)
uint64_t result
void* const rcx_3

if (*(arg1 + 0x290) == *(arg1 + 0x2bc))
labelid_c:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x2c0
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x2d0)) - 1) & sx.q(rax_2)) << 2)))
    
    if (result.d == 0xffffffff)
    label_141e06430:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x288)
        
        while (true)
            int64_t rdx_3 = sx.q(result.d) * 5
            rcx_3 = r8_2 + (rdx_3 << 2)
            
            if (*(r8_2 + (rdx_3 << 2)) == rbx)
                break
            
            result = zx.q(*(rcx_3 + 0xc))
            
            if (result.d == 0xffffffff)
                goto label_141e06430_1
        
        if (result.d == 0xffffffff)
        label_141e06430_1:
            rcx_3 = nullptr

void* r8_3 = rcx_3 + 8

if (rcx_3 == 0)
    r8_3 = nullptr

if (r8_3 != 0)
    int64_t rcx_4 = sx.q(*r8_3) * 3
    result = *(arg1 + sx.q(1 - *(arg1 + 0x208)) * 0x10 + 0x2d8)
    
    if (*(result + (rcx_4 << 2) + 8) != 0 || *(result + (rcx_4 << 2) + 9) != 0)
        result.b = 1
        return result

result.b = 0
return result
