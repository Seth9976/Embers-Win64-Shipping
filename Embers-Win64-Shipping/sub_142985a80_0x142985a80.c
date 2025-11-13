// 函数: sub_142985a80
// 地址: 0x142985a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IlmThread_2_3::Task::VTable** arg_8 = arg1
int64_t var_18 = -2
int64_t rsi = sx.q(arg4)
struct IlmThread_2_3::Task::Imf_2_3::x1776022c::LineBufferTask::operator[]::LineBufferTask::VTable**
     result = arg1
sub_1429c2220(arg1, arg2)
*result = &Imf_2_3::x1776022c::LineBufferTask::operator[]::LineBufferTask::`vftable'{for `IlmThread_2_3::Task'}
result[2] = arg3
int64_t r8 = *(arg3 + 0xc8)
void* rcx_3 = *(r8 + (modu.dp.q(0:rsi, (*(arg3 + 0xd0) - r8) s>> 3) << 3))
result[3] = rcx_3
sub_1429c3430(rcx_3 + 0x68)
void* rdx_2 = result[3]

if (*(rdx_2 + 0x40) == 0)
    *(rdx_2 + 0x20) = *(rdx_2 + 8)
    void* rax_3 = result[2]
    *(result[3] + 0x28) = *(rax_3 + 0xe0) * rsi.d + *(rax_3 + 0x4c)
    void* rdx_3 = result[2]
    void* r9 = result[3]
    int32_t r8_3 = *(r9 + 0x28) - 1 + *(rdx_3 + 0xe0)
    int32_t rax_5 = *(rdx_3 + 0x50)
    
    if (rax_5 s>= r8_3)
        rax_5 = r8_3
    
    *(r9 + 0x2c) = rax_5
    result[3][4].__offset(0x0).b = 1
    rdx_2 = result[3]

int32_t rcx_8 = *(rdx_2 + 0x28)

if (rcx_8 s< arg5)
    rcx_8 = arg5

*(rdx_2 + 0x30) = rcx_8
void* rdx_4 = result[3]
int32_t rcx_9 = *(rdx_4 + 0x2c)

if (arg6 s< rcx_9)
    rcx_9 = arg6

*(rdx_4 + 0x34) = rcx_9
return result
