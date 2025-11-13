// 函数: sub_1408a0e90
// 地址: 0x1408a0e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] == arg2)
    return 

if (arg2 u> 0x7fffffffffffffff)
    stdext::threads::_Throw_lock_error()
    noreturn

int64_t rcx = arg2 * 2
void* const rax

if (rcx u>= 0x1000)
    if (rcx + 0x27 u<= rcx)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int64_t rax_2 = j_sub_140a82f30(rcx + 0x27)
    
    if (rax_2 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rax = (rax_2 + 0x27) & 0xffffffffffffffe0
    *(rax - 8) = rax_2
else if (rcx == 0)
    rax = nullptr
else
    rax = j_sub_140a82f30(rcx)

void* rcx_4 = *arg1
int64_t rdx = arg1[1]
arg1[1] = arg2
*arg1 = rax

if (rcx_4 == 0)
    return 

if (rdx * 2 u< 0x1000)
    j_sub_140a74f90(rcx_4)
    return 

void* r8_1 = *(rcx_4 - 8)

if (rcx_4 - r8_1 - 8 u> 0x1f)
    _invalid_parameter_noinfo_noreturn()
    noreturn

j_sub_140a74f90(r8_1)
