// 函数: sub_142829008
// 地址: 0x142829008
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
int64_t* rsi = *arg2
int64_t rbp = arg2[1]

if (rsi != rbp)
    int64_t rdi_3 = (rbp - rsi) s>> 5
    
    if (rdi_3 u> 0x7ffffffffffffff)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int128_t* rax_1 = sub_14058b9f0(rdi_3 << 5)
    *arg1 = rax_1
    arg1[1] = rax_1
    arg1[2] = &rax_1[rdi_3 * 2]
    void** arg_8 = arg1
    arg1[1] = sub_14068b4f0(rsi, rbp, rax_1)

return arg1
