// 函数: sub_142995cd0
// 地址: 0x142995cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t i_1 = arg2
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0xaaaaaaaaaaaaaaa)
        sub_1427c7670()
        noreturn
    
    int64_t rax_1 = sub_142997b50(arg1, arg2)
    *arg1 = rax_1
    arg1[1] = rax_1
    int64_t rax_2 = *arg1
    arg1[2] = rax_2 + i_1 * 0x18
    int64_t rbx_1 = rax_2
    
    if (i_1 != 0)
        int64_t i
        
        do
            __builtin_memset(rbx_1, 0, 0x18)
            rbx_1 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1429914c0(rbx_1, rbx_1)
    arg1[1] = rbx_1

return arg1
