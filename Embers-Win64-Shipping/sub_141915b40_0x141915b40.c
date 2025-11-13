// 函数: sub_141915b40
// 地址: 0x141915b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
void* const rbx_1

if (arg4 == 0)
    rbx_1 = nullptr
else
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rbx_1 = *(arg4 + 0x20)

int32_t rsi = 0
int32_t rbp = 0x8c2a
int32_t r14 = -1

if (rbx_1 != 0)
    rsi = *(rbx_1 + 0x10)
    rbp = *(rbx_1 + 0x14)
    r14 = *(rbx_1 + 0x20)
    sub_141917ad0(arg1 - 0x18, rbx_1)

int64_t rax = *(arg1 + 0x138)
int64_t rcx_1 = r15 * 5
*(rax + (rcx_1 << 3) + 8) = rbx_1
*(rax + (rcx_1 << 3) + 0x10) = rbp
*(rax + (rcx_1 << 3) + 0x14) = rsi
*(rax + (rcx_1 << 3)) = 0
*(rax + (rcx_1 << 3) + 0x18) = r14
*(rax + (rcx_1 << 3) + 0x1c) = 1
*(rax + (rcx_1 << 3) + 0x20) = 0
int64_t result = *(arg1 + 0x888)
*(*(arg1 + 0x140) + (r15 << 3)) = result
return result
