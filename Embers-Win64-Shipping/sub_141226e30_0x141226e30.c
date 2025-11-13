// 函数: sub_141226e30
// 地址: 0x141226e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x19)

if (arg4 != 0 && arg2 s< arg4[1].d)
    void* rax_1 = *arg4
    int64_t rsi_1 = sx.q(arg2)
    void* rbp_1 = rsi_1 * 0xe8
    int64_t* rdx_1 = rax_1 + 0x28 + rbp_1
    
    if (*rdx_1 != 0)
        *arg1 = sub_1410fccd0(arg3, rdx_1, u"External", 0)
        rax_1 = *arg4
    
    int64_t* rdx_3 = rbp_1 + 0x48 + rax_1
    
    if (*rdx_3 != 0)
        arg1[1] = sub_1410fccd0(arg3, rdx_3, u"External", 0)
    
    arg1[2] = rsi_1 * 0x130 + arg4[2] + 0x40

return arg1
