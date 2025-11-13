// 函数: sub_140e23520
// 地址: 0x140e23520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi
rsi.b = arg4 != 0
char* rsi_2 = rsi + 0x2a + arg1

if (arg2 == 3)
    int64_t var_38 = arg1
    int64_t* r15_1 = &data_1439af190
    
    if (arg4 == 0)
        r15_1 = &data_1439af130
    
    AcquireSRWLockExclusive(&r15_1[0xa])
    uint32_t r8_1 = (var_38 u>> 4).d
    int32_t r9_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
    int32_t rdx_2 = neg.d(r9_1 + r8_1) ^ r9_1 u>> 0xd
    int32_t r8_4 = (r8_1 - r9_1 - rdx_2) ^ rdx_2 u>> 0xc
    int32_t r9_4 = (r9_1 - r8_4 - rdx_2) ^ r8_4 << 0x10
    int32_t rdx_5 = (rdx_2 - r9_4 - r8_4) ^ r9_4 u>> 5
    int32_t r8_7 = (r8_4 - r9_4 - rdx_5) ^ rdx_5 u>> 3
    int32_t r9_7 = (r9_4 - r8_7 - rdx_5) ^ r8_7 << 0xa
    void* rax_15 = sub_140dd32f0(r15_1, (rdx_5 - r9_7 - r8_7) ^ r9_7 u>> 0xf, &var_38)
    ReleaseSRWLockExclusive(&r15_1[0xa])
    sub_140de1350(rax_15, arg3)
else if (*rsi_2 == 3)
    void** r15_2 = &data_1439af190
    
    if (arg4 == 0)
        r15_2 = &data_1439af130
    
    AcquireSRWLockExclusive(&r15_2[0xa])
    sub_140e20e10(r15_2, arg1)
    ReleaseSRWLockExclusive(&r15_2[0xa])

char rcx_7 = *rsi_2

if (rcx_7 == arg2)
    return 

*rsi_2 = arg2

if (arg4 != 0)
    return 

int128_t* rax
rax.b = rcx_7 != 0
int32_t r14
r14.b = arg2 != 0

if (rax.d == r14)
    return 

rax = data_143e20d08
int64_t* rbx_2 = rax[0xb].q

if (rbx_2 != 0)
    rbx_2[1].d += 1

*(*(rax + 0xa8) + 0x78) = 1

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
