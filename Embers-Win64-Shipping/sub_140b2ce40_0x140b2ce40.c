// 函数: sub_140b2ce40
// 地址: 0x140b2ce40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
CRITICAL_SECTION* lpCriticalSection = *arg1
int64_t rdi = *arg2
int32_t r14 = arg2[1].d
uint64_t var_c8 = 0
uint64_t rsi
int32_t r15

if (r14 != 0)
    sub_1405a4c70(&var_c8, r14, 0)
    rsi = var_c8
    memcpy(rsi, rdi, r14 * 2)
    int32_t var_bc
    r15 = var_bc
else
    r15 = 0
    int32_t var_bc_1 = 0
    rsi = 0

if (lpCriticalSection + 0x80 != &var_c8)
    int64_t rcx_2 = *(lpCriticalSection + 0x80)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(lpCriticalSection + 0x80) = rsi
    *(lpCriticalSection + 0x88) = r14
    *(lpCriticalSection + 0x8c) = r15
else if (rsi != 0)
    sub_140a74f90(rsi)

int64_t var_b8 = 0
int128_t* var_a8 = nullptr
EnterCriticalSection(lpCriticalSection)
int128_t var_98

if (&var_b8 != lpCriticalSection + 0x30)
    int128_t zmm5_1 = var_b8.o
    int128_t zmm4_1 = var_a8.o
    int128_t zmm3 = var_98
    var_b8.o = lpCriticalSection->__offset(0x30).o
    int128_t zmm0 = lpCriticalSection->__offset(0x50).o
    var_a8.o = lpCriticalSection->__offset(0x40).o
    int128_t zmm1 = lpCriticalSection->__offset(0x60).o
    lpCriticalSection->__offset(0x30).o = zmm5_1
    lpCriticalSection->__offset(0x40).o = zmm4_1
    lpCriticalSection->__offset(0x50).o = zmm3
    var_98 = zmm0
    int128_t var_88_1 = zmm1
    int128_t var_88
    lpCriticalSection->__offset(0x60).o = var_88
    int128_t var_78_1 = zmm5_1
    int128_t var_68_1 = zmm4_1
    int128_t var_58_1 = zmm3
    int128_t var_48_1 = var_88

char temp0 = lpCriticalSection->__offset(0x78).b
lpCriticalSection->__offset(0x78).b = 1
int64_t rax_3
rax_3.b = temp0

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

int64_t* rcx_6 = lpCriticalSection->__offset(0x70).q
int64_t result = (*(*rcx_6 + 0x10))(rcx_6)

if (var_b8 != 0)
    int128_t* rcx_7 = &var_98
    
    if (var_a8 != 0)
        rcx_7 = var_a8
    
    result = var_b8((*(*rcx_7 + 8))(rcx_7))
    
    if (var_b8 != 0)
        int128_t* rcx_9 = &var_98
        
        if (var_a8 != 0)
            rcx_9 = var_a8
        
        result = (*(*rcx_9 + 0x10))(rcx_9)

__security_check_cookie(rax_1 ^ &var_e8)
return result
