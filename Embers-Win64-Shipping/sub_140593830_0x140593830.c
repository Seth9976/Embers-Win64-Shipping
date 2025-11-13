// 函数: sub_140593830
// 地址: 0x140593830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t rsi = arg2[2]

if (arg2[3] u>= 0x10)
    rbx = *arg2

if (rsi u< 0x10)
    *arg1 = *rbx
    arg1[1].q = rsi
    *(arg1 + 0x18) = 0xf
    return 

int64_t rbp_1 = rsi | 0xf

if (rbp_1 u> 0x7fffffffffffffff)
    rbp_1 = 0x7fffffffffffffff

void* const rax_3

if (rbp_1 + 1 u>= 0x1000)
    if (rbp_1 + 0x28 u<= rbp_1 + 1)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int64_t rax_1 = j_sub_140a82f30(rbp_1 + 0x28)
    
    if (rax_1 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rax_3 = (rax_1 + 0x27) & 0xffffffffffffffe0
    *(rax_3 - 8) = rax_1
else if (rbp_1 == -1)
    rax_3 = nullptr
else
    rax_3 = j_sub_140a82f30(rbp_1 + 1)

*arg1 = rax_3
memcpy(rax_3, rbx, rsi.d + 1)
arg1[1].q = rsi
*(arg1 + 0x18) = rbp_1
