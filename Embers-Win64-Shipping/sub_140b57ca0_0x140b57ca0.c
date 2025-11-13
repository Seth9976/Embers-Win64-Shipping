// 函数: sub_140b57ca0
// 地址: 0x140b57ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 8) = 0
arg1[4] = 0
__builtin_memset(&arg1[6], 0, 0x1c)
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = -1
__builtin_memset(&arg1[0x12], 0, 0x1c)
arg1[0x251e] = 0
sub_140a3bc10(&arg1[0x2d0e])
*(arg1 + 0xb4a8) = 0
*(arg1 + 0x18) = CreateEventW(nullptr, 1, 0, nullptr)
*(arg1 + 0x20) = CreateEventW(nullptr, 1, 0, nullptr)
*(arg1 + 0x40) = AddVectoredExceptionHandler(1, sub_140b63fe0)
void arg_8
int64_t* rax_3 = sub_140b5f900(&arg_8, &arg1[0x14], &arg1[0x16], &arg1[0x18])

if (&arg1[0x12] != rax_3)
    *(arg1 + 0x48) = *rax_3

memset(&arg1[0x1a], 0, 0x13460)
HANDLE hThread =
    CreateThread(nullptr, 0, j_sub_140b63640, arg1, THREAD_CREATE_RUN_IMMEDIATELY, arg1)
*(arg1 + 8) = hThread

if (hThread != 0)
    SetThreadPriority(hThread, ~THREAD_PRIORITY_NORMAL)

if (*(arg1 + 0x48) != 0)
    data_143d796d4 = arg1[0x18]

sub_140af4d50()
int64_t* rax_6 = sub_140a84c80(0, 0x30, 0)

if (rax_6 != 0)
    rax_6[1] = arg1
    *rax_6 = &data_142d3fe58
    rax_6[2] = sub_140594850
    rax_6[4] = sub_140a387b0()
    *rax_6 = &data_142d3feb0

if (rax_6 != 0)
    sub_140599630(&data_1439a04a8, 1)
    void arg_10
    (*(*rax_6 + 0x30))(rax_6, &arg_10)
    int64_t rsi_1 = sx.q(data_1439a04b0)
    int32_t rax_9 = (rsi_1 + 1).d
    data_1439a04b0 = rax_9
    
    if (rax_9 s> data_1439a04b4)
        sub_1405a4f90(&data_1439a04a8)
    
    void** rax_12 = (rsi_1 << 4) + data_1439a04a8
    *rax_12 = rax_6
    rax_12[1].d = 3

return arg1
