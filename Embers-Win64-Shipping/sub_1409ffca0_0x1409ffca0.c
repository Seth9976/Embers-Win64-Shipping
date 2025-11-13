// 函数: sub_1409ffca0
// 地址: 0x1409ffca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(arg1 + 0x10)
int64_t* rcx = arg2 + 0x20
int64_t* rax_1 = *(arg2 + 0x10)

if (rax_1 != 0)
    rcx = rax_1

(*arg2)((*(*rcx + 8))(rcx), &arg_8)
int64_t* rbx_1 = *(arg1 + 8)
void* rax_4
int64_t rax_5
void* rdx_1

if (rbx_1 != 0)
    rax_4 = sub_140a0af10()
    rdx_1 = rbx_1[2]
    rax_5 = sx.q(*(rax_4 + 0x38))

if (rbx_1 == 0 || rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    rbx_1 = nullptr

return sub_140a04e70(*(arg1 + 0x10), rbx_1) __tailcall
