// 函数: sub_140cf1130
// 地址: 0x140cf1130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (not(test_bit(zx.q(rcx[8].d), 9)))
    (*(*rcx + 0xf0))()
else
    memset(arg2, 0, sx.q(*(rcx + 0x3c) * rcx[7].d))

int64_t rdx = arg1[2]
int64_t* rcx_2 = *arg1

if (arg2 != rdx)
    if (not(test_bit(zx.q(rcx_2[8].d), 0x1e)))
        (*(*rcx_2 + 0xb0))(rcx_2, arg2, rdx, 1)
    else
        memcpy(arg2, rdx, *(rcx_2 + 0x3c))

int64_t* rcx_4 = arg1[1]

if (not(test_bit(zx.q(rcx_4[8].d), 9)))
    jump(*(*rcx_4 + 0xf0))

return memset(arg3, 0, sx.q(*(rcx_4 + 0x3c) * rcx_4[7].d)) __tailcall
