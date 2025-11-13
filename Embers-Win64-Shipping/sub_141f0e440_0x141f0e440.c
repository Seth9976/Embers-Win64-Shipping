// 函数: sub_141f0e440
// 地址: 0x141f0e440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    (*(*arg1 + 0x550))()

int64_t* rax_3 = (*(*arg1 + 0x548))(arg1, zx.q(arg2))
void* rax_4
void* rcx_1
int64_t rdx_1

if (rax_3 != 0)
    rax_4 = sub_142542e20()
    rcx_1 = rax_3[2]
    rdx_1 = sx.q(*(rax_4 + 0x38))

void* rax_6

if (rax_3 == 0 || rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_4 + 0x30)
    rax_6 = nullptr
else
    rax_6 = rax_3

if (rax_3 == 0 || rax_6 != 0)
    return rax_6

void* rax_7 = sub_142121d50(rax_3, arg1, arg4)
int64_t r9 = *arg1
(*(r9 + 0x550))(arg1, zx.q(arg2), rax_7, r9)
return rax_7
