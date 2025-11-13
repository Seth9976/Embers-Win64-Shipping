// 函数: sub_140ceebd0
// 地址: 0x140ceebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *arg2
uint32_t result
result.b = not.b(*(arg1 + 0x30))
void* r8 = *(arg1 + 0x10)
bool c_1

if ((result.b & 1) != 0)
    if (r9 s>= 0 && r9 s< *(r8 + 0x28))
        void* rax_4 = *(r8 + 0x20)
        void* r8_4 = r8 + 0x10
        
        if (rax_4 != 0)
            r8_4 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9)
        c_1 = test_bit(*(r8_4 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9 & 0x1f)
    label_140ceec55:
        
        if (c_1)
            result.b = 1
            return result
else if (r9 s>= 0 && r9 s< *(r8 + 0x18))
    void* r10_1 = *(r8 + 0x10)
    
    if ((r10_1.b & 1) != 0)
        r10_1 = (r10_1 s>> 1) + r8 + 0x10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9)
    c_1 = test_bit(*(r10_1 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), r9 & 0x1f)
    goto label_140ceec55
result.b = 0
return result
