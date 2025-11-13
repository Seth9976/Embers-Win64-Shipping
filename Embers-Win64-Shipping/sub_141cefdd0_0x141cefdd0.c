// 函数: sub_141cefdd0
// 地址: 0x141cefdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rdi_1 = sx.q(arg2)

if (rdi_1.d s>= *(arg1 + 0x68))
    return 

void* r8 = arg1 + 0x70
void* rax_1 = *(r8 + 0x10)

if (rax_1 != 0)
    r8 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rdi_1.d)

if (not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rdi_1.d & 0x1f))
        || sub_141cdf960(arg1 + 0x1d0, data_143f360f0).b == 0)
    return 

int64_t rbx_1 = data_143f360f0
void* const rcx_6

if (*(arg1 + 0x1d8) == *(arg1 + 0x204))
label_141cefec0:
    rcx_6 = nullptr
else
    int32_t rax_8 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_1 = arg1 + 0x208
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    int32_t rax_10 = *(r8_1 + (((sx.q(*(arg1 + 0x218)) - 1) & sx.q(rax_8)) << 2))
    
    if (rax_10 == 0xffffffff)
    label_141cefec0_1:
        rcx_6 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x1d0)
        
        while (true)
            int64_t rdx_7 = sx.q(rax_10) * 3
            rcx_6 = r8_2 + (rdx_7 << 3)
            
            if (*(r8_2 + (rdx_7 << 3)) == rbx_1)
                break
            
            rax_10 = *(rcx_6 + 0x10)
            
            if (rax_10 == 0xffffffff)
                goto label_141cefec0_2
        
        if (rax_10 == 0xffffffff)
        label_141cefec0_2:
            rcx_6 = nullptr

*(*(*(*(rcx_6 + 8) + 0x18) + sx.q(arg4) * 0x10) + (rdi_1 << 3)) = arg3
