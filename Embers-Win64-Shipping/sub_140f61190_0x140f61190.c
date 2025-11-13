// 函数: sub_140f61190
// 地址: 0x140f61190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x4f8)

if (not(arg2 f!= rcx[0x5a].d) && arg3 f== *(rcx + 0x2d4))
    return 

rcx[0x5a].d = arg2
*(rcx + 0x2d4) = arg3

if (not(arg3 != 0f) && *(rcx + 0x2dc) == 0)
    *(rcx + 0x2d4) = 0x3f800000
else if (not(arg3 <= 1f) && *(rcx + 0x2dc) != 0)
    *(rcx + 0x2d4) = 0

int64_t zmm0_1 = sub_140e19ef0(rcx, 1)
int64_t* rcx_1 = data_143e29f28
(*(*rcx_1 + 0x50))(rcx_1)
*(arg1 + 0x528) = zmm0_1
