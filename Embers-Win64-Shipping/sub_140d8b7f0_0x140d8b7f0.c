// 函数: sub_140d8b7f0
// 地址: 0x140d8b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result

if ((arg2[0xa].b & 1) == 0)
    result = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
    void* rcx = &result[8]
    
    if (rcx u> *(arg1 + 0x20))
        sub_140b0e3d0(arg1 + 0x18, 0x48)
        result = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
        rcx = &result[8]
    
    *(arg1 + 0x18) = rcx
    result[1] = 0
    result[2] = 0
    result[7] = 0
else
    result = j_sub_140a82f30(0x40)
    
    if (result == 0)
        *arg2 = 0
        return 0

*result = &data_142ec2848
__builtin_memset(&result[3], 0, 0x20)
*arg2 = result
return result
