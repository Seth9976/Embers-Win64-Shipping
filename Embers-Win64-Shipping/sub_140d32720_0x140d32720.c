// 函数: sub_140d32720
// 地址: 0x140d32720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t r9 = zx.q(data_14401b1a0)
int64_t var_88 = arg2
int32_t* rbx_1 = *(ThreadLocalStoragePointer + (r9 << 3)) + 0x14

if (data_143e1d968 s> *rbx_1)
    _Init_thread_header(&data_143e1d968)
    
    if (data_143e1d968 == 0xffffffff)
        InitializeCriticalSection(&data_143e1d940)
        SetCriticalSectionSpinCount(&data_143e1d940, 0xfa0)
        atexit(sub_142cc3560)
        _Init_thread_footer(&data_143e1d968)

if (data_143e1d96c s> *rbx_1)
    _Init_thread_header(&data_143e1d96c)
    
    if (data_143e1d96c == 0xffffffff)
        InitializeSRWLock(&data_1439aad78)
        atexit(sub_142cc3460)
        _Init_thread_footer(&data_143e1d96c)

int64_t rbx_2 = sx.q(*(arg1 + 0xc))
AcquireSRWLockExclusive(&data_1439aad78)

if (rbx_2.d s>= data_1439aad70)
    int32_t var_4c_1 = 0x80
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x1c)
    int32_t var_48_1 = 0xffffffff
    sub_140d13c30(&data_1439aad60, rbx_2.d, &var_78)
    sub_1405ae080(&var_78)

int64_t* rbx_5 = rbx_2 * 0x50 + data_1439aad68
ReleaseSRWLockExclusive(&data_1439aad78)
EnterCriticalSection(&data_143e1d940)
uint32_t rdi_1 = (arg2 u>> 4).d
int32_t r8_2 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
int32_t rdx_3 = neg.d(r8_2 + rdi_1) ^ r8_2 u>> 0xd
int32_t rdi_4 = (rdi_1 - r8_2 - rdx_3) ^ rdx_3 u>> 0xc
int32_t r8_5 = (r8_2 - rdi_4 - rdx_3) ^ rdi_4 << 0x10
int32_t rdx_6 = (rdx_3 - r8_5 - rdi_4) ^ r8_5 u>> 5
int32_t rdi_7 = (rdi_4 - r8_5 - rdx_6) ^ rdx_6 u>> 3
int32_t r8_8 = (r8_5 - rdi_7 - rdx_6) ^ rdi_7 << 0xa
void* rax_18 = sub_140d14740(rbx_5, (rdx_6 - r8_8 - rdi_7) ^ r8_8 u>> 0xf, &var_88)
(*arg3)(*(arg3 + 8), rax_18)
int32_t rbx_7 = *rax_18
LeaveCriticalSection(&data_143e1d940)
__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rbx_7)
