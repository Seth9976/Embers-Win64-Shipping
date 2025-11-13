// 函数: sub_142a97410
// 地址: 0x142a97410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (arg2 s< 0)
    (*(*arg1 + 0x48))()
    int64_t rax_1
    rax_1.b = 0
    return rax_1

sub_142aeacd0(&arg1[0x29], rdi)
int32_t rax_2
int512_t zmm0
rax_2, zmm0 = sub_142aea6a0(&arg1[0x29])
void* rcx_2 = arg1[0x3d]
int32_t arg_10 = 0
int64_t rsi
rsi.b = 0
char rax_3 = sub_142b10120(rcx_2, rax_2)
char rax_4

if (rax_3 == 0)
    rax_4, zmm0 = sub_142b0f7d0(arg1[0x3d], rax_2, &arg_10, zmm0)

if (rax_3 != 0 || rax_4 != 0)
    rsi.b = sub_142b0ef00(arg1[0x3d]) == rdi.d

if ((rax_3 == 0 && rax_4 == 0) || rsi.b == 0)
    int64_t rdx_4 = *arg1
    (*(rdx_4 + 0x68))(arg1, rdx_4)
else if (rax_2 s< rdi.d && sub_142aea370(&arg1[0x29], rdi, zmm0) == 0xffffffff)
    uint32_t rax_6
    rax_6.b = 0
    return rax_6

return zx.d(rsi.b)
