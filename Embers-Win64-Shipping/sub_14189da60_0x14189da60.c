// 函数: sub_14189da60
// 地址: 0x14189da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = *arg2
void* rax_1 = arg2[1]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

__builtin_memset(&arg1[4], 0, 0x14)
*(arg1 + 0x34) = 2
int64_t* rdi = arg2[1]

if (rdi == 0)
    return arg1

rdi[1].d -= 1

if (rdi[1].d == 1)
    (**rdi)(rdi)
    int32_t rsi_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rdi + 8))(rdi, zx.q(rsi_1))

return arg1
