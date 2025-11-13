// 函数: sub_142278390
// 地址: 0x142278390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    uint32_t rsi_1 = zx.d(arg2)
    
    if (rsi_1 != (arg1[0x9b].d & 1))
        (*(*arg1 + 0x710))()
        arg1[0x9b].d = (arg1[0x9b].d & 0xfffffffe) | rsi_1

if (arg4 == 0)
    return 

uint32_t rsi_2 = zx.d(arg2)

if (rsi_2 != (arg1[0x9b].d u>> 1 & 1))
    (*(*arg1 + 0x728))(arg1, zx.q(arg2))
    arg1[0x9b].d = (arg1[0x9b].d & 0xfffffffd) | (rsi_2 * 2)
