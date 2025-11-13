// 函数: opus_packet_get_samples_per_frame
// 地址: 0x14037ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *arg1

if (r8 s< 0)
    return zx.q((arg2 << (r8 u>> 3 & 3)) s/ 0x190)

int32_t rdx_3

if ((r8 & 0x60) != 0x60)
    int32_t rcx_5 = zx.d(r8) u>> 3 & 3
    
    if (rcx_5 == 3)
        return zx.q(arg2 * 0x3c s/ 0x3e8)
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = muls.dp.d(0x51eb851f, arg2 << rcx_5.b)
    rdx_3 = temp4_1
else
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = muls.dp.d(0x51eb851f, arg2)
    rdx_3 = temp2_1
    
    if ((r8 & 8) != 0)
        return zx.q(arg2 s/ 0x32)

int32_t rdx_9 = rdx_3 s>> 5
return zx.q((rdx_9 u>> 0x1f) + rdx_9)
