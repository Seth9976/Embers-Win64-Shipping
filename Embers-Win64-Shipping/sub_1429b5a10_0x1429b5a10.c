// 函数: sub_1429b5a10
// 地址: 0x1429b5a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t rbx = sx.q(arg3)
int64_t r11 = *(arg2 + 0x138)
int64_t* result_2 = *(r11 + (modu.dp.q(0:rbx, (*(arg2 + 0x140) - r11) s>> 3) << 3))
int64_t* result_1 = result_2
sub_1429c3430(&result_2[0xc])

if (*(result_2 + 0x34) != rbx.d)
    int32_t r8_2 = *(arg2 + 0x150) * rbx.d + *(arg2 + 0xc4)
    result_2[4].d = r8_2
    *(result_2 + 0x24) = *(arg2 + 0x150) - 1 + r8_2
    *(result_2 + 0x34) = rbx.d
    *result_2 = 0
    sub_1429b5c20(*(arg2 + 0x1d8), arg2, r8_2, &result_2[1], &result_2[2], &result_2[3])

int32_t r14 = result_2[4].d

if (r14 s< arg4)
    r14 = arg4

int32_t r15_1 = *(result_2 + 0x24)

if (arg5 s< r15_1)
    r15_1 = arg5

int64_t* result = j_sub_140a82f30(0x28)
result_1 = result

if (result == 0)
    return nullptr

sub_1429c2220(result, arg1)
*result = &Imf_2_3::x14410bcc::LineBufferTask::operator[]::LineBufferTask::`vftable'{for `IlmThread_2_3::Task'}
result[2] = arg2
result[3] = result_2
result[4].d = r14
*(result + 0x24) = r15_1
return result
