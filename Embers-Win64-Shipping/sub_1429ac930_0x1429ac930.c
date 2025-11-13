// 函数: sub_1429ac930
// 地址: 0x1429ac930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a8 = -2
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* var_1b0 = arg1
int32_t var_1b8 = 0
void* r8 = *(arg1 + 8)
int64_t r10 = sx.q(arg5)

if (r10.d s< *(r8 + 0xa4) && r10.d s>= 0)
    int64_t r9 = sx.q(arg6)
    
    if (r9.d s< *(r8 + 0xa8) && r9.d s>= 0 && arg3 s< *(*(r8 + 0xb0) + (r10 << 2)) && arg3 s>= 0
            && arg4 s< *(*(r8 + 0xb8) + (r9 << 2)) && arg4 s>= 0)
        sub_1429bd3c0(arg2, r8 + 0x68, *(r8 + 0x94), *(r8 + 0x98), *(r8 + 0x9c), *(r8 + 0xa0), 
            arg3, arg4, r10.d, r9.d)
        __security_check_cookie(rax_1 ^ &var_208)
        return arg2

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_14297d3f0(&exceptionObject, "Arguments not in valid range.")
_CxxThrowException(&exceptionObject, &data_143946538)
noreturn
