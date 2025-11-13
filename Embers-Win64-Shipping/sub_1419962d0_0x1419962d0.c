// 函数: sub_1419962d0
// 地址: 0x1419962d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dda848
int64_t r9 = sub_1405d1550(&arg1[2])
bool cond:0 = arg1[1].d == 0xffffffff
*arg1 = &data_142d54860

if (not(cond:0) && data_143de542b == 0)
    sub_140af98a0("Unknown", 0x95, A FRenderResource was deleted without being released first!", r9)
    sub_140afbb40()

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
