// 函数: sub_140a208a0
// 地址: 0x140a208a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[6].d)
void* rsi = &arg1[1]
int32_t rax = (rbp + 1).d
int128_t zmm6
zmm6.q = fconvert.d(arg4.d)
zmm6.q = zmm6.q f+ *arg1
*(rsi + 0x28) = rax

if (rax s> *(rsi + 0x2c))
    sub_140a30f00(rsi, rbp.d)

void* rax_1 = *(rsi + 0x20)

if (rax_1 != 0)
    rsi = rax_1

int64_t rax_3 = rbp << 5
void* rdx_2 = rsi + 0x10 + rax_3
*(rsi + rax_3) = zmm6.q
*(rsi + rax_3 + 8) = arg4.d
*rdx_2 = 0
*(rdx_2 + 8) = 0

if (arg3 != rdx_2 && arg3[1].d != 0)
    int64_t* rcx_1 = *arg3
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

*arg2 = 0

if (arg3[1].d != 0)
    int64_t* rcx_2 = *arg3
    void arg_8
    
    if (rcx_2 != 0)
        *arg2 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)

return arg2
