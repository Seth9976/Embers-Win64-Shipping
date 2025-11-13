// 函数: sub_140ab4030
// 地址: 0x140ab4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t* rsi = arg1[1]
EnterCriticalSection(rdi + 0x258)
int64_t rax = *rsi

if (*(rdi + 0x280) != 0)
    *(*(rdi + 0x288) + 8) = rax
else
    *(rdi + 0x280) = rax

void* rax_1 = *rsi
*(rdi + 0x288) = rax_1

while (*(rax_1 + 0x10) != 0)
    void* rcx_2 = *(rdi + 0x288)
    *(rcx_2 + 8) = *(rcx_2 + 0x10)
    rax_1 = *(*(rdi + 0x288) + 0x10)
    *(rdi + 0x288) = rax_1

*(rax_1 + 8) = 0

if (rdi != -0x258)
    LeaveCriticalSection(rdi + 0x258)

return sub_140a4c340(rdi + 8) __tailcall
