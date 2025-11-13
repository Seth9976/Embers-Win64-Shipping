// 函数: sub_141c33270
// 地址: 0x141c33270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[2])
int64_t* rax = j_sub_140a82f30(0x40)
int64_t* rbp_1

if (rax == 0)
    rbp_1 = nullptr
else
    rbp_1 = sub_141c306f0(rax, arg3, arg4)

int64_t r14 = sx.q(arg1[1].d)
int32_t rax_2 = (r14 + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t r14_1 = r14 << 4
int64_t** r15_1 = *arg1 + r14_1
*r15_1 = rbp_1
void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_143205380
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbp_1

r15_1[1] = rax_3
int64_t rcx_4 = *arg1
*arg2 = *(r14_1 + rcx_4)
void* rax_5 = *(r14_1 + rcx_4 + 8)
arg2[1] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rax_6 = *arg2
arg2[2].d = 0

if (rax_6 != 0)
    *(rax_6 + 0x3c) += 1

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return arg2
