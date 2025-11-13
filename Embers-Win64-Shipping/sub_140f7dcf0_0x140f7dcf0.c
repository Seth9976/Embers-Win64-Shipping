// 函数: sub_140f7dcf0
// 地址: 0x140f7dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x2b0)
char rax = sub_140f07390(*(rbx + 0x48))
int64_t* rcx_1

if (rax != 0)
    rcx_1 = *(rbx + 0x58)

int64_t* rcx_2

if (rax == 0 || rcx_1 == 0)
    rcx_2 = *(rbx + 0x48)
else
    rcx_2 = *rcx_1

jump(*(*rcx_2 + 0x38))
