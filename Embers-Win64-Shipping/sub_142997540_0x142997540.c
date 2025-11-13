// 函数: sub_142997540
// 地址: 0x142997540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx != 0)
    sub_142991430(rcx, arg1[1])
    void* rcx_1 = *arg1
    int64_t rax_1
    int64_t rdx_1
    rdx_1:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rcx_1)
    int64_t rdx_2 = rdx_1 s>> 3
    
    if ((rdx_2 + (rdx_2 u>> 0x3f)) * 0x30 u>= 0x1000)
        void* r8_1 = *(rcx_1 - 8)
        
        if (rcx_1 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_1 = r8_1
    
    j_sub_140a74f90(rcx_1)

*arg1 = arg2
arg1[1] = arg3 * 0x30 + arg2
int64_t result = arg4 * 0x30 + arg2
arg1[2] = result
return result
