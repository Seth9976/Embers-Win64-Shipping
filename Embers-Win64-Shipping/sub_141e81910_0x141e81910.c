// 函数: sub_141e81910
// 地址: 0x141e81910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = *(arg1 + 0x378); i != &i[sx.q(*(arg1 + 0x380))]; i = &i[1])
    if (*i == arg2)
        goto label_141e819a2

void arg_8

if (*sub_1408296b0(arg1 + 0x450, &arg_8, arg2) == 0xffffffff)
    int64_t* result = *(arg1 + 0x4b8)
    void* rdx_2 = &result[sx.q(*(arg1 + 0x4c0))]
    
    if (result == rdx_2)
        return result
    
    while (*result != arg2)
        result = &result[1]
        
        if (result == rdx_2)
            return result

label_141e819a2:
*(arg2 + 0x188) = zx.d(arg3)
int32_t temp0_1 = *(arg2 + 0x18c)
*(arg2 + 0x18c) = 0
return zx.q(temp0_1)
