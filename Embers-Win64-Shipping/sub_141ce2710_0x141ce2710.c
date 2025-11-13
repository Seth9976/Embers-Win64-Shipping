// 函数: sub_141ce2710
// 地址: 0x141ce2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rdi_1 = sx.q(arg2)

if (rdi_1.d s>= *(arg1 + 0x30))
    return 

void* rax_1 = *(arg1 + 0x48)
void* r9_1 = arg1 + 0x38

if (rax_1 != 0)
    r9_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rdi_1.d)

if (not(test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rdi_1.d & 0x1f))
        || sub_141cdf960(arg1 + 0x178, data_143f35cc8).b == 0)
    return 

int64_t rbx_1 = data_143f35cc8
void* const rcx_6

if (*(arg1 + 0x180) == *(arg1 + 0x1ac))
label_141ce27f1:
    rcx_6 = nullptr
else
    int32_t rax_8 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8 = arg1 + 0x1b0
    void* rcx_4 = *(r8 + 8)
    
    if (rcx_4 != 0)
        r8 = rcx_4
    
    int32_t rax_10 = *(r8 + (((sx.q(*(arg1 + 0x1c0)) - 1) & sx.q(rax_8)) << 2))
    
    if (rax_10 == 0xffffffff)
    label_141ce27f1_1:
        rcx_6 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x178)
        
        while (true)
            int64_t rdx_7 = sx.q(rax_10) * 3
            rcx_6 = r8_1 + (rdx_7 << 3)
            
            if (*(r8_1 + (rdx_7 << 3)) == rbx_1)
                break
            
            rax_10 = *(rcx_6 + 0x10)
            
            if (rax_10 == 0xffffffff)
                goto label_141ce27f1_2
        
        if (rax_10 == 0xffffffff)
        label_141ce27f1_2:
            rcx_6 = nullptr

int64_t rcx_7 = rdi_1 * 3
int64_t rax_12 = **(*(rcx_6 + 8) + 0x18)
*(rax_12 + (rcx_7 << 2)) = *arg3
*(rax_12 + (rcx_7 << 2) + 8) = arg3[1].d
