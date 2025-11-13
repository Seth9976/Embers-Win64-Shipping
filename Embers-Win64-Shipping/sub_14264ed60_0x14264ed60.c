// 函数: sub_14264ed60
// 地址: 0x14264ed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x20)
uint64_t result = sub_140d3c6e0(rbx + 0xc0)
uint64_t result_1 = result

if (result != 0)
    int32_t rdx = *(rbx + 0xc8)
    result.b = 0
    int32_t rbp_2 = *(rbx + 0x1c) + *(rbx + 0x2c)
    
    if ((rdx.b & 5) == 1)
        sub_140756d20(arg1 + 0x440, result_1, rbx)
        *(rbx + 0xc8) &= 0xfffffffe
        result.b = 1
        rdx = *(rbx + 0xc8)
    
    if (((rdx u>> 1).b & 1) != 0)
        void* rax_1 = sub_140d21950(result_1, sub_14254cd20())
        int64_t r8_2 = *rax_1
        (*(r8_2 + 0x10))(rax_1, rbx, r8_2)
        *(rbx + 0xc8) &= 0xfffffffd
    label_14264ee00:
        
        if (sub_141ded450(rbx) == 0)
            bool cond:0_1 = *(rbx + 0x1c) == 0
            *(rbx + 0x18) = 0
            
            if (not(cond:0_1))
                sub_1405c5510(rbx + 0x10, 0)
        else
            sub_141df0090(rbx)
    else if (result.b != 0)
        goto label_14264ee00
    
    result = zx.q(*(rbx + 0x1c) - rbp_2 + *(rbx + 0x2c))
    *(arg1 + 0x4a8) += result.d

return result
