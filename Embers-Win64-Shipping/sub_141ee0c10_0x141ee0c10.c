// 函数: sub_141ee0c10
// 地址: 0x141ee0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
TEB* gsbase

if (data_143f3ad30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3ad30)
    
    if (data_143f3ad30 == 0xffffffff)
        sub_140b58170(&data_143f3ad28, "ProjectLocation", 1)
        _Init_thread_footer(&data_143f3ad30)

int32_t rdi = 0
char var_f8
void var_b8
sub_141eb54c0(&var_b8, data_143f3ad28, &var_f8, 0, nullptr)
void var_d8
sub_142259c00(&var_d8)
sub_142277d10(&var_d8, 0)
sub_14227a280(&var_d8, 0, 1)
sub_14227a280(&var_d8, 1, zx.d(*(arg1 + 0x38a)) u>> 7)
uint128_t* var_f0 = nullptr
int32_t var_e8 = 0
void* const var_118
var_118.d = 0
uint64_t result =
    sub_141ec6850(sub_1405be820(arg1), &var_f0, arg2, arg3, var_118.b, &var_b8, &var_d8)
char r12 = *(arg1 + 0x38a)
uint128_t* rcx_17

if (var_e8 s<= 0)
    rcx_17 = var_f0
else
    int32_t rdx_6
    
    do
        void* r14_1 = sx.q(rdi) * 0x88
        result = sub_140d3c6e0(&var_f0[7] + r14_1)
        uint64_t result_1 = result
        int64_t* rsi
        
        if (result == 0)
            rsi.b = 0
        else
            int64_t r8_4 = *result
            result = (*(r8_4 + 0x4d0))(result, 0, r8_4)
            
            if (result.d != 2)
                rsi.b = 0
            else
                rsi = 1
        
        if (result_1 != 0)
            result = (*(*result_1 + 0x4d0))(result_1, 1)
        
        if (result_1 == 0 || result.d != 2)
            result.b = 0
        else
            result = 1
        
        if (rsi.b != 0 || (result.b != 0 && r12 s< 0))
            rdx_6 = var_e8
            rdi += 1
        else
            int32_t rdx_2 = var_e8
            result = zx.q(rdx_2 - rdi - 1)
            
            if (result.d s>= 1)
                result = 1
            
            if (result.d != 0)
                uint128_t* rax_10 = var_f0
                result =
                    memcpy(r14_1 + rax_10, sx.q(rdx_2 - result.d) * 0x88 + rax_10, result.d * 0x88)
                rdx_2 = var_e8
            
            rdx_6 = rdx_2 - 1
            var_e8 = rdx_6
    while (rdi s< rdx_6)
    
    if (rdx_6 s<= 0)
        rcx_17 = var_f0
    else
        char r8_6 = var_f8
        uint128_t* rcx_16 = var_f0
        int64_t var_e0 = arg4
        result = sub_141ed0bf0(rcx_16, rdx_6, r8_6, &var_e0)
        rcx_17 = var_f0
        *arg5 = *rcx_17
        *(arg5 + 0x10) = rcx_17[1]
        *(arg5 + 0x20) = rcx_17[2]
        *(arg5 + 0x30) = rcx_17[3]
        *(arg5 + 0x40) = rcx_17[4]
        *(arg5 + 0x50) = rcx_17[5]
        *(arg5 + 0x60) = rcx_17[6]
        *(arg5 + 0x70) = rcx_17[7]
        *(arg5 + 0x80) = rcx_17[8].q
        *arg5 |= 1

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_138)
return result
