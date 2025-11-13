// 函数: sub_141012700
// 地址: 0x141012700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0xb8)
int32_t arg_8
sub_141021390(arg1 + 0x60, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x70 + *(arg1 + 0x60)

int64_t* rdx_1 = rax_2 + 0x60

if (rax_2 == 0)
    rdx_1 = nullptr

if (rdx_1 != 0)
    *arg3 = *rdx_1
    return ReleaseSRWLockExclusive(arg1 + 0xb8)

int64_t* rax_5 = j_sub_140a82f30(0x30)
int64_t* rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = nullptr
else
    *rax_5 = *(arg1 + 8)
    int32_t rdx_3 = (1 << (data_1439c7a34).b) - 1
    rax_5[1].d = rdx_3
    *(rax_5 + 0xc) = rdx_3
    rax_5[2] = 0
    rax_5[3] = 0
    InitializeSRWLock(&rax_5[4])
    rbx_1[5].b = 0

int64_t* var_38 = rbx_1
sub_141000e20(arg1 + 0x60, arg2, &var_38)
*arg3 = var_38
ReleaseSRWLockExclusive(arg1 + 0xb8)
void* rcx_8 = arg4 + 0x20
int64_t var_30 = *arg3
void* rax_8 = *(arg4 + 0x10)

if (rax_8 != 0)
    rcx_8 = rax_8

return (*arg4)((*(*rcx_8 + 8))(rcx_8), &var_30, arg2)
