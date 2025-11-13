// 函数: sub_141b32810
// 地址: 0x141b32810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int128_t zmm6
result, zmm6 = sub_141a4fed0(arg1 + 0x18)

if (result != 0 && *(arg1 + 0x10) != 0)
    int32_t rdi_1 = *(arg1 + 8)
    int128_t var_18_1 = zmm6
    zmm6 = **(arg1 + 0x38)
    void var_38
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_38, &result[2], &result[7])
    int32_t rax = sub_141a50d70(&var_38, rdi_1)
    
    if (rax != 0xffffffff)
        *(sx.q(rax) * 0x1c + result[4]) = zmm6.d
    
    result = sub_141a689c0(result, rdi_1, arg2)

return result
