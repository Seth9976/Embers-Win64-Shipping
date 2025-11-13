// 函数: sub_142788fc0
// 地址: 0x142788fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int64_t r11 = sx.q(arg3)
int64_t rbx = sx.q(arg2)
int32_t rdi = *(r10 + 0x38)
void* const rcx_2

if (rdi == *(r10 + 0x64))
labelid_18:
    rcx_2 = nullptr
else
    void* rcx = *(r10 + 0x70)
    void* r9_1 = r10 + 0x68
    
    if (rcx != 0)
        r9_1 = rcx
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(r10 + 0x78)) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_142789030:
        rcx_2 = nullptr
    else
        int64_t r8 = *(r10 + 0x30)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_1) * 3
            rcx_2 = r8 + (rdx_3 << 3)
            
            if (*(r8 + (rdx_3 << 3)) == rbx.d)
                break
            
            rax_1 = *(rcx_2 + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_142789030_1
        
        if (rax_1 == 0xffffffff)
        label_142789030_1:
            rcx_2 = nullptr

void* const rcx_5

if (rdi - *(r10 + 0x64) == 0)
labelid_8:
    rcx_5 = nullptr
else
    void* rcx_3 = *(r10 + 0x70)
    void* r8_1 = r10 + 0x68
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_2 = *(r8_1 + (((sx.q(*(r10 + 0x78)) - 1) & r11) << 2))
    
    if (rax_2 == 0xffffffff)
    label_142789080:
        rcx_5 = nullptr
    else
        int64_t r8_2 = *(r10 + 0x30)
        
        while (true)
            int64_t rdx_7 = sx.q(rax_2) * 3
            rcx_5 = r8_2 + (rdx_7 << 3)
            
            if (*(r8_2 + (rdx_7 << 3)) == r11.d)
                break
            
            rax_2 = *(rcx_5 + 0x10)
            
            if (rax_2 == 0xffffffff)
                goto label_142789080_1
        
        if (rax_2 == 0xffffffff)
        label_142789080_1:
            rcx_5 = nullptr

int32_t rcx_6 = *(*(rcx_5 + 8) + 0xb0)
void* result

if (*(*(rcx_2 + 8) + 0xb0) s<= 0)
    if (rcx_6 s> 0)
        result.b = 0
        return result
else if (rcx_6 s<= 0)
    result.b = 1
    return result

result.b = rbx.d s< r11.d
return result
