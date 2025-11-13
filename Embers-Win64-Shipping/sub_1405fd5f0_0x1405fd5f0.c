// 函数: sub_1405fd5f0
// 地址: 0x1405fd5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int32_t rdi = arg3
void* arg_8 = arg1 + 0x20
EnterCriticalSection(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x10)
int64_t rax_1 = (*(*rcx_1 + 0x20))(rcx_1)
int64_t* rcx_2 = *(arg1 + 0x10)
int64_t rdx = *rcx_2
int64_t rax_2 = (*(rdx + 0x28))(rcx_2, rdx)

if (rdi u> rax_2.d)
    rdi = rax_2.d

int64_t* rcx_3 = *(arg1 + 0x10)
int64_t rdx_1 = *rcx_3

if (rax_2 - zx.q(rdi) s< (*(rdx_1 + 0x20))(rcx_3, rdx_1))
    rdi = rax_2.d - rax_1.d

if (rdi != 0)
    int64_t* rcx_5 = *(arg1 + 0x10)
    (*(*rcx_5 + 0x150))(rcx_5, arg2, zx.q(rdi))

if (arg4 != 0)
    *arg4 = rdi

int64_t* rcx_6 = *(arg1 + 0x10)
(*(*rcx_6 + 0x178))(rcx_6, zx.q(rdi) + rax_1)

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return 0
