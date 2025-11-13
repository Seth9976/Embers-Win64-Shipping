// 函数: sub_141e5ec20
// 地址: 0x141e5ec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
EnterCriticalSection(&data_143f39aa0)
TEB* gsbase

if (data_143f39b94 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f39b94)
    
    if (data_143f39b94 == 0xffffffff)
        atexit(sub_142cf9c50)
        _Init_thread_footer(&data_143f39b94)

if (data_143a2d358 == data_143a2d384)
    int32_t rax_5 = _statfp()
    
    if (rax_5 s> data_143a2d358 - data_143a2d384)
        sub_141e69820(&data_143a2d350, rax_5)
        int32_t rax_8
        
        if (rax_5 u< 4)
            rax_8 = 1
        else
            uint32_t rbx_2 = rax_5 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
            int32_t rcx_4
            
            if (rbx_2 == 0xfffffff8)
                rcx_4 = 0x20
            else
                rcx_4 = 0x1f - temp0_2
            
            int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
            
            if (rcx_6 == 0)
                rax_8 = 1
            else
                rax_8 = 1 << ((not.d(rcx_6)).b & (0x20 - (0x1f - temp0_3)))
        
        int32_t rcx_9 = data_143a2d398
        
        if (rcx_9 == 0 || rcx_9 s< rax_8)
            data_143a2d398 = rax_8
            sub_141e684e0(&data_143a2d350)

int64_t var_c0
sub_141e5f660(&var_c0, arg1)
int32_t var_c8
sub_141e5d1e0(&data_143a2d350, &var_c8, &var_c0)
int64_t rax_9 = sx.q(var_c8)
int64_t rax_12

if (rax_9.d == 0xffffffff)
    rax_12 = 0
else
    rax_12 = rax_9 * 0x90 + data_143a2d350

int64_t result = rax_12 + 0x10

if (rax_12 == 0)
    result = 0

if (result == 0)
    *arg2 = 1
    int64_t* var_b0 = &var_c0
    void var_98
    char* var_a8_1 = sub_141e4f410(&var_98)
    sub_141e4cbe0(&data_143a2d350, &var_c8, &var_b0, nullptr)
    result = data_143a2d350 + 0x10 + sx.q(var_c8) * 0x90
    void var_90
    sub_1405ae180(&var_90)
else
    *arg2 = 0

int64_t rcx_13 = var_c0

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

LeaveCriticalSection(&data_143f39aa0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
