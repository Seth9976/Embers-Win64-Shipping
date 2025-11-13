// 函数: sub_14216a870
// 地址: 0x14216a870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int64_t* rcx_4

if (*(arg1 + 0x1b0) == *(arg1 + 0x1dc))
label_14216a8fe:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x1e0
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x1f0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14216a8fe_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = sx.q(rax_4) * 0x38 + *(arg1 + 0x1a8)
            
            if (*rcx_4 == rbx)
                break
            
            rax_4 = rcx_4[6].d
            
            if (rax_4 == 0xffffffff)
                goto label_14216a8fe_2
        
        if (rax_4 == 0xffffffff)
        label_14216a8fe_2:
            rcx_4 = nullptr

int64_t* rsi = rcx_4[3]
void* rax_5 = sub_140cde0b0()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(rax_5, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

return sub_140d2dfc0(rsi, rax_5, 0, 0, 0, 0, 0, 0, 0)
