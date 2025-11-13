// 函数: sub_1418b8aa0
// 地址: 0x1418b8aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142fec1d8
void*** rbx = nullptr
arg1[2] = 0
EnterCriticalSection(&data_143efb170)

if (*(arg2 + 0x1a68) != 0)
    int64_t rdx_1 = sx.q(*(arg2 + 0x1a68))
    rbx = *(*(arg2 + 0x1a60) + (rdx_1 << 3) - 8)
    *(arg2 + 0x1a68) = (rdx_1 - 1).d
else
    void*** rax = j_sub_140a82f30(0x558)
    
    if (rax != 0)
        rbx = sub_1418cedd0(rax, data_143efbb58, arg2, *(arg2 + 0x1558), *(arg2 + 0x1a50))

LeaveCriticalSection(&data_143efb170)
arg1[2] = rbx
return arg1
