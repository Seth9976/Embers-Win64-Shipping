// 函数: sub_1429a8f10
// 地址: 0x1429a8f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0)
    return 

int64_t rax_1
int64_t rdx_3
rdx_3:rax_1 = muls.dp.q(0x4924924924924925, arg1[2] - rcx)
int64_t rdx_4 = rdx_3 s>> 4

if ((rdx_4 + (rdx_4 u>> 0x3f)) * 0x38 u>= 0x1000)
    void* r8_1 = *(rcx - 8)
    
    if (rcx - r8_1 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx = r8_1

j_sub_140a74f90(rcx)
__builtin_memset(arg1, 0, 0x18)
