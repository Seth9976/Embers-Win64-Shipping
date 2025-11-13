// 函数: sub_1428d5e50
// 地址: 0x1428d5e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2[0x11].d != 0xffffffff && sub_142891fd0(*arg1, *arg2) != 0)
    uint32_t count = sub_142890e90(*arg2)
    memcpy(&arg1[1], &arg2[1], count)
    memcpy(&arg1[5], &arg2[5], count)
    memcpy(&arg1[9], &arg2[9], count)
    memcpy(&arg1[0xd], &arg2[0xd], count)
    arg1[0x11].d = arg2[0x11].d
    return 1

return 0
