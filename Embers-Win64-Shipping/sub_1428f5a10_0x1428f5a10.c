// 函数: sub_1428f5a10
// 地址: 0x1428f5a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char rax = *arg2
char rcx = rax

if (rax == 0x2d)
    rcx = arg2[1]

void* rdx = &arg2[1]

if (rax != 0x2d)
    rdx = arg2

int32_t result

if (rcx != 0x30 || ((*(rdx + 1) - 0x58) & 0xdf) != 0)
    result = sub_1428f5fa0(arg1, rdx)
else
    result = sub_1428f6170(arg1, rdx + 2)

if (result == 0)
    return result

if (*arg2 == 0x2d)
    void* rcx_3 = *arg1
    
    if (*(rcx_3 + 8) != 0)
        *(rcx_3 + 0x10) = 1

return 1
