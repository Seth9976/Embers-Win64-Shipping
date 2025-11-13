// 函数: sub_141ca2e10
// 地址: 0x141ca2e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(*arg1, 0) == 0

if ((arg1[1] != 0 | rdx) == 0)
    return 0

int64_t var_28
int64_t* rax_2 = sub_140b63b70(&arg1[8], &var_28)
int16_t* const rbx_1 = &data_142d40450
int16_t* rdi

if (rax_2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *rax_2

int64_t result_1 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rdi, 0)
int64_t rcx_3 = var_28
int64_t result = result_1

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (result == 0)
    int32_t arg_8
    sub_140cba1c0(&arg_8, *(arg1 + 0x20), 0)
    int32_t rcx_5
    rcx_5.b = sub_140b5b8a0(arg_8, 0) == 0
    
    if ((arg2 != result.d | rcx_5.b) != 0)
        int64_t var_18
        int16_t** rax_5 = sub_140b63b70(&arg_8, &var_18)
        
        if (rax_5[1].d != result.d)
            rbx_1 = *rax_5
        
        int64_t result_2 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rbx_1, 0)
        int64_t rcx_8 = var_18
        result = result_2
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)

return result
