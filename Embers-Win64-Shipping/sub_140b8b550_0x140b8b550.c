// 函数: sub_140b8b550
// 地址: 0x140b8b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg1 + 0x68)
    return 

if (arg2[1].d != 0)
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        jump(*(*rcx + 0x40))

if (*(arg1 + 0x70) == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x68)

if (rcx_1 == 0)
    return 

(*(*rcx_1 + 0x38))(rcx_1, 0)
int64_t rcx_2 = *(arg1 + 0x68)

if (rcx_2 != 0)
    *(arg1 + 0x68) = sub_140a84c80(rcx_2, 0, 0)

*(arg1 + 0x70) = 0
