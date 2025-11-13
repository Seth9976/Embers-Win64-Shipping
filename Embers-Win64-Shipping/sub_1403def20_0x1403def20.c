// 函数: sub_1403def20
// 地址: 0x1403def20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x6028)
void* rbx = arg1
int64_t i_1 = 2
int64_t i

do
    sub_1403e1dd0(rbx, arg2)
    rbx += 0x2fe8
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x6010) = 1
*(arg1 + 0x600c) = 1
*arg3 = 1
arg3[1] = *(arg1 + 0x6010)
arg3[2] = *(arg1 + 0x11e4)
arg3[3] = *(arg1 + 0x11ec)
arg3[4] = *(arg1 + 0x11f0)
arg3[5] = *(arg1 + 0x11f4)
arg3[6] = *(arg1 + 0x121c)
arg3[7] = *(arg1 + 0x1218)
arg3[8] = *(arg1 + 0x1220)
arg3[9] = *(arg1 + 0x1228)
arg3[0xa] = *(arg1 + 0x17fc)
arg3[0xb] = *(arg1 + 0x17f0)
arg3[0xc] = *(arg1 + 0x1264)
arg3[0x11] = sx.d(*(arg1 + 0x11f8)) * 0x3e8
arg3[0x12] = *(arg1 + 0x11d0)

if (*(arg1 + 0x11f8) != 0x10 || *(arg1 + 0x1c) != i_1.d)
    arg3[0x13] = 0
else
    arg3[0x13] = 1

return 0
