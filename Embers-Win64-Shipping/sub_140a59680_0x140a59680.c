// 函数: sub_140a59680
// 地址: 0x140a59680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg3)
int32_t rcx = 8

if (arg2 u>= 0x10)
    rcx = 0x10

if (rcx u>= arg3)
    rbx = zx.q(rcx)

int64_t rax = malloc(arg2 + 0x10 + rbx)

if (rax != 0)
    void* result = (rbx + 0xf + rax) & neg.q(rbx)
    *(result - 8) = rax
    *(result - 0x10) = arg2
    return result

if (arg2 != 0)
    sub_140a4c430(arg2, arg3)

return 0
