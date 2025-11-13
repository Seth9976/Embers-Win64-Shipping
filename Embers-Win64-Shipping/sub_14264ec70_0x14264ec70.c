// 函数: sub_14264ec70
// 地址: 0x14264ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg2 + 0xc0)
uint64_t result_1 = result

if (result != 0)
    int32_t rdx = *(arg2 + 0xc8)
    result.b = 0
    int32_t rbp_2 = *(arg2 + 0x1c) + *(arg2 + 0x2c)
    
    if ((rdx.b & 5) == 1)
        sub_140756d20(arg1 + 0x440, result_1, arg2)
        *(arg2 + 0xc8) &= 0xfffffffe
        result.b = 1
        rdx = *(arg2 + 0xc8)
    
    if (((rdx u>> 1).b & 1) != 0)
        void* rax_1 = sub_140d21950(result_1, sub_14254cd20())
        int64_t r8_2 = *rax_1
        (*(r8_2 + 0x10))(rax_1, arg2, r8_2)
        *(arg2 + 0xc8) &= 0xfffffffd
    label_14264ed0f:
        
        if (sub_141ded450(arg2) == 0)
            bool cond:0_1 = *(arg2 + 0x1c) == 0
            *(arg2 + 0x18) = 0
            
            if (not(cond:0_1))
                sub_1405c5510(arg2 + 0x10, 0)
        else
            sub_141df0090(arg2)
    else if (result.b != 0)
        goto label_14264ed0f
    
    result = zx.q(*(arg2 + 0x1c) - rbp_2 + *(arg2 + 0x2c))
    *(arg1 + 0x4a8) += result.d

return result
