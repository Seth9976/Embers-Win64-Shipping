// 函数: sub_1418c3dc0
// 地址: 0x1418c3dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 1
int32_t rsi = arg4

if (arg4 u<= 1)
    rsi = 1

int32_t r14_1 = arg3 * rsi
data_143f0f218
data_143f0f218 += r14_1
data_143f0f214 += 1
void* rbp = *(arg1 + 0x240)

if (*(rbp + 0x78) != 0)
    sub_1418c86c0(rbp, 0, 0)

int64_t* rbp_1 = *(rbp + 0x70)
sub_1418e4ee0(*(arg1 + 0x450), rbp_1)
int32_t rcx_2 = *(*(arg1 + 0x450) + 0x30)

if (rcx_2 == 0)
    rbx = rcx_2 + 3
else if (rcx_2 == 2)
    rbx = 2
else if (rcx_2 == 5)
    rbx = rcx_2 - 2
else if (rcx_2 u>= 6)
    rbx = rcx_2 - 5

int32_t rax_3 = 0

if (rcx_2 == 1)
    rax_3 = 2

int32_t rbx_2 = rbx * arg3 + rax_3
void* result = data_143efb9c0(rbp_1[8], zx.q(rbx_2), zx.q(rsi), zx.q(arg2), 0)

if (*(arg1 + 0x138) == 0 && *(arg1 + 0x470) != 0)
    result = *(arg1 + 0x488)
    
    if (result != 0)
        *(result + 0x10) += 1
        void* rax_4 = *(arg1 + 0x488)
        *(rax_4 + 0x14) += r14_1
        result = *(arg1 + 0x488)
        *(result + 0x18) += rbx_2 * rsi

return result
