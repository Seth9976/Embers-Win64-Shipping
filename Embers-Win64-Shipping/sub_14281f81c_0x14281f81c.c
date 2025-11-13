// 函数: sub_14281f81c
// 地址: 0x14281f81c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
int32_t* rsi = *arg2
int64_t rbp = arg2[1]

if (rsi != rbp)
    int64_t rdi_3 = (rbp - rsi) s>> 5
    
    if (rdi_3 u> 0x7ffffffffffffff)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int32_t* rax_1 = sub_14058b9f0(rdi_3 << 5)
    *arg1 = rax_1
    arg1[1] = rax_1
    arg1[2] = &rax_1[rdi_3 * 8]
    void** arg_8 = arg1
    arg1[1] = sub_14281f7a8(rsi, rbp, rax_1)

return arg1
