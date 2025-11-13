// 函数: sub_1418b3f50
// 地址: 0x1418b3f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void arg_10
int64_t rbx = *sub_140b58260(&arg_10, rdx, 1)
int64_t* rcx_5

if (*(arg1 + 0x168) == *(arg1 + 0x194))
label_1418b3ffe:
    rcx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x198
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x1a8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1418b3ffe_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_5) * 0x38 + *(arg1 + 0x160)
            
            if (*rcx_5 == rbx)
                break
            
            rax_5 = rcx_5[6].d
            
            if (rax_5 == 0xffffffff)
                goto label_1418b3ffe_2
        
        if (rax_5 == 0xffffffff)
        label_1418b3ffe_2:
            rcx_5 = nullptr

if (rcx_5 == 0)
    return nullptr

return &rcx_5[1]
