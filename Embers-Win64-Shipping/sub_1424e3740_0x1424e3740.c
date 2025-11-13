// 函数: sub_1424e3740
// 地址: 0x1424e3740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg_10, data_142d3f770)
int64_t rcx_1
rcx_1.b = result != 0
*(arg2 + 0x20) = rcx_1 + result
*arg3 = temp0[0]
return result
