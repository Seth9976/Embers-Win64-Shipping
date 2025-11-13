// 函数: sub_142153550
// 地址: 0x142153550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x134) u<= 1 || arg1[0xb] == 0)
    return &__return_addr

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t var_138
int512_t zmm1_1 = sub_140a2e390(&var_138, u"%08X", zx.q(performanceCount.d))

if (&arg1[0x32] == &var_138)
    int64_t rcx_3 = var_138
    
    if (rcx_3 != 0)
        zmm1_1 = sub_140a74f90(rcx_3)
else
    int64_t rcx_2 = arg1[0x32]
    
    if (rcx_2 != 0)
        zmm1_1 = sub_140a74f90(rcx_2)
    
    arg1[0x32] = var_138
    int32_t var_130
    arg1[0x33].d = var_130
    int32_t var_12c
    *(arg1 + 0x19c) = var_12c

void* rax_3 = arg1[0xb]

if (rax_3 != 0 && *(rax_3 + 0x641) == 0 && *(rax_3 + 0x61c) != 0)
    *(rax_3 + 0x648) += 1

if (*(arg1 + 0x1cc) != 5)
    *(arg1 + 0x1cc) = 5

void* rdx_1 = *arg1[0x262]

if (rdx_1 != 0 && (*(rdx_1 + 0x30) & 2) == 0)
    void** var_128
    sub_141f79620(&var_128, rdx_1, 0)
    performanceCount.b = 3
    int64_t* var_120
    char* rdx_2 = *var_120
    
    if (&rdx_2[1] u> var_120[1])
        var_128[0x2a](&var_128, &performanceCount, 1)
    else
        performanceCount.b = *rdx_2
        *var_120 += 1
    
    sub_140a1d9d0(&var_128, &arg1[0x32], zmm1_1)
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_8 = *arg1[0x262]
    void arg_10
    (*(*rcx_8 + 0x2c8))(rcx_8, &arg_10, &var_128, r9_1)
    sub_141f7bb50(&var_128)

return (*(*arg1 + 0x2a8))(arg1, 0)
