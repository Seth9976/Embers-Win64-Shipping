// 函数: sub_141c333b0
// 地址: 0x141c333b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x40)
int64_t* rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_141c306f0(rax, arg3 * 2, arg4)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_143205380
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

*arg2 = rbx_1
arg2[1] = rax_2
EnterCriticalSection(arg1 + 0xc0)
int64_t rbp = sx.q(*(arg1 + 0xb8))
int32_t rax_3 = (rbp + 1).d
*(arg1 + 0xb8) = rax_3

if (rax_3 s> *(arg1 + 0xbc))
    sub_1405a4df0(arg1 + 0xb0)

int64_t rdx_2 = *(arg1 + 0xb0)
int64_t rcx_5 = rbp * 3
*(rdx_2 + (rcx_5 << 3)) = *arg2
void* rax_5 = arg2[1]
*(rdx_2 + (rcx_5 << 3) + 8) = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rax_6 = *(rdx_2 + (rcx_5 << 3))
*(rdx_2 + (rcx_5 << 3) + 0x10) = 0

if (rax_6 != 0)
    *(rax_6 + 0x3c) += 1

if (arg1 != -0xc0)
    LeaveCriticalSection(arg1 + 0xc0)

return arg2
