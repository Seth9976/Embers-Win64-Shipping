// 函数: sub_140f012d0
// 地址: 0x140f012d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*arg3)
int32_t r14 = arg3[1]

if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x20))
    *arg2 = 0xffffffff
    *(arg2 + 4) = 0
    arg2[1].d = 0xffffffff
    *(arg2 + 0xc) = 0
    return arg2

int64_t* rbx_1 = rsi * 0x70 + *(arg1 + 0x18)
int64_t* rcx = *(arg1 + 0xe0)
(*(*rcx + 0x20))(rcx, *rbx_1)
int64_t* rcx_1 = *(arg1 + 0xe0)
int32_t r8 = *(*rbx_1 + 8)
int64_t r9 = *rcx_1
int32_t rax_2 = r8 - 1

if (r8 == 0)
    rax_2 = 0

int32_t rax_3

if (r14 s>= rax_2)
    rax_3 = (*(r9 + 0x40))(rcx_1)
else
    rax_3 = (*(r9 + 0x60))(rcx_1, zx.q(r14))

int64_t* rcx_2 = *(arg1 + 0xe0)
int32_t rax_5 = (*(*rcx_2 + 0x48))(rcx_2)
int64_t* rcx_3 = *(arg1 + 0xe0)
int64_t rdx_2 = *rcx_3
(*(rdx_2 + 0x28))(rcx_3, rdx_2)

if (rax_3 == rax_5 || rax_5 == 0xffffffff)
    *arg2 = 0xffffffff
    *(arg2 + 4) = 0
    arg2[1].d = 0xffffffff
    *(arg2 + 0xc) = 0
else
    int32_t arg_1c = rax_5
    *arg2 = rsi.d.q
    int32_t arg_24 = rax_3
    arg2[1] = rsi.d.q

return arg2
