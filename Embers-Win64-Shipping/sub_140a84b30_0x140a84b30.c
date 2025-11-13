// 函数: sub_140a84b30
// 地址: 0x140a84b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0

if (arg2 != 0 && (*(*arg1 + 0x40))(arg1, arg5, &arg_8) != 0)
    int64_t r8_1 = arg_8
    
    if (r8_1 != 0 && r8_1 u> arg3)
        memset(arg2 + arg3, 0xdd, r8_1 - arg3)

int64_t* rcx_1 = arg1[1]
int64_t result = (*(*rcx_1 + 0x20))(rcx_1, arg2, arg3, zx.q(arg4))

if (result == 0)
    return result

int64_t rax_4 = arg_8

if (rax_4 != 0 && rax_4 u< arg3)
    memset(result + rax_4, 0xcd, arg3 - rax_4)

return result
