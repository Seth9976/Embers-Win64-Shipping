// 函数: sub_140a5ad50
// 地址: 0x140a5ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint64_t rdi = zx.q(arg3)
int64_t rbx = arg2
int32_t arg_8
sub_1405ba560(arg1 + 0xb0, &arg_8, arg2)
int64_t rdx_1 = sx.q(arg_8)

if (rdx_1.d != 0xffffffff)
    int128_t var_30 = *((rdx_1 << 5) + *(arg1 + 0xb0) + 8)
    sub_140a5a7d0(arg1 + 0xb0, rdx_1.d)
    
    if (rdi.d != 0 && rdi != var_30.q)
        breakpoint
    
    uint64_t var_40 = rdi
    var_30.q = &arg_10
    int32_t r9
    int32_t var_38 = r9
    var_30:8.q = &var_40
    int32_t var_44
    return sub_140a55990(arg1 + 0x100, &var_44, &var_30, nullptr)

TEB* gsbase

if (data_143db7a24 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7a24)
    
    if (data_143db7a24 == 0xffffffff)
        atexit(sub_142cbd170)
        _Init_thread_footer(&data_143db7a24)
    
    rbx = arg_10

int32_t var_48
sub_1405ba560(arg1 + 0x100, &var_48, rbx)
int64_t rax_5 = sx.q(var_48)
void* const rcx_8

if (rax_5.d == 0xffffffff)
    rcx_8 = nullptr
else
    rcx_8 = (rax_5 << 5) + *(arg1 + 0x100)

int128_t* rax_6 = rcx_8 + 8

if (rcx_8 == 0)
    rax_6 = nullptr

data_14399ea70 = *rax_6
breakpoint
