// 函数: sub_1429aac50
// 地址: 0x1429aac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int64_t rbx = sx.q(arg4)
int64_t r11 = *(arg3 + 0x100)
int64_t* result_3 = *(r11 + (modu.dp.q(0:rbx, (*(arg3 + 0x108) - r11) s>> 3) << 3))
int64_t* result_2 = result_3
sub_1429c3430(&result_3[0xb])

if (*(result_3 + 0x2c) != rbx.d)
    int32_t r8_2 = *(arg3 + 0x118) * rbx.d + *(arg3 + 0x8c)
    *(result_3 + 0x14) = r8_2
    result_3[3].d = *(arg3 + 0x118) - 1 + r8_2
    *(result_3 + 0x2c) = rbx.d
    *result_3 = 0
    sub_1429aade0(arg2, arg3, r8_2, &result_3[1], &result_3[2])

int32_t r15 = *(result_3 + 0x14)

if (r15 s< arg5)
    r15 = arg5

int32_t r12 = result_3[3].d

if (arg6 s< r12)
    r12 = arg6

int64_t* result_1 = j_sub_140a82f30(0x30)
struct IlmThread_2_3::Task::Imf_2_3::x77ea6845::LineBufferTaskIIF::operator[]::LineBufferTaskIIF::VTable
    ** result = result_1
result_2 = result_1

if (arg7.b == 0)
    if (result_1 == 0)
        return nullptr
    
    sub_1429c2220(result, arg1)
    *result = &Imf_2_3::x77ea6845::LineBufferTask::operator[]::LineBufferTask::`vftable'{for `IlmThread_2_3::Task'}
    result[2] = arg3
    result[3] = result_3
    result[4].d = r15
    *(result + 0x24) = r12
    result[5] = arg7
else
    if (result_1 == 0)
        return nullptr
    
    sub_1429c2220(result_1, arg1)
    *result = &Imf_2_3::x77ea6845::LineBufferTaskIIF::operator[]::LineBufferTaskIIF::`vftable'{for `IlmThread_2_3::Task'}
    result[2] = arg3
    result[3] = result_3
    result[4].d = r15
    *(result + 0x24) = r12
    result[5] = arg7

return result
