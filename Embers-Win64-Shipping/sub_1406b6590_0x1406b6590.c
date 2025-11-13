// 函数: sub_1406b6590
// 地址: 0x1406b6590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0)
    return 

rcx[1].d -= 1

if (rcx[1].d != 1)
    return 

int64_t* r8_1 = rcx[0x19]

if (r8_1 == 0)
    (**rcx)(rcx, 1, r8_1)
else
    (**r8_1)(r8_1, rcx)
