// 函数: sub_141af0440
// 地址: 0x141af0440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 8)
int32_t* rcx_6

if (r9[1].d == *(r9 + 0x34))
label_141af04d9:
    rcx_6 = nullptr
else
    int32_t rbx_1 = *(arg1 + 0x28)
    void* r8_1 = &r9[7]
    int64_t r10_1 = sx.q(*(arg1 + 0x2c))
    int64_t r11_1 = sx.q(*(arg1 + 0x24))
    void* rdx_1 = *(r8_1 + 8)
    
    if (rdx_1 != 0)
        r8_1 = rdx_1
    
    int32_t rax_5 = *(r8_1 + (((sx.q(not.d(rbx_1)) ^ r11_1 ^ r10_1) & (sx.q(r9[9].d) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141af04d9_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = (sx.q(rax_5) << 5) + *r9
            
            if (rcx_6[1] == rbx_1 && *rcx_6 == r11_1.d && rcx_6[2] == r10_1.d)
                break
            
            rax_5 = rcx_6[6]
            
            if (rax_5 == 0xffffffff)
                goto label_141af04d9_2
        
        if (rax_5 == 0xffffffff)
        label_141af04d9_2:
            rcx_6 = nullptr

void* rax_6 = &rcx_6[4]

if (rcx_6 == 0)
    rax_6 = nullptr

if (rax_6 != 0)
    return *rax_6

void*** result_2 = j_sub_140a82f30(0x10)
void*** result = result_2

if (result_2 == 0)
    result = nullptr
else
    *result = &data_142d40488
    result[1].d = 0xffffffff
    *(result + 0xc) = 0

int64_t* rcx_7 = *(arg1 + 8)
void*** result_1 = result
sub_1406f3ea0(rcx_7, arg1 + 0x24, &result_1)
void*** result_3 = result_1

if (result_3 != 0)
    void** r8_3 = *result_3
    (*r8_3)(result_3, 1, r8_3)

return result
