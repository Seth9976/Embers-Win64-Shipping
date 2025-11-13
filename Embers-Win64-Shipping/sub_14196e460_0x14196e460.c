// 函数: sub_14196e460
// 地址: 0x14196e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)
int64_t* rsi = *(arg2 + 0x20)
int64_t* rcx = *(rdi + 8)
*(rdi + 8) = 0

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

return (*(*rsi + 0x2d0))(rsi, *(rdi + 0x18), *(arg1 + 0x4a0), *(arg1 + 0x18), arg1 + 0x20, 
    *(arg1 + 0x4a8), *(arg1 + 0x4ac))
