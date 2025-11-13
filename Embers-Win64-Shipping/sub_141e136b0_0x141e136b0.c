// 函数: sub_141e136b0
// 地址: 0x141e136b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_14255cbc0()
void* r8_1 = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t rbx_2 = *arg1
int64_t rsi_1 = sx.q(*(rbx_2 + 0x48))
int32_t rax_2 = (rsi_1 + 1).d
*(rbx_2 + 0x48) = rax_2

if (rax_2 s> *(rbx_2 + 0x4c))
    sub_1407752f0(rbx_2, rsi_1.d)

rax = *(rbx_2 + 0x40)

if (rax != 0)
    rbx_2 = rax

*(rbx_2 + (rsi_1 << 3)) = arg2
