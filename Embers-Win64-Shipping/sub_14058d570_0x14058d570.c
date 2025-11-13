// 函数: sub_14058d570
// 地址: 0x14058d570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0)
    return 

sub_14058d8f0(rcx, arg1[1])
void* rcx_1 = *arg1

if (((arg1[2] - rcx_1) s>> 3) * 8 u>= 0x1000)
    void* r8_1 = *(rcx_1 - 8)
    
    if (rcx_1 - r8_1 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx_1 = r8_1

j_sub_140a74f90(rcx_1)
__builtin_memset(arg1, 0, 0x18)
