// 函数: sub_141900840
// 地址: 0x141900840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rbx = sx.q(*(arg3 + 0x80))
int32_t var_48 = rbx.d
void buffer2

if (rbx.d != 0)
    sub_14119a530(&buffer2, rbx.d, 0)
    memcpy(&buffer2, arg3, (rbx << 3).d)
    rbx = zx.q(var_48)
else
    int32_t var_44_1 = 0x10

int32_t rax_2 = sub_140b212b0(&buffer2, (rbx << 3).d, 0)
TEB* gsbase

if (data_143efbc70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efbc70)
    
    if (data_143efbc70 == 0xffffffff)
        InitializeCriticalSection(&data_143efbc48)
        SetCriticalSectionSpinCount(&data_143efbc48, 0xfa0)
        atexit(&data_142ced7e0)
        _Init_thread_footer(&data_143efbc70)

EnterCriticalSection(&data_143efbc48)
void* const buffer1

if (data_1439c7448 == data_1439c7474)
label_1419009b3:
    buffer1 = nullptr
else
    void* rcx_5 = data_1439c7480
    void* rax_7 = &data_1439c7478
    
    if (rcx_5 != 0)
        rax_7 = rcx_5
    
    int32_t rbx_1 = *(rax_7 + (((sx.q(data_1439c7488) - 1) & sx.q(rax_2)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_1419009b3_1:
        buffer1 = nullptr
    else
        int64_t rbp_1 = data_1439c7440
        
        while (true)
            buffer1 = sx.q(rbx_1) * 0xa0 + rbp_1
            int64_t rax_9 = sx.q(*(buffer1 + 0x80))
            
            if (rax_9.d == var_48 && memcmp(buffer1, &buffer2, rax_9 << 3) == 0)
                break
            
            rbx_1 = *(buffer1 + 0x98)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419009b3_2
        
        if (rbx_1 == 0xffffffff)
        label_1419009b3_2:
            buffer1 = nullptr

void* rbx_2 = buffer1 + 0x90

if (buffer1 == 0)
    rbx_2 = nullptr

if (rbx_2 == 0)
    void*** rax_11 = j_sub_140a82f30(0xa0)
    void*** rbx_3 = rax_11
    
    if (rax_11 == 0)
        rbx_3 = nullptr
    else
        *rbx_3 = &data_142d3ff08
        rbx_3[1].d = 0
        *rbx_3 = &data_142ff18c0
        *(rbx_3 + 0xc) = 0
        rbx_3[2].w = 0x100
        int64_t rsi_2 = sx.q(*(arg3 + 0x80))
        rbx_3[0x13].d = rsi_2.d
        
        if (rsi_2.d != 0)
            sub_14119a530(&rbx_3[3], rsi_2.d, 0)
            memcpy(&rbx_3[3], arg3, (rsi_2 << 3).d)
        else
            *(rbx_3 + 0x9c) = 0x10
    
    void*** var_d8 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    rbx_2 = sub_1418f0a40(&data_1439c7440, &buffer2, &var_d8)
    sub_14081c9d0(&var_d8)

void* rdx_10 = *rbx_2
*arg2 = rdx_10

if (rdx_10 != 0)
    *(rdx_10 + 8) += 1

LeaveCriticalSection(&data_143efbc48)
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
