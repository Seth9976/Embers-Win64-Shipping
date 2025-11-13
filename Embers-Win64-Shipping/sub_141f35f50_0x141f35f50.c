// 函数: sub_141f35f50
// 地址: 0x141f35f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x15]

if (rbx == 0)
    void* rax = sub_141ee69e0(arg1)
    rbx = rax
    
    if (rax != 0)
        goto label_141f35f7a
    
    return 

label_141f35f7a:

if (*(rbx + 0x1b0) == 0)
    return 

int64_t rdx_1 = *arg1

if ((*(rdx_1 + 0x448))(arg1, rdx_1).b == 0)
    return 

TEB* gsbase

if (data_143f3b678 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3b678)
    
    if (data_143f3b678 == 0xffffffff)
        InitializeCriticalSection(&data_143f3b650)
        SetCriticalSectionSpinCount(&data_143f3b650, 0xfa0)
        atexit(&data_142cfc910)
        _Init_thread_footer(&data_143f3b678)

EnterCriticalSection(&data_143f3b650)
int64_t arg_18
sub_140d3a3a0(&arg_18, arg1)
int64_t arg_10
sub_140d3a3a0(&arg_10, rbx)

if (sub_141f3b1e0(&data_143a2d7c0, arg_10, arg_18) == 0)
    int64_t* var_18 = &arg_10
    int64_t* var_10_1 = &arg_18
    int32_t arg_8
    sub_141f2beb0(&data_143a2d7c0, &arg_8, &var_18, nullptr)

LeaveCriticalSection(&data_143f3b650)
