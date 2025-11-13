// 函数: sub_1407e9420
// 地址: 0x1407e9420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xd0)
int64_t* rcx_5

if (result == *(arg1 + 0xfc))
label_1407e94a7:
    rcx_5 = nullptr
else
    int64_t r8 = *arg3
    void* r10_1 = arg1 + 0x100
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    result = *(r10_1 + ((sx.q((r8 u>> 0x20).d * 0x17 + r8.d) & (sx.q(*(arg1 + 0x110)) - 1)) << 2))
    
    if (result == 0xffffffff)
    label_1407e94a7_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(result) * 0xc0 + *(arg1 + 0xc8)
            
            if (*rcx_5 == r8)
                break
            
            result = rcx_5[0x16].d
            
            if (result == 0xffffffff)
                goto label_1407e94a7_2
        
        if (result == 0xffffffff)
        label_1407e94a7_2:
            rcx_5 = nullptr

void* rdx_2 = &rcx_5[2]

if (rcx_5 == 0)
    rdx_2 = nullptr

if (rdx_2 != 0)
    *(rdx_2 + 8) = *arg2
    result = *(arg2 + 0x90)
    *(rdx_2 + 0x90) = result
    *(rdx_2 + 0x10) = *(arg2 + 0x10)
    *(rdx_2 + 0x20) = *(arg2 + 0x20)
    *(rdx_2 + 0x30) = *(arg2 + 0x30)
    *(rdx_2 + 0x40) = *(arg2 + 0x40)
    *(rdx_2 + 0x50) = *(arg2 + 0x50)
    *(rdx_2 + 0x60) = *(arg2 + 0x60)
    *(rdx_2 + 0x70) = *(arg2 + 0x70)
    *(rdx_2 + 0x80) = *(arg2 + 0x80)

return result
