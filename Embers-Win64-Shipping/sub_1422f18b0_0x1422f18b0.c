// 函数: sub_1422f18b0
// 地址: 0x1422f18b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t var_178
int64_t* rax_1 = (*(*arg1 + 0x298))(arg1, &var_178, zx.q(arg2))
int16_t* const rcx

if (rax_1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *rax_1

int32_t result = sub_140a54510(rcx, &data_142d40450)
int64_t rcx_1 = var_178
int64_t rdi
rdi.b = result == 0

if (rcx_1 != 0)
    result, arg5 = sub_140a74f90(rcx_1)

if (rdi.b == 0)
    int64_t var_188 = 0
    int64_t var_180_1 = 0
    int64_t arg_8 = 0
    void** const var_168
    memset(&var_168, 0, 0x90)
    sub_140b4c2a0(&var_168)
    int64_t var_d8_1 = 0
    var_168 = &data_142d6ad48
    int64_t* var_d0_1 = &var_188
    int64_t var_c8_1 = 0
    sub_140b552b0(&var_168, 1)
    var_168[0x1b](&var_168, 0)
    int64_t* var_160
    int32_t* rdx_2 = *var_160
    
    if (&rdx_2[1] u> var_160[1])
        int32_t* rdx_3 = &arg_20
        void** const* rcx_7 = &var_168
        char var_13f
        
        if ((var_13f & 0x20) != 0)
            sub_140b54070(rcx_7, rdx_3, arg5)
        else
            var_168[0x2a](rcx_7, rdx_3, 4)
    else
        arg_20 = *rdx_2
        *var_160 += 4
    
    void** var_b8
    sub_140b4c130(&var_b8, &var_168)
    char var_20_1 = 0
    var_b8 = &data_14325c860
    (*(*arg3 + 0xa0))(arg3, &var_b8)
    (*(*arg1 + 0x2d8))(arg1, zx.q(arg2), &var_188)
    sub_140b4cb40(&var_b8)
    sub_140b4cb40(&var_168)
    int64_t rcx_13 = var_188
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    result.b = 1
else
    result.b = 0

return result
