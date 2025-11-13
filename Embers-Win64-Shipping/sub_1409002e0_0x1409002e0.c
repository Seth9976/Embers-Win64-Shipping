// 函数: sub_1409002e0
// 地址: 0x1409002e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1aef8
arg1[1] = &data_142e1af20
EnterCriticalSection(&arg1[6])
int64_t* rdi = arg1[2]
int64_t rsi = 0
uint64_t r15_1 = sx.q(arg1[3].d) << 3 u>> 3

if (rdi u> &rdi[arg1[3]])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rcx_1 = *rdi
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x28))(rcx_1, 1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r15_1)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405c5570(&arg1[2], 0)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405c5570(&arg1[4], 0)

arg1[0xd].d = 0xffffffff

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

sub_1408ffb10(&arg1[0xb])
DeleteCriticalSection(&arg1[6])
int64_t rcx_7 = arg1[4]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[2]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[1] = &data_142d40888
*arg1 = &data_142e1aed0
return &data_142e1aed0
