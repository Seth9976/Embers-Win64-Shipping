// 函数: sub_142995d90
// 地址: 0x142995d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b8 = -2
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rsi = sx.q(arg3)
char* var_1b0 = arg1
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0xf
*arg1 = 0
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (arg3 s<= 0)
    sub_14297ab20(&exceptionObject, "Error uncompressing DWA data (truncated rule).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

void var_127
memset(&var_127, 0, 0xff)
int32_t rdx = rsi.d

if (rsi.d s> 0xff)
    rdx = 0xff

void var_128
void* r8 = &var_128
int32_t temp0_1

do
    char* rax_2 = *arg2
    char rcx_1 = *rax_2
    *r8 = rcx_1
    *arg2 = &rax_2[1]
    
    if (rcx_1 == 0)
        break
    
    r8 += 1
    temp0_1 = rdx
    rdx -= 1
while (temp0_1 - 1 s>= 0)
int128_t zmm0 = data_143702ea0
char var_1a8 = 0
int64_t r8_1 = -1

do
    r8_1 += 1
while (*(&var_128 + r8_1) != 0)

sub_14058ad40(&var_1a8, &var_128, r8_1)

if (arg1 == &var_1a8)
    int64_t rdx_2 = zmm0:8.q
    
    if (rdx_2 u>= 0x10)
        void* rcx_4 = var_1a8.q
        void* rax_4 = rcx_4
        
        if (rdx_2 + 1 u>= 0x1000)
            rcx_4 = *(rcx_4 - 8)
            
            if (rax_4 - rcx_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_4)
else
    sub_140909b70(arg1)
    *arg1 = var_1a8.o
    *(arg1 + 0x10) = zmm0

if (rsi u< *(arg1 + 0x10) + 3)
    sub_14297ab20(&exceptionObject, "Error uncompressing DWA data (truncated rule).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

char* rax_7 = *arg2
int32_t rdx_4 = sx.d(*rax_7)
*arg2 = &rax_7[1]
*(arg1 + 0x28) = (rdx_4 s>> 4) - 1

if (rdx_4 s>> 4 u> 3)
    sub_14297ab20(&exceptionObject, "Error uncompressing DWA data (corrupt cscIdx rule).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

int32_t rcx_9 = rdx_4 s>> 2 & 3
*(arg1 + 0x20) = rcx_9

if (rcx_9 u>= 3)
    sub_14297ab20(&exceptionObject, "Error uncompressing DWA data (corrupt scheme rule).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

rdx_4.b &= 1
arg1[0x2c] = rdx_4.b
char* rcx_10 = *arg2
char rax_13 = *rcx_10
*arg2 = &rcx_10[1]

if (rax_13 u> 2)
    sub_14297ab20(&exceptionObject, "Error uncompressing DWA data (corrupt rule).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

*(arg1 + 0x24) = sx.d(rax_13)
__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
