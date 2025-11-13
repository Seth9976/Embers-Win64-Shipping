// 函数: sub_14062b3a0
// 地址: 0x14062b3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rsi = &data_142d40450
arg1[1].d
char result

if ((*(*rax_2 + 0x70))() == 0)
label_14062b5e2:
    int64_t rcx_15 = *arg1
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int16_t* rcx_16 = *arg2
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    result = 0
else
    int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
    arg1[1].d
    (*(*rax_4 + 0x78))()
    int16_t* const rdx
    
    if (arg1[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg1
    
    bool var_38
    sub_140b3f730(&var_38, rdx, nullptr)
    int128_t var_f8
    __builtin_memset(&var_f8, 0, 0x90)
    int64_t var_108 = 0
    sub_140b4c2a0(&var_f8)
    int64_t var_68_1 = 0
    var_f8.q = &data_142d6ad48
    int64_t var_50
    int64_t* var_60_1 = &var_50
    int64_t var_58_1 = 0
    sub_140b552b0(&var_f8, 1)
    (*(var_f8.q + 0xd8))(&var_f8, 0)
    int64_t* rcx_4 = var_f8:8.q
    var_f8.q = &data_142d6b000
    var_50 = 0
    int32_t var_48_1 = 0
    int64_t rdx_2 = *rcx_4
    bool rax_8
    
    if (rdx_2 + 4 u> rcx_4[1])
        int32_t rax_9
        rax_9.b = var_38 != 0
        var_108.d = rax_9
        sub_14063a3c0(&var_f8, &var_108, 4)
        rax_8 = var_108.d != 0
        var_38 = rax_8
    else
        var_38 = *rdx_2 != 0
        *rcx_4 += 4
        rax_8 = var_38
    
    void var_37
    
    if (rax_8 != 0)
        (*(var_f8.q + 0x150))(&var_f8, &var_37, 0x10)
    var_108 = var_50
    int32_t var_100_1 = var_48_1
    var_108.o = var_108.o
    
    if (arg2[1].d != 0)
        rsi = *arg2
    
    sub_140a464c0()
    
    if (sub_140b27070(&var_108, rsi, &data_14399ea08, 0) == 0)
        int64_t rcx_13 = var_50
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        sub_140b4cb40(&var_f8)
        goto label_14062b5e2
    
    var_48_1 = 0
    int64_t rcx_9 = var_50
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    sub_140b4cb40(&var_f8)
    int64_t rcx_11 = *arg1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int16_t* rcx_12 = *arg2
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_128)
return result
