// 函数: sub_14058d670
// 地址: 0x14058d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

int64_t rsi_1 = arg1[1]

if (rbx != rsi_1)
    do
        sub_14058d5f0(rbx)
        rbx = &rbx[3]
    while (rbx != rsi_1)
    
    rbx = *arg1

if (((arg1[2] - rbx) s>> 3) * 8 u>= 0x1000)
    int64_t* rax_5 = rbx[-1]
    
    if (rbx - rax_5 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx = rax_5

j_sub_140a74f90(rbx)
__builtin_memset(arg1, 0, 0x18)
