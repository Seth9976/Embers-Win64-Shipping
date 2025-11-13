// 函数: sub_14062a810
// 地址: 0x14062a810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int16_t* const rsi = &data_142d40450
int64_t var_1f0 = 0
int64_t var_1e8 = 0
int16_t* const rdx

if (arg1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg1

if (sub_140b1ef70(&var_1f0, rdx, 0) == 0)
    goto label_14062a9e4

int128_t var_1d8
__builtin_memset(&var_1d8, 0, 0x90)
sub_140b4c2a0(&var_1d8)
int64_t var_148_1 = 0
int64_t* var_140_1 = &var_1f0
var_1d8.q = &data_142d6b230
int64_t var_138_1 = 0x7fffffffffffffff
sub_140b55290(&var_1d8, 1)
(*(var_1d8.q + 0xd8))(&var_1d8, 1)
int64_t* rcx_4 = var_1d8:8.q
int64_t rdx_2 = *rcx_4
int32_t var_1f8
bool var_78_1
bool rax_4

if (rdx_2 + 4 u> rcx_4[1])
    void* rax_5 = var_1d8.q
    int32_t* rdx_3 = &var_1f8
    var_1f8 = 0
    int64_t* rcx_5 = &var_1d8
    int64_t r9_1 = *(rax_5 + 0x150)
    
    if (r9_1 != sub_14063a340)
        r9_1(rcx_5, rdx_3, 4)
    else
        sub_14063a340(rcx_5, rdx_3, 4)
    
    rax_4 = var_1f8 != 0
    var_78_1 = rax_4
else
    var_78_1 = *rdx_2 != 0
    *rcx_4 += 4
    rax_4 = var_78_1

int64_t var_77

if (rax_4 != 0)
    int64_t* rdx_4 = &var_77
    int64_t* rcx_6 = &var_1d8
    int64_t r9_2 = *(var_1d8.q + 0x150)
    
    if (r9_2 != sub_14063a340)
        r9_2(rcx_6, rdx_4, 0x10)
    else
        sub_14063a340(rcx_6, rdx_4, 0x10)

var_1e8.d = 0

if (arg2[1].d != 0)
    rsi = *arg2

char result

if (sub_140b1ef70(&var_1f0, rsi, 0) != 0)
    int128_t var_128
    __builtin_memset(&var_128, 0, 0x90)
    sub_140b4c2a0(&var_128)
    int64_t var_98_1 = 0
    int64_t* var_90_1 = &var_1f0
    var_128.q = &data_142d6b230
    int64_t var_88_1 = 0x7fffffffffffffff
    sub_140b55290(&var_128, 1)
    (*(var_128.q + 0xd8))(&var_128, 1)
    int64_t* rcx_16 = var_128:8.q
    int64_t rdx_7 = *rcx_16
    bool var_60_1
    
    if (rdx_7 + 4 u> rcx_16[1])
        void* rax_10 = var_128.q
        int32_t* rdx_8 = &var_1f8
        var_1f8 = 0
        int64_t* rcx_17 = &var_128
        int64_t r9_3 = *(rax_10 + 0x150)
        
        if (r9_3 != sub_14063a340)
            r9_3(rcx_17, rdx_8, 4)
        else
            sub_14063a340(rcx_17, rdx_8, 4)
        
        var_60_1 = var_1f8 != 0
    else
        var_60_1 = *rdx_7 != 0
        *rcx_16 += 4
    
    int64_t var_5f
    
    if (var_60_1 != 0)
        int64_t* rdx_9 = &var_5f
        int64_t* rcx_18 = &var_128
        int64_t r9_4 = *(var_128.q + 0x150)
        
        if (r9_4 != sub_14063a340)
            r9_4(rcx_18, rdx_9, 0x10)
        else
            sub_14063a340(rcx_18, rdx_9, 0x10)
    
    int64_t var_6f
    int64_t var_57
    
    if (var_78_1 != var_60_1 || (var_78_1 != 0 && (var_77 != var_5f || var_6f != var_57)))
        rsi.b = 0
    else
        rsi.b = 1
    
    sub_140b4cb40(&var_128)
    sub_140b4cb40(&var_1d8)
    int64_t rcx_21 = var_1f0
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = *arg1
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int16_t* rcx_23 = *arg2
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    result = rsi.b
else
    sub_140b4cb40(&var_1d8)
label_14062a9e4:
    int64_t rcx_10 = var_1f0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = *arg1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int16_t* rcx_12 = *arg2
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    result = 0

__security_check_cookie(rax_1 ^ &var_218)
return result
