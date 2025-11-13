// 函数: sub_141d13a80
// 地址: 0x141d13a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t r14 = 0
int32_t r12 = 0
uint64_t var_b0 = 0
int32_t var_a8 = 0
int32_t rdi = 0
EnterCriticalSection(arg1 + 0x38)
int64_t rsi = sx.q(*(arg1 + 0x18))
int32_t rax_2 = 0
int32_t r15 = 0
int32_t temp0 = rsi.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&var_b0, rsi.d)
        r12 = var_a8
        r14 = var_b0
    
    memcpy((sx.q(r12) << 4) + r14, *(arg1 + 0x10), (rsi << 4).d)
    r12 += rsi.d
    rax_2 = r12
    r15 = r12

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)
    rax_2 = r15

uint64_t rax_3 = r14
int64_t rsi_3 = (sx.q(rax_2) << 4) + r14
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (r14 != rsi_3)
    do
        void* rcx_6 = _mm_bsrli_si128(*rax_3, 8).q
        
        if (*(rcx_6 + 0x14a) == 0)
            rdi += *(rcx_6 + 0x130)
        
        rax_3 += 0x10
    while (rax_3 != rsi_3)
    
    if (rdi s> 0)
        sub_141d0e6a0(&var_98, rdi)
        int32_t rax_6
        
        if (rdi u< 4)
            rax_6 = 1
        else
            uint32_t rdi_1 = rdi u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_1 + 8)
            int32_t rcx_8
            
            if (rdi_1 == 0xfffffff8)
                rcx_8 = 0x20
            else
                rcx_8 = 0x1f - temp0_2
            
            int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rdi_1 + 7)
            
            if (rcx_10 == 0)
                rax_6 = 1
            else
                rax_6 = 1 << ((not.d(rcx_10)).b & (0x20 - (0x1f - temp0_3)))
        
        if (var_50 == 0 || var_50 s< rax_6)
            int32_t var_50_1 = rax_6
            sub_141845dc0(&var_98)

char var_b8
sub_141cf43b0(r14, r12, var_b8, 0)
uint64_t rbx_1 = r14

if (r14 != rsi_3)
    do
        int64_t* rcx_16 = _mm_bsrli_si128(*rbx_1, 8).q
        
        if (*(rcx_16 + 0x14a) == 0)
            sub_141d12a70(rcx_16, &var_98, arg2, 1)
        
        rbx_1 += 0x10
    while (rbx_1 != rsi_3)

int32_t var_50_2 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_141cf8700(&var_98)

if (r14 != 0)
    result = sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_d8)
return result
