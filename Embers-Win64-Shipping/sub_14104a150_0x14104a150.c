// 函数: sub_14104a150
// 地址: 0x14104a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

while (true)
    result = **(arg1 + 0x28)
    
    if (result == 0)
        break
    
    uint128_t zmm0 = *(result + 8)
    int64_t rcx = *(arg1 + 0x28)
    uint128_t zmm1 = *(result + 0x18)
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x20)
    *(arg1 + 0x28) = result
    int64_t* var_28_1 = zmm0.q
    *(result + 8) = var_48.o
    int64_t var_38
    *(result + 0x18) = var_38.o
    j_sub_140a74f90(rcx)
    
    if (_mm_bsrli_si128(zmm1, 8).d != 0)
        (*(*var_28_1 + 0x10))(var_28_1)
    else
        var_28_1[1].d -= 1
        
        if (var_28_1[1].d == 1 && var_28_1 != 0)
            (**var_28_1)(var_28_1, 1)

*(arg1 + 0x30) -= 1
return result
