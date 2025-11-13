// 函数: sub_14199b030
// 地址: 0x14199b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(&data_1439c85ec + sx.q(arg4) * 0x28)
uint32_t temp0 = divu.dp.d(0:(arg3 - 1 + r10), r10)

if (arg5 == arg6 || arg6 == 0)
    return memcpy(arg2, arg1, temp0 * arg5)

uint32_t result = arg6

if (arg5 u<= arg6)
    result = arg5

int32_t rbx_1 = 0

if (temp0 != 0)
    uint32_t count = result
    
    do
        result = memcpy(zx.q(rbx_1 * arg6) + arg2, zx.q(rbx_1 * arg5) + arg1, count)
        rbx_1 += 1
    while (rbx_1 u< temp0)

return result
