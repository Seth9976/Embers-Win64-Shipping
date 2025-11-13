// 函数: sub_140cac8d0
// 地址: 0x140cac8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rax_2 = data_143e1b318

if (rax_2 == 0)
    rax_2 = sub_140cbc430()
    data_143e1b318 = rax_2

int64_t var_f8 = rax_2
void var_118
void* var_100 = &var_118
int64_t var_e8 = rax_2
void** var_f0 = &var_100
int64_t var_a0 = 0
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
int64_t var_30
__builtin_memset(&var_30, 0, 0x11)
int32_t var_1c = 0

if (*(arg2 + 8) != 0)
    int64_t* var_110_1 = nullptr
    sub_140cc95e0(&var_100, arg2)
    
    if (var_110_1 != 0)
        var_110_1[9].d -= 1
        
        if (var_110_1[9].d == 1)
            sub_140a2f6e0(var_110_1)
    
    int64_t rcx_4 = var_30
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int64_t result = DeleteCriticalSection(&criticalSection)
__security_check_cookie(rax_1 ^ &var_138)
return result
