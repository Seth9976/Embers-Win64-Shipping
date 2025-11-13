// 函数: sub_141925e50
// 地址: 0x141925e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3
void* rdi = arg2

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t rax_1 = sub_1405a4be0(arg1, arg3 + arg5, arg4)
uint64_t rbx_1 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(rdi + 8))
        int64_t r15_1 = *rdi
        *(rbx_1 + 8) = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405c4a90(rbx_1, rsi_1.d, 0)
            rax_1 = memcpy(*rbx_1, r15_1, (rsi_1 << 2).d)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 += 0x10
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
