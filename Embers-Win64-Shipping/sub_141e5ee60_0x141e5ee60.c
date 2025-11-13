// 函数: sub_141e5ee60
// 地址: 0x141e5ee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1] = 0
*arg3 = 0
void* const rcx_3

if (*(arg1 + 0x278) == *(arg1 + 0x2a4))
label_141e5eefa:
    rcx_3 = nullptr
else
    int32_t rax_1 = sub_140cde1f0(arg2)
    void* r8 = arg1 + 0x2a8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_3 = *(r8 + (((sx.q(*(arg1 + 0x2b8)) - 1) & sx.q(rax_1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141e5eefa_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x270)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 5
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == *arg2 && *(rcx_3 + 8) == arg2[1])
                break
            
            rax_3 = *(rcx_3 + 0x20)
            
            if (rax_3 == 0xffffffff)
                goto label_141e5eefa_2
        
        if (rax_3 == 0xffffffff)
        label_141e5eefa_2:
            rcx_3 = nullptr

void* result = rcx_3 + 0x10

if (rcx_3 == 0)
    result = nullptr

if (result != 0)
    *arg3 = *result

return result
