// 函数: sub_1423677a0
// 地址: 0x1423677a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*(arg1 + 0x40) == *(arg1 + 0x6c))
    sub_14236b660(arg1)

int32_t* rcx_4

if (*(arg1 + 0x40) == *(arg1 + 0x6c))
label_142367821:
    rcx_4 = nullptr
else
    void* rcx = *(arg1 + 0x78)
    void* r8_1 = arg1 + 0x70
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t rax_2 = *(r8_1 + (((sx.q(*(arg1 + 0x80)) - 1) & rdi) << 2))
    
    if (rax_2 == 0xffffffff)
    label_142367821_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = sx.q(rax_2) * 0x30 + *(arg1 + 0x38)
            
            if (*rcx_4 == rdi.d)
                break
            
            rax_2 = rcx_4[0xa]
            
            if (rax_2 == 0xffffffff)
                goto label_142367821_2
        
        if (rax_2 == 0xffffffff)
        label_142367821_2:
            rcx_4 = nullptr

void* result = &rcx_4[2]

if (rcx_4 == 0)
    result = nullptr

if (result != 0)
    return result

j_sub_140d2ee50(sub_140bdf730(), nullptr, u"/Script/Engine.ESoundGroup", 0)
int32_t* rcx_10

if (*(arg1 + 0x40) == *(arg1 + 0x6c))
label_142367891:
    rcx_10 = nullptr
else
    void* rax_5 = *(arg1 + 0x78)
    void* rcx_6 = arg1 + 0x70
    
    if (rax_5 != 0)
        rcx_6 = rax_5
    
    int32_t rax_6 = *rcx_6
    
    if (rax_6 == 0xffffffff)
    label_142367891_1:
        rcx_10 = nullptr
    else
        while (true)
            rcx_10 = sx.q(rax_6) * 0x30 + *(arg1 + 0x38)
            
            if (*rcx_10 == 0)
                break
            
            rax_6 = rcx_10[0xa]
            
            if (rax_6 == 0xffffffff)
                goto label_142367891_2
        
        if (rax_6 == 0xffffffff)
        label_142367891_2:
            rcx_10 = nullptr

return &rcx_10[2]
