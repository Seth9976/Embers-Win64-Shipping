// 函数: sub_140a5aec0
// 地址: 0x140a5aec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10 = arg2
int64_t rbx_1 = arg2
int32_t var_48
sub_1405ba560(arg1 + 0xb0, &var_48, arg2)
int64_t rax_1 = sx.q(var_48)
int64_t rcx_3

if (rax_1.d == 0xffffffff)
    rcx_3 = 0
else
    rcx_3 = (rax_1 << 5) + *(arg1 + 0xb0)

int64_t rdi_1 = rcx_3 + 8

if (rcx_3 == 0)
    rdi_1 = 0

if (rdi_1 != 0)
    TEB* gsbase
    
    if (data_143db7a20
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143db7a20)
        
        if (data_143db7a20 == 0xffffffff)
            data_143db7a18 = rdi_1
            _Init_thread_footer(&data_143db7a20)
        
        rbx_1 = arg_10
    
    sub_140a5aff0(arg1, rbx_1)
    breakpoint

uint64_t var_40 = zx.q(arg3)
int64_t* var_30 = &arg_10
int32_t r9
int32_t var_38_1 = r9
uint64_t* var_28_1 = &var_40
int32_t var_44
sub_140a55990(arg1 + 0xb0, &var_44, &var_30, nullptr)
