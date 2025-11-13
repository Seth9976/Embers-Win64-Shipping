// 函数: sub_1406cdc60
// 地址: 0x1406cdc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** arg_10 = arg2
int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rsi = &data_142d40450
arg2[1].d

if ((*(*rax + 0x70))() != 0)
    int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int16_t* rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    int64_t* rax_5 = (*(*rax_3 + 0xc0))(rax_3, rdx, 0)
    int64_t rdx_1 = *rax_5
    int64_t rax_6 = (*(rdx_1 + 0x40))(rax_5, rdx_1)
    void* arg_18 = j_sub_140a82f30(rax_6)
    void** arg_20 = &arg_18
    int64_t* rax_8 = __crt_deferred_errno_cache::get(&data_143db7b00)
    
    if (arg2[1].d != 0)
        rsi = *arg2
    
    int64_t* rax_10 = (*(*rax_8 + 0xc0))(rax_8, rsi, 0)
    int64_t r9_1 = *rax_10
    (*(r9_1 + 0x20))(rax_10, arg_18, rax_6, r9_1)
    sub_1406cfcc0(arg1, arg_18, rax_6)
    j_sub_140a74f90(arg_18)
else
    *arg1 = 0
    arg1[1] = 0

int16_t* rcx_7 = *arg2

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg1
