// 函数: sub_1423f4de0
// 地址: 0x1423f4de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

char rax
int64_t r9_1
rax, r9_1 = (*(*arg1 + 0x2d0))()

if (rax == 0)
    return 

if (not(arg2[0] >= 0f))
    sub_140af98a0("Unknown", 0x22b8, 
        Negative delta time! Please see https://udn.epicgames.com/lists/showpost."
    "php?list=ue3bugs&id=4364", r9_1)
    sub_140afbb40()

float temp0_1[0x4] = __minss_xmmss_memss(arg2[0], 0x3e4ccccd)
int32_t zmm0 = arg1[0x176].d
temp0_1[0] = temp0_1[0] f- zmm0
temp0_1[0] = temp0_1[0] * 0.00333333341f
temp0_1[0] = temp0_1[0] f+ zmm0
arg1[0x176].d = temp0_1[0]
