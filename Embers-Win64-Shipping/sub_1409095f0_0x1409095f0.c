// 函数: sub_1409095f0
// 地址: 0x1409095f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0)
    return 

sub_1409091b0(rcx, arg1[1])
void* rcx_1 = *arg1

if (((arg1[2] - rcx_1) & 0xffffffffffffffe0) u>= 0x1000)
    void* r8_2 = *(rcx_1 - 8)
    
    if (rcx_1 - r8_2 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx_1 = r8_2

j_sub_140a74f90(rcx_1)
__builtin_memset(arg1, 0, 0x18)
