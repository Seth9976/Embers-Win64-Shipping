// 函数: sub_1413d0730
// 地址: 0x1413d0730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0x300)
void* i = arg1

if (i_1 != 0)
    i = i_1

for (void* rcx_2 = sx.q(*(arg1 + 0x310)) * 0x30 + i; i != rcx_2; i += 0x30)
    *i = __addps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(*arg2), arg2[1].d), 
            _mm_unpacklo_ps(*(arg2 + 4), (zx.o(0)).q)[0].q), 
        *i)

int32_t rbx_1 = arg3 & 0xfffffff0
uint8_t result

do
    int64_t rcx_3 = *(arg1 + ((zx.q(rbx_1) & 7) << 3) + 0x328)
    
    if (rcx_3 != 0)
        sub_1413d0730(rcx_3, arg2)
    
    if ((rbx_1.b & 7) u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    
    result = (rbx_1 u>> 3).b
while ((result & 1) == 0)

return result
