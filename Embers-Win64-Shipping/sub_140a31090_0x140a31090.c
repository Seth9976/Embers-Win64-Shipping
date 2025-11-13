// 函数: sub_140a31090
// 地址: 0x140a31090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_3 = arg1[1].d
int32_t rdx = r8_3 - 1

if (r8_3 == 0)
    rdx = -1

uint64_t result = zx.q(r8_3 - 1)

if (r8_3 == 0)
    result = 0xffffffff

if (r8_3 == 0)
    result = 0

if (result.d s> 0)
    result = *arg1
    
    if (r8_3 == 0)
        rdx = 0
    
    int64_t r8_2 = result + ((sx.q(rdx) - 1) << 1)
    
    do
        int16_t rdx_1 = *result
        *result = *r8_2
        result += 2
        *r8_2 = rdx_1
        r8_2 -= 2
    while (result u< r8_2)

return result
