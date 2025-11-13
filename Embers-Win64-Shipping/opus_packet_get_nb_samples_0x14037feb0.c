// 函数: opus_packet_get_nb_samples
// 地址: 0x14037feb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 1)
    return 0xffffffff

int32_t rax_2 = zx.d(*arg1) & 3
int32_t rbx

if (rax_2 == 0)
    rbx = rax_2 + 1
else if (rax_2 == 3)
    if (arg2 s< 2)
        return 0xfffffffc
    
    rbx = zx.d(arg1[1]) & 0x3f
    
    if (rbx s< 0)
        return zx.q(rbx)
else
    rbx = 2

int32_t result = opus_packet_get_samples_per_frame(arg1, arg3) * rbx

if (result * 0x19 s> arg3 * 3)
    return -4

return result
