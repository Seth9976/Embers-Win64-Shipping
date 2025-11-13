// 函数: sub_140592d30
// 地址: 0x140592d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = nullptr
int128_t* rdi = arg2
arg1[1].q = 0
int64_t* result = arg1
*(arg1 + 0x18) = 0
int64_t rbp = arg2[2]

if (arg2[3] u>= 0x10)
    rdi = *arg2

int64_t rsi

if (rbp u>= 0x10)
    rsi = rbp | 0xf
    
    if (rsi u> 0x7fffffffffffffff)
        rsi = 0x7fffffffffffffff
    
    if (rsi + 1 u>= 0x1000)
        if (rsi + 0x28 u<= rsi + 1)
            stdext::threads::_Throw_lock_error()
            noreturn
        
        int64_t rax_2 = j_sub_140a82f30(rsi + 0x28)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(rax - 8) = rax_2
    else if (rsi != -1)
        rax = j_sub_140a82f30(rsi + 1)
    
    *result = rax
    memcpy(rax, rdi, rbp.d + 1)
else
    rsi = 0xf
    *arg1 = *rdi

result[2] = rbp
result[3] = rsi
return result
