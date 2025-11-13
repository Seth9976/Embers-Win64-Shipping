// 函数: sub_1409cb370
// 地址: 0x1409cb370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9_1 = *(arg1 + 0x28)
int32_t result

if (arg2 s>= 0 && arg2 s< *(r9_1 + 0xe8))
    void* r9 = r9_1 + 0xf0
    void* rax = *(r9 + 0x10)
    
    if (rax != 0)
        r9 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    
    if (test_bit(*(r9 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
        result.b = 1
        return result

result.b = 0
return result
