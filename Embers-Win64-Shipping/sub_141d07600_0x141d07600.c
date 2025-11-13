// 函数: sub_141d07600
// 地址: 0x141d07600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
uint64_t var_b8 = 0
int64_t var_b0 = 0
EnterCriticalSection(&arg1[7])
int64_t rdi = sx.q(arg1[3].d)

if (rdi.d != 0)
    int32_t rax_2 = var_b0.d
    int32_t rdx = rax_2 + rdi.d
    
    if (rdx s> var_b0:4.d)
        sub_1405a5410(&var_b8, rdx)
        rax_2 = var_b0.d
    
    memcpy((sx.q(rax_2) << 4) + var_b8, arg1[2], (rdi << 4).d)
    var_b0.d += rdi.d

if (arg1 != -0x38)
    LeaveCriticalSection(&arg1[7])

int64_t r8
int64_t var_a0 = r8
void** const var_a8 = &data_14321cbe0
int64_t* var_98 = &var_88
uint64_t* var_90 = &var_b8
char rax_3 = sub_140a4ac50(arg1, arg2)
uint64_t rcx_7 = var_b8
void** const var_a8_1 = &data_142d6ad38

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_140669e00(&var_88)
__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rax_3)
