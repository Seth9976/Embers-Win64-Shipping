// 函数: sub_141900d60
// 地址: 0x141900d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg3 + 0x198)

if (rcx != 0)
    sub_1418ec3d0(rcx)

EnterCriticalSection(arg3 + 0x150)
int32_t rax = data_1439c7188
void* rax_1

if (rax == 1)
    rax_1 = *(arg3 + 0x148)
else if (data_143f02ba8 == 0)
    void*** rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_5[3]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x20)
        rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_5[3]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = rcx_5
    data_143f02ba0 = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142ff3db8
    rcx_5[2] = arg3
    rax_1 = *(arg3 + 0x140)
else if (rax != 0)
    rax_1 = *(arg3 + 0x140)
else
    sub_1418f5d10(*(arg3 + 0x140), data_143f02bb8)
    rax_1 = *(arg3 + 0x140)

*arg2 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

if (arg3 != -0x150)
    LeaveCriticalSection(arg3 + 0x150)

return arg2
