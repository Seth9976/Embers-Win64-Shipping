// 函数: sub_141fa9570
// 地址: 0x141fa9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140d3a3a0(&arg_8, arg2)
void* r10 = *(arg1 + 0x88)
void* const r9_2

if (*(r10 + 0x1378) == *(r10 + 0x13a4))
labelid_c:
    r9_2 = nullptr
else
    int64_t rdx = arg_8
    void* r9_1 = r10 + 0x13a8
    void* rcx_1 = *(r9_1 + 8)
    uint32_t r11_2 = (rdx u>> 0x20).d
    
    if (rcx_1 != 0)
        r9_1 = rcx_1
    
    int32_t rax_4 = *(r9_1 + (((sx.q(r11_2) ^ sx.q(rdx.d)) & (sx.q(*(r10 + 0x13b8)) - 1)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141fa961c:
        r9_2 = nullptr
    else
        int64_t r10_1 = *(r10 + 0x1370)
        
        while (true)
            int64_t r8_4 = sx.q(rax_4) * 3
            int64_t rcx_3 = *(r10_1 + (r8_4 << 3))
            r9_2 = r10_1 + (r8_4 << 3)
            
            if (rcx_3.d == rdx.d && (rcx_3 u>> 0x20).d == r11_2)
                break
            
            rax_4 = *(r9_2 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141fa961c_1
        
        if (rax_4 == 0xffffffff)
        label_141fa961c_1:
            r9_2 = nullptr

void* result = r9_2 + 8

if (r9_2 == 0)
    result = nullptr

if (result != 0)
    void* rcx_5 = *result
    
    if (rcx_5 != 0)
        int32_t rbx_1 = *(rcx_5 + 0x78)
        int64_t rsi_1 = sx.q(*(arg1 + 0xb18))
        int32_t rax_5 = (rsi_1 + 1).d
        *(arg1 + 0xb18) = rax_5
        
        if (rax_5 s> *(arg1 + 0xb1c))
            sub_1405a4cf0(arg1 + 0xb10)
        
        result = *(arg1 + 0xb10)
        *(result + (rsi_1 << 2)) = rbx_1

return result
