// 函数: sub_1423b3c90
// 地址: 0x1423b3c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x98)
void* rbx = arg1 + 0x28

if (rax != 0)
    rbx = rax

int64_t rdi = 0
int64_t rsi = sx.q(*(arg1 + 0xa0)) << 3
void* result = rbx + rsi
uint64_t rsi_1 = rsi u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            result = sub_140a74f90(rcx)
        
        rbx += 8
        rdi += 1
    while (rdi != rsi_1)

*(arg1 + 0xa0) = 0

if (*(arg1 + 0xa4) == 0)
    return result

return sub_1423b4fa0(arg1 + 0x28, 0)
