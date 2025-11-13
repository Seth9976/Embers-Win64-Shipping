// 函数: sub_141d2fc10
// 地址: 0x141d2fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int128_t* result

if (rax u< 0x1000000)
    result = nullptr
else
    int32_t r9_2 = rax & 0xffffff
    
    if (r9_2 s>= *(arg2 + 0x528))
        result = nullptr
    else
        void* r8_1 = arg2 + 0x510
        void* rcx = *(r8_1 + 0x10)
        
        if (rcx != 0)
            r8_1 = rcx
        
        if (not(test_bit(*(r8_1 + (zx.q(r9_2) u>> 5 << 2)), r9_2 & 0x1f))
                || zx.d(*(*(arg2 + 0x500) + ((zx.q(rax) & 0xffffff) << 2) + 3)) != rax u>> 0x18)
            result = nullptr
        else
            result = (zx.q(rax) & 0xffffff) * 0x30 + *(arg2 + 0x530)

*result = *(arg1 + 8)
result[1] = *(arg1 + 0x18)
result[2] = *(arg1 + 0x28)
return result
