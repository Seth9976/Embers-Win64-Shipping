// 函数: sub_1405c5900
// 地址: 0x1405c5900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
void* result = __security_cookie ^ &var_1d8
void* result_1 = result

if (arg5 != 0)
    int32_t var_198 = 0xffffffff
    int32_t var_194_1 = 0
    int32_t var_1a8
    
    if (arg4 != 0)
        sub_140d3a3a0(&var_1a8, arg4)
        var_198.q = var_1a8.q
    
    sub_1405ba670(arg1, &var_1a8, &var_198)
    int64_t rax_2 = sx.q(var_1a8)
    void* const rax_4
    
    if (rax_2.d == 0xffffffff)
        rax_4 = nullptr
    else
        rax_4 = rax_2 * 0x148 + *arg1
    
    void* rdi_1 = rax_4 + 8
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 == 0)
        int64_t var_190
        sub_140d3a3a0(&var_190, arg4)
        int32_t var_ac_1 = 8
        int64_t var_b8_1 = 0
        int32_t var_b0_1 = 0
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        int64_t var_48_1 = var_190
        int32_t* var_188 = &var_198
        void var_178
        void* var_180_1 = &var_178
        int32_t var_5c_1 = 8
        sub_1405a7f00(arg1, &var_1a8, &var_188, nullptr)
        rdi_1 = *arg1 + sx.q(var_1a8) * 0x148 + 8
        sub_1405add40(&var_58)
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        if (var_b8_1 != 0)
            sub_140a74f90(var_b8_1)
    
    var_1a8.q = *arg6
    int32_t var_1a0_1 = arg6[1].d
    result = sub_141a59580(rdi_1, arg5, arg2, &var_1a8, arg3, arg1)

__security_check_cookie(result_1 ^ &var_1d8)
return result
