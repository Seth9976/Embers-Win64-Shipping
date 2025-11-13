// 函数: sub_142997610
// 地址: 0x142997610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    int64_t rax_1
    int64_t rdx
    rdx:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rcx)
    int64_t rdx_1 = rdx s>> 1
    
    if ((rdx_1 + (rdx_1 u>> 0x3f)) * 0xc u>= 0x1000)
        void* r8 = *(rcx - 8)
        
        if (rcx - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8
    
    j_sub_140a74f90(rcx)

*arg1 = arg2
arg1[1] = arg2 + arg3 * 0xc
int64_t result = arg4 * 3
arg1[2] = arg2 + (result << 2)
return result
