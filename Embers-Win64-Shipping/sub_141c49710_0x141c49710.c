// 函数: sub_141c49710
// 地址: 0x141c49710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (arg1[0x41].d).b

if ((rax & 1) != 0 && arg1[0xd].d != 0)
    if ((rax & 2) == 0)
    label_141c4973a:
        arg1[0x41].d &= 0xfffffffd
        arg1[0xd].d = 0
        return 1
    
    if ((*(*arg1 + 0xa8))() != 0)
        goto label_141c4973a

return 0
