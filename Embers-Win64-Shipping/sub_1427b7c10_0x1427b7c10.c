// 函数: sub_1427b7c10
// 地址: 0x1427b7c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *((*(*arg1 + 0x280))() + 0x20)
void* rax_2
int64_t rax_3
void* rdx_1

if (rbx != 0)
    rax_2 = sub_1427c10f0()
    rdx_1 = *(rbx + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rbx == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rbx = nullptr

int64_t* rcx_1 = *(rbx + 0x68)
(*(*rcx_1 + 0x298))(rcx_1, arg1)
int64_t rax_6 = *arg1
arg1[0x36] = 0
void* const rbx_1 = *((*(rax_6 + 0x280))(arg1) + 0x20)
void* rax_8
int64_t rax_9
void* rdx_3

if (rbx_1 != 0)
    rax_8 = sub_1427c10f0()
    rdx_3 = *(rbx_1 + 0x10)
    rax_9 = sx.q(*(rax_8 + 0x38))

if (rbx_1 == 0 || rax_9.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
    rbx_1 = nullptr

jump(*(**(rbx_1 + 0x68) + 0x278))
