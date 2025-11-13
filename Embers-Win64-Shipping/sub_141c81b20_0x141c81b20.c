// 函数: sub_141c81b20
// 地址: 0x141c81b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4[1]
int64_t rax = *arg4
int128_t zmm0 = *arg3

if (rdi != 0)
    *(rdi + 0xc) += 1

arg1[1] = arg2
*arg1 = &data_14320fa80
*(arg1 + 0x10) = zmm0
arg1[4] = rax
arg1[5] = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1

arg1[6] = arg5
arg1[7] = sub_140a387b0()

if (rdi != 0)
    int32_t rax_3 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rax_3 == 1)
        (*(*rdi + 8))(rdi, 1)

*arg1 = &data_14320fad8
int64_t* rcx_1 = arg4[1]

if (rcx_1 != 0)
    int32_t rsi_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_1 != 0)
        (*(*rcx_1 + 8))(rcx_1, zx.q(rsi_1))

return arg1
