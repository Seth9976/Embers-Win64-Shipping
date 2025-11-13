// 函数: sub_142411b20
// 地址: 0x142411b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x2b4) & 1) == 0)
    sub_142403b00(arg1)

int64_t* rcx_4

if (*(arg1 + 0x1c8) == *(arg1 + 0x1f4))
label_142411bbe:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x1f8
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x208)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_142411bbe_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(rax_4) << 6) + *(arg1 + 0x1c0)
            
            if (*rcx_4 == arg2)
                break
            
            rax_4 = rcx_4[7].d
            
            if (rax_4 == 0xffffffff)
                goto label_142411bbe_2
        
        if (rax_4 == 0xffffffff)
        label_142411bbe_2:
            rcx_4 = nullptr

void* result = &rcx_4[1]

if (rcx_4 == 0)
    result = nullptr

if (result != 0)
    return result

return &data_143f5bda8
