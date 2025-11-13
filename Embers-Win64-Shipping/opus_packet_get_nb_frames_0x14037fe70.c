// 函数: opus_packet_get_nb_frames
// 地址: 0x14037fe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 1)
    return 0xffffffff

int32_t rax_2 = zx.d(*arg1) & 3

if (rax_2 == 0)
    return 1

if (rax_2 != 3)
    return 2

if (arg2 s>= 2)
    return zx.q(arg1[1]) & 0x3f

return 0xfffffffc
