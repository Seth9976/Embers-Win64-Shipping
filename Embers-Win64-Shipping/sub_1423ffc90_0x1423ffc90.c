// 函数: sub_1423ffc90
// 地址: 0x1423ffc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int32_t rax = *(rdx + 0xd0)

if (rax s> 0)
    *(rdx + 0xd0) = rax - 1
    return rax - 1

int32_t rax_2 = *(rdx + 0xcc)

if (rax_2 s> 0)
    *(rdx + 0xcc) = rax_2 - 1
    void* rax_4 = *arg1
    *(rax_4 + 0xc8) &= 0xfffffffe
    return rax_4

int32_t rax_6 = *(rdx + 0x110) - 0x15

if (rax_6 s<= 0)
    rax_6 = 0

*(rdx + 0xcc) = rax_6
void* rcx = *arg1
int32_t rax_7 = *(rcx + 0x110)

if (rax_7 u<= 0x14)
    *(rcx + 0xd0) += rax_7 - 1
    void* rax_9 = *arg1
    *(rax_9 + 0xc8) &= 0xfffffffe
    return rax_9

*(rcx + 0xcc) += 1
void* rax_10 = *arg1
*(rax_10 + 0xd0) += 0x13
void* rax_11 = *arg1
*(rax_11 + 0xc8) &= 0xfffffffe
return rax_11
