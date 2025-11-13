// 函数: sub_142997940
// 地址: 0x142997940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0)
    return 

sub_1429914c0(rcx, arg1[1])
void* rcx_1 = *arg1
int64_t rax_1
int64_t rdx_4
rdx_4:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rcx_1)
int64_t rdx_5 = rdx_4 s>> 2

if ((rdx_5 + (rdx_5 u>> 0x3f)) * 0x18 u>= 0x1000)
    void* r8_2 = *(rcx_1 - 8)
    
    if (rcx_1 - r8_2 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx_1 = r8_2

j_sub_140a74f90(rcx_1)
__builtin_memset(arg1, 0, 0x18)
