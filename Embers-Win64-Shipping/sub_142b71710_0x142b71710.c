// 函数: sub_142b71710
// 地址: 0x142b71710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
int32_t rsi = arg2
int32_t var_24 = 0

if (arg4 == (*(*arg1 + 0x10))())
    int32_t rax_3
    int64_t r8
    rax_3, r8 = (*(*arg1 + 0x20))(arg1, zx.q(rsi))
    rsi += 1
    var_24 = rax_3
    
    if (rsi == arg3)
        r8.b = 1
        jump(*(*arg1 + 0x80))
    
    arg_8 = 1

uint64_t r9_1 = zx.q(arg4)
bool cond:0 = zx.d((*(*arg1 + 0x18))(arg1, zx.q(rsi), zx.q(arg4)))
    != zx.d((*(*arg1 + 0x18))(arg1, zx.q(arg3 - 1), zx.q(arg4)))
uint64_t rdx_4 = zx.q(rsi)
int64_t rax_9 = *arg1

if (cond:0)
    int32_t rax_19 = (*(rax_9 + 0x30))(arg1, rdx_4, zx.q(arg3), r9_1)
    sub_142b71480(arg1, rsi, arg3, arg4, rax_19)
    
    if (rax_19 - 1 s>= (*(*arg1 + 0x58))(arg1))
        (*(*arg1 + 0x70))(arg1, zx.q(rax_19 - 1))
else
    int32_t rax_10 = (*(rax_9 + 0x28))(arg1, rdx_4, zx.q(arg3 - 1), r9_1)
    int32_t var_28_1 = rax_10
    sub_142b71710(arg1, zx.q(rsi), zx.q(arg3), zx.q(rax_10))
    int64_t rdx_6 = *arg1
    int32_t i = rax_10 - arg4
    
    for (int32_t rax_11 = (*(rdx_6 + 0x60))(arg1, rdx_6); i s> rax_11; i -= rax_11)
        int32_t rax_13 = var_28_1 - rax_11
        var_28_1 = rax_13
        (*(*arg1 + 0x78))(arg1, zx.q(rsi), zx.q(rax_13), zx.q(rax_11))
        int64_t rdi_4 = *arg1
        (*(rdi_4 + 0x70))(arg1, zx.q((*(rdi_4 + 0x58))(arg1) - 1 + rax_11))
    
    (*(*arg1 + 0x78))(arg1, zx.q(rsi), zx.q(arg4), zx.q(i))
    (*(*arg1 + 0x58))(arg1)

jump(*(*arg1 + 0x88))
