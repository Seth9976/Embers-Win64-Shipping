// 函数: sub_141c3faf0
// 地址: 0x141c3faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 8) == 2
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)

if (not(cond:0))
    temp0[0] = temp0[0] f* temp0[0]

float result = *(arg1 + 0x20)
float zmm2

if (temp0[0] f<= result)
    zmm2 = *(arg1 + 0x1c)
else
    zmm2 = *(arg1 + 0x14)

result = (result f- temp0[0]) * zmm2 f+ temp0[0]

if (result <= -1.17549435e-38f || result >= 1.17549435e-38f)
    if (not(result >= 0f))
        *(arg1 + 0x20) = 0
        return (zx.o(0)).d
    
    if (not(result < 1f))
        *(arg1 + 0x20) = 0x3f800000
        return 1f
else
    result = (zx.o(0)).d

*(arg1 + 0x20) = result
return result
