// 函数: sub_140a3f4a0
// 地址: 0x140a3f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)
uint32_t result_1[0x4] = __andps_xmmxud_memxud(arg1, data_142d3f770)
uint32_t zmm5 = arg2[0]
bool cond:0 = result_1[0] f> result[0]
uint32_t zmm6[0x4] = arg1

if (cond:0 == 0)
    arg2 = result
    result = result_1
else
    arg2 = result_1

if (not(arg2[0] f!= 0f))
    return zx.o(0)

result[0] = result[0] f/ arg2[0]
result[0] = result[0] f* result[0]
result[0] = result[0] f* 0.00721288519f
result[0] = result[0] f- 0.0350596793f
result[0] = result[0] f* result[0]
result[0] = result[0] f+ 0.0816758797f
result[0] = result[0] f* result[0]
result[0] = result[0] f- 0.133746579f
result[0] = result[0] f* result[0]
result[0] = result[0] f+ 0.198565632f
result[0] = result[0] f* result[0]
result[0] = result[0] f- 0.333249986f
result[0] = result[0] f* result[0]
result[0] = result[0] f+ 1f
result[0] = result[0] f* result[0]

if (cond:0 != 0)
    arg1 = 0x3fc90fdb
    arg1[0] = 1.57079637f f- result[0]
    result = arg1

if (not(zmm5 f>= 0f))
    arg1 = 0x40490fdb
    arg1[0] = 3.14159274f f- result[0]
    result = arg1

if (zmm6[0] f>= 0f)
    return result

return result ^ data_142d3f780
