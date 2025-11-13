// 函数: sub_140591ee0
// 地址: 0x140591ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void** var_18 = arg2
int32_t var_50 = arg9
int64_t var_48 = 0
int128_t var_38 = arg8.o
int64_t var_28 = var_48
sub_140591d00(arg1, arg2, arg3, arg4, arg5, arg6, arg7, &var_38)
int64_t rdx = arg2[3]

if (rdx u>= 8)
    void* rcx = *arg2
    
    if ((rdx << 1) + 2 u>= 0x1000)
        void* r8 = *(rcx - 8)
        
        if (rcx - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8
    
    j_sub_140a74f90(rcx)

arg2[2] = 0
arg2[3] = 7
*arg2 = nullptr
__security_check_cookie(rax_1 ^ &var_98)
return 0
