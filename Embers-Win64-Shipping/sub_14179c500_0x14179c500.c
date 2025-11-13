// 函数: sub_14179c500
// 地址: 0x14179c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
sub_140865c40(arg2, &arg_10, arg1)
int64_t rax = sx.q(arg_10)
void* rsi = nullptr
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *arg2 + rax * 0x18

int32_t* result = rdx_1 + 8

if (rdx_1 == 0)
    result = nullptr

if (result == 0)
    return result

int32_t rdx_2 = arg3[1].d
int64_t rbp_1 = sx.q(*result)
int32_t rax_4 = rdx_2 - rbp_1.d - 1

if (rax_4 s>= 1)
    rax_4 = 1

if (rax_4 != 0)
    int64_t rcx_1 = *arg3
    memcpy(rcx_1 + (rbp_1 << 3), rcx_1 + (sx.q(rdx_2 - rax_4) << 3), rax_4 << 3)
    rdx_2 = arg3[1].d

arg3[1].d = rdx_2 - 1
sub_1405c53d0(arg3)

if (rbp_1.d s< arg3[1].d)
    sub_140865c40(arg2, &arg_10, *(*arg3 + (rbp_1 << 3)))
    int64_t rax_7 = sx.q(arg_10)
    
    if (rax_7.d != 0xffffffff)
        rsi = *arg2 + rax_7 * 0x18
    
    *(rsi + 8) = rbp_1.d

return sub_140868c90(arg2, arg1)
