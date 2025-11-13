// 函数: sub_14104b8d0
// 地址: 0x14104b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
AcquireSRWLockShared(arg1 + 0x100)
int32_t* rdx_5

if (*(arg1 + 0x110) == *(arg1 + 0x13c))
label_14104b95d:
    rdx_5 = nullptr
else
    void* r9_1 = arg1 + 0x140
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0x150)) - 1) & rsi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14104b95d_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_1) << 5) + *(arg1 + 0x108)
            
            if (*rdx_5 == rsi.d)
                break
            
            rax_1 = rdx_5[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14104b95d_2
        
        if (rax_1 == 0xffffffff)
        label_14104b95d_2:
            rdx_5 = nullptr

void* result = &rdx_5[2]

if (rdx_5 == 0)
    result = nullptr

ReleaseSRWLockShared(arg1 + 0x100)
return result
