// 函数: sub_141ff4080
// 地址: 0x141ff4080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg3
void* rax_1 = arg3[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2].d = arg3[2].d
arg1[3].b = arg2
*(arg1 + 0x19) &= 0xfe
int64_t* rdi = arg3[1]

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
