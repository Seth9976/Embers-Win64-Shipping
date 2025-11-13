// 函数: sub_1405f3b40
// 地址: 0x1405f3b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* rbx
void* arg_8 = rbx
int64_t* rax = j_sub_140a82f30(0xc8)
void*** rdi = rax
int64_t* arg_18 = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_142d5f438
    rdi[1] = &data_142d5f460
    rdi[2] = &data_142d5f4a8
    rdi[3] = &data_142d5f510
    InitializeCriticalSection(&rdi[4])
    SetCriticalSectionSpinCount(&rdi[4], 0xfa0)
    __builtin_memset(&rdi[9], 0, 0x19)
    *(rdi + 0x64) = 0
    rdi[0xd].d = 1
    *(rdi + 0x6c) = *arg1
    rdi[0x10] = 0
    rdi[0x11].d = 0x3f800000
    __builtin_memset(&rdi[0x12], 0, 0x20)
    rdi[0x16].b = 1
    rdi[0x17] = 0
    rdi[0x18] = 0

void*** arg_20 = rdi

if (rdi != 0)
    (*rdi)[1](rdi)

int64_t* rax_2 = j_sub_140a82f30(0x80)
int64_t* rsi_1 = rax_2
arg_18 = rax_2

if (rax_2 == 0)
    rsi_1 = nullptr
else
    *rsi_1 = &data_142d5f320
    rsi_1[1] = &data_142d5f368
    rsi_1[2] = &data_142d5f388
    rsi_1[3] = &data_142d5f3e8
    rsi_1[4] = &data_142d5f408
    InitializeCriticalSection(&rsi_1[5])
    SetCriticalSectionSpinCount(&rsi_1[5], 0xfa0)
    rsi_1[0xa].d = 0
    __builtin_memset(&rsi_1[0xb], 0, 0x28)

int64_t* var_20 = rsi_1

if (rsi_1 != 0)
    (*(*rsi_1 + 8))(rsi_1)

arg_18 = rdi

if (rdi != 0)
    (*rdi)[1](rdi)

if (sub_1405fa840(rsi_1, &arg_18) != 0)
    void*** rcx_8 = *arg2
    
    if (rcx_8 != rdi)
        if (rdi != 0)
            (*rdi)[1](rdi)
            rcx_8 = *arg2
        
        if (rcx_8 != 0)
            (*rcx_8)[2](rcx_8)
        
        *arg2 = rdi
    
    rbx.b = 1
else
    rbx.b = 0

if (rsi_1 != 0)
    int64_t rdx_1 = *rsi_1
    (*(rdx_1 + 0x10))(rsi_1, rdx_1)

if (rdi != 0)
    void** rdx_2 = *rdi
    rdx_2[2](rdi, rdx_2)

return zx.q(rbx.b)
