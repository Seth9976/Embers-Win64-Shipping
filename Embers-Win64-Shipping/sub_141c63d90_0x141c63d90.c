// 函数: sub_141c63d90
// 地址: 0x141c63d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x698)
char rax

if (rcx != 0)
    rax = (*(*rcx + 0x540))(rcx)

int64_t rsi

if (rcx == 0 || rax == 0)
    rsi.b = 1
else
    rsi.b = 0

void* rdi_1 = *(arg1 + 0x690)
int32_t rdi_2

if (rdi_1 != 0)
    EnterCriticalSection(rdi_1 + 0x1a8)
    rdi_2 = *(rdi_1 + 0x1d8)
    
    if (rdi_1 != -0x1a8)
        LeaveCriticalSection(rdi_1 + 0x1a8)

if (rdi_1 == 0 || rdi_2 s<= 0)
    rax = 1
else
    rax = 0

if (rsi.b != 0 && rax != 0)
    return 1

return 0
