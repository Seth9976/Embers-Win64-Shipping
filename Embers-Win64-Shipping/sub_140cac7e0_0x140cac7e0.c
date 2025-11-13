// 函数: sub_140cac7e0
// 地址: 0x140cac7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rax_2 = data_143e1b318

if (rax_2 == 0)
    rax_2 = sub_140cbc430()
    data_143e1b318 = rax_2

int64_t var_f8 = rax_2
void var_108
void* var_100 = &var_108
int64_t var_e8 = rax_2
void** var_f0 = &var_100
int64_t var_a0 = 0
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
int64_t var_30
__builtin_memset(&var_30, 0, 0x11)
int32_t var_1c = 0
sub_140cb1300(&var_100, arg2)
int64_t rcx_3 = var_30

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = DeleteCriticalSection(&criticalSection)
__security_check_cookie(rax_1 ^ &var_128)
return result
