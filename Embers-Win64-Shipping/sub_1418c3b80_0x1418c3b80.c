// 函数: sub_1418c3b80
// 地址: 0x1418c3b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg8
int32_t rbx = 1

if (rsi u<= 1)
    rsi = 1

int32_t r14_1 = arg7 * rsi
data_143f0f218
data_143f0f218 += r14_1
data_143f0f214 += 1
void* rbp = *(arg1 + 0x240)

if (*(rbp + 0x78) != 0)
    sub_1418c86c0(rbp, 0, 0)

int64_t* rdx = *(rbp + 0x70)
int64_t rbp_1 = rdx[8]
sub_1418e4ee0(*(arg1 + 0x450), rdx)
data_143efb9b0(rbp_1, *(arg2 + 0x70), zx.q(*(arg2 + 0x78)), zx.q(*(arg2 + 0xa8)))
int32_t rcx_3 = *(*(arg1 + 0x450) + 0x30)

if (rcx_3 == 0)
    rbx = rcx_3 + 3
else if (rcx_3 == 2)
    rbx = 2
else if (rcx_3 == 5)
    rbx = rcx_3 - 2
else if (rcx_3 u>= 6)
    rbx = rcx_3 - 5

int32_t rax_3 = 0

if (rcx_3 == 1)
    rax_3 = 2

uint64_t result = data_143efb9c8(rbp_1, zx.q(rax_3 + rbx * arg7), zx.q(rsi), zx.q(arg6), arg3, arg4)

if (*(arg1 + 0x138) == 0 && *(arg1 + 0x470) != 0)
    result = *(arg1 + 0x488)
    
    if (result != 0)
        *(result + 0x10) += 1
        void* rax_5 = *(arg1 + 0x488)
        *(rax_5 + 0x14) += r14_1
        void* rcx_5 = *(arg1 + 0x488)
        result = zx.q(arg5 * rsi)
        *(rcx_5 + 0x18) += result.d

return result
