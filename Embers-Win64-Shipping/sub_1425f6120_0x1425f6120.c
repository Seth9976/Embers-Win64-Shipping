// 函数: sub_1425f6120
// 地址: 0x1425f6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t result = 0

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
else
    result = *(arg1 + 8)

if (result == 1)
    if (*(arg1 + 0x60) != 0 || *arg2 != result)
        goto label_1425f617b
    
    if (arg2[0xe].b != 0)
        *(arg1 + 0x60) = 1
    label_1425f617b:
        int32_t var_a8
        sub_1425f45b0(&var_a8, arg2)
        int32_t var_f8
        sub_1425f45b0(&var_f8, arg2)
        int32_t var_148_1 = var_f8
        int64_t var_f0
        int64_t var_140_1 = var_f0
        int64_t var_e8
        int64_t var_138_1 = var_e8
        int64_t var_120 = 0
        int32_t var_114
        __builtin_memset(&var_114, 0, 0x18)
        uint32_t count
        uint32_t count_1 = count
        int128_t var_e0
        int128_t var_130_1 = var_e0
        int64_t var_d0
        
        if (count != 0)
            sub_1405da9e0(&var_120, count, 0)
            rbx = var_120
            memcpy(rbx, var_d0, count)
        
        int64_t rax_3 = *(arg1 + 0x78)
        int64_t var_a0
        
        if (rax_3 != 0)
            int64_t var_a0_1 = var_a0 - rax_3
        result = sub_1425f63c0(arg1 + 0x18, &var_a8)
        
        if (rbx != 0)
            result = sub_140a74f90(rbx)
        
        if (var_d0 != 0)
            result = sub_140a74f90(var_d0)
        
        int64_t var_80
        
        if (var_80 != 0)
            return sub_140a74f90(var_80)

return result
