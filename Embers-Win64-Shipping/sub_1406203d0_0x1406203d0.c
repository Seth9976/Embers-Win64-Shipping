// 函数: sub_1406203d0
// 地址: 0x1406203d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint32_t rdi = zx.d(arg2)
int32_t result = (*(*(arg1 + 0xc0) + 0x10))(arg1 + 0xc0)

if (result u< 1 || rdi u>= result)
    result.b = 0
else if ((*(*(arg1 + 0xc0) + 0x28))(arg1 + 0xc0).b != 0)
    result.b = 0
else
    int64_t rax_4 = *(arg1 + 0xc0)
    int64_t var_20_1 = 0xf
    int64_t var_28_1 = 0xd
    void* var_38
    __builtin_strncpy(&var_38, "RtMidi Output", 0xe)
    (*rax_4)(arg1 + 0xc0, zx.q(rdi), &var_38)
    
    if (var_20_1 u>= 0x10)
        void* rcx_3 = var_38
        void* rax_5 = rcx_3
        
        if (var_20_1 + 1 u>= 0x1000)
            rcx_3 = *(rcx_3 - 8)
            
            if (rax_5 - rcx_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_3)
    
    result = (*(*(arg1 + 0xc0) + 0x28))(arg1 + 0xc0)

__security_check_cookie(rax_1 ^ &var_58)
return result
