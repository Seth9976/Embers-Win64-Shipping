// 函数: sub_1409775a0
// 地址: 0x1409775a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg2 + 0x134) u<= 1 || arg2[0xb] == 0)
    return 

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t var_138
sub_140a2e390(&var_138, u"%08X", zx.q(performanceCount.d))

if (&arg2[0x32] == &var_138)
    int64_t rcx_3 = var_138
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
else
    int64_t rcx_2 = arg2[0x32]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg2[0x32] = var_138
    int32_t var_130
    arg2[0x33].d = var_130
    int32_t var_12c
    *(arg2 + 0x19c) = var_12c

void* rdx = *arg2[0x262]

if (rdx != 0 && (*(rdx + 0x30) & 2) == 0)
    void** var_128
    sub_141f79620(&var_128, rdx, 0)
    performanceCount.b = 0x19
    int64_t* var_120
    char* rdx_1 = *var_120
    
    if (&rdx_1[1] u> var_120[1])
        var_128[0x2a](&var_128, &performanceCount, 1)
    else
        performanceCount.b = *rdx_1
        *var_120 += 1
    
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_7 = *arg2[0x262]
    void arg_18
    (*(*rcx_7 + 0x2c8))(rcx_7, &arg_18, &var_128, r9_1)
    sub_141f7bb50(&var_128)

(*(*arg2 + 0x2a8))(arg2, 0)
