// 函数: sub_140a3d920
// 地址: 0x140a3d920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d190
EnterCriticalSection(&arg1[6])
int64_t* rdi = &arg1[0x10]
int64_t i_1 = 4
int64_t i

do
    int64_t* rcx_1 = *rdi
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    rdi = &rdi[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

DeleteCriticalSection(&arg1[0xb])
DeleteCriticalSection(&arg1[6])
int64_t rcx_5 = arg1[4]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[2]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*arg1 = &data_142e5d0f8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
