// 函数: sub_1407872e0
// 地址: 0x1407872e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xd0)
int32_t r11 = 0
void* const rcx_3

if (result == *(arg1 + 0xfc))
label_140787370:
    rcx_3 = nullptr
else
    int64_t rdi_1 = *arg3
    void* r10_1 = arg1 + 0x100
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    result =
        *(r10_1 + ((sx.q((rdi_1 u>> 0x20).d * 0x17 + rdi_1.d) & (sx.q(*(arg1 + 0x110)) - 1)) << 2))
    
    if (result == 0xffffffff)
    label_140787370_1:
        rcx_3 = nullptr
    else
        int64_t r8 = *(arg1 + 0xc8)
        
        while (true)
            int64_t rdx_2 = sx.q(result) * 9
            rcx_3 = r8 + (rdx_2 << 3)
            
            if (*(r8 + (rdx_2 << 3)) == rdi_1)
                break
            
            result = *(rcx_3 + 0x40)
            
            if (result == 0xffffffff)
                goto label_140787370_2
        
        if (result == 0xffffffff)
        label_140787370_2:
            rcx_3 = nullptr

void* rdx_3 = rcx_3 + 8

if (rcx_3 == 0)
    rdx_3 = nullptr

if (rdx_3 != 0)
    if (arg2 != 0)
        *rdx_3 = *arg2
        return sub_140597df0(rdx_3 + 8, &arg2[1]) __tailcall
    
    result = 0x42d40450
    *rdx_3 = 0
    
    if (*(rdx_3 + 8) != &data_142d40450)
        *(rdx_3 + 0x10) = 0
        
        if (*(rdx_3 + 0x14) != 0)
            result = sub_1405947f0(rdx_3 + 8, 0)
            r11 = *(rdx_3 + 0x10)
        
        *(rdx_3 + 0x10) = r11
        
        if (r11 s> *(rdx_3 + 0x14))
            return sub_140594770(rdx_3 + 8)

return result
