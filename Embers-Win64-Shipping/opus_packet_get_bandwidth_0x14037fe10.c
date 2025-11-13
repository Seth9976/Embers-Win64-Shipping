// 函数: opus_packet_get_bandwidth
// 地址: 0x14037fe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *arg1

if (rdx s>= 0)
    uint32_t rax_5 = zx.d(rdx)
    
    if ((rdx & 0x60) != 0x60)
        return (rax_5 u>> 5 & 3) + 0x44d
    
    return (zx.q(rax_5 u>> 4) & 1) | 0x450

int32_t result = (zx.d(rdx) u>> 5 & 3) + 0x44e

if (result != 0x44e)
    return result

return 0x44d
