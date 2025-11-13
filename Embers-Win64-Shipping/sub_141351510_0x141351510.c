// 函数: sub_141351510
// 地址: 0x141351510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_2 = sub_14139d290((*(*arg1 + 8))(arg1, 0))
*arg2 = *rax_2
arg2[1] = rax_2[1]
arg2[2] = rax_2[2]
arg2[3] = rax_2[3]
arg2[4] = rax_2[4]
int32_t rax_4 = *(arg2 + 0x34) & 0xfffeffff
*(arg2 + 0x28) = 1
*(arg2 + 0x38) = 0
*(arg2 + 0x34) = rax_4 | 1
arg2[4].q = u"Tonemap"
*(arg2 + 0x48) = 1
*(arg2 + 0x2c) = 2
int32_t rax_6 = data_14399f5e0:0xc.d
*arg2 = 1.o
arg2[1].d = rax_6

if (arg1[0x1f].b != 0)
    void* rcx_1 = arg1[0x20]
    *(arg2 + 0x14) = *(rcx_1 + 0x260)
    *(arg2 + 0x18) = *(rcx_1 + 0x264)

return arg2
