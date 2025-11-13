// 函数: sub_140f7cc20
// 地址: 0x140f7cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140f07390(*(arg1 + 0x48))
int64_t* rcx_1

if (rax != 0)
    rcx_1 = *(arg1 + 0x58)

int64_t* rcx_2

if (rax == 0 || rcx_1 == 0)
    rcx_2 = *(arg1 + 0x48)
else
    rcx_2 = *rcx_1

jump(*(*rcx_2 + 0x38))
