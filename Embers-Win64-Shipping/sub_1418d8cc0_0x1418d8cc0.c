// 函数: sub_1418d8cc0
// 地址: 0x1418d8cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x1c)
void* r14 = arg1[1]
int32_t arg_8 = 0
int32_t temp1 = mods.dp.d(sx.q(rsi + 1), arg1[0xc].d)
*(arg1 + 0x1c) = temp1
sub_1418c5dc0(r14 + 0x438, *(arg1[0xd] + (sx.q(temp1) << 3)))
int64_t rbx = **(arg1[0xd] + (sx.q(*(arg1 + 0x1c)) << 3))
int32_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t rax_6 = data_143efbad0(*(arg1[1] + 8), *arg1, -1, 
    *(*(arg1[0xb] + (sx.q(*(arg1 + 0x1c)) << 3)) + 0x18), rbx, &arg_8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rbx_2 = performanceCount.d - performanceCount_1

if (sub_140a80f10() == 0)
    if (sub_140a80e70() != 0)
        data_143f138d0 += rbx_2
        data_143f138e0 += 1
else
    data_143f01c9c += rbx_2

if (rax_6 == 0xc4653214)
    *(arg1 + 0x1c) = rsi
    return 0xffffffff

if (rax_6 == 0xc4653600)
    *(arg1 + 0x1c) = rsi
    return 0xfffffffe

int64_t rax_11 = arg1[0xb]
*(arg1 + 0x24) += 1
int32_t rax_12 = arg_8
*arg2 = *(rax_11 + (sx.q(*(arg1 + 0x1c)) << 3))
arg1[3].d = rax_12
sub_1418c9370(r14 + 0x438, *(arg1[0xd] + (sx.q(*(arg1 + 0x1c)) << 3)), -1)
return zx.q(arg1[3].d)
