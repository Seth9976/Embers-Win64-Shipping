// 函数: sub_1415123e0
// 地址: 0x1415123e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *arg4
int32_t r13 = zmm1.d
int32_t r14 = _mm_bsrli_si128(zmm1, 8).d
uint128_t var_48 = zmm1
char rax_1

if (r14 != r13 || (var_48:8.q u>> 0x20).d != (var_48.q u>> 0x20).d)
    rax_1 = 0
else
    rax_1 = 1

int32_t r11 = *(arg2 + 0x48)
int32_t rsi = 0
int32_t r10 = *(arg2 + 8)
int32_t rbx = *(arg2 + 0x40)
int32_t r12 = *(arg2 + 0x44)
int32_t r15 = *(arg2 + 0x4c)

if (rax_1 == 0)
    int32_t rax_10 = var_48:4.d
    int32_t rdx = 0
    int32_t rcx_2 = 0
    int32_t r8_2 = r10 * rbx * r11
    int32_t r9_2 = r10 * r12 * r15
    
    if (r13 s>= 0)
        rdx = r13
    
    var_48.d = rdx
    
    if (rax_10 s>= 0)
        rcx_2 = rax_10
    
    var_48:4.d = rcx_2
    
    if (r14 s<= r8_2)
        r8_2 = r14
    
    if (var_48:0xc.d s<= r9_2)
        r9_2 = var_48:0xc.d
    
    if (rdx s>= r8_2)
        r8_2 = rdx
    
    var_48:8.d = r8_2
    
    if (rcx_2 s>= r9_2)
        r9_2 = rcx_2
    
    var_48:0xc.d = r9_2
else
    var_48:8.d = r10 * rbx * r11
    var_48:0xc.d = r12 * r15 * r10

int64_t result
void* lpCriticalSection

if (arg5 s< 0)
    uint64_t rcx_4 = zx.q(data_14401b1a0)
    int32_t r14_2 = *(arg2 + 0x5c)
    float zmm6[0x4] = zx.o(0)
    uint128_t zmm0
    zmm0.d = float.s(zx.q(r11 * rbx * r10))
    zmm6[0] = float.s(zx.q(r10 * r15 * r12))
    zmm0.d = zmm0.d f/ *arg3
    TEB* gsbase
    bool cond:3_1 = data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3)))
    zmm6[0] = zmm6[0] f/ arg3[1]
    zmm0.d = zmm0.d f* zmm0.d
    zmm6[0] = zmm6[0] * zmm6[0]
    float temp0_2[0x4] = _mm_max_ss(zmm6[0], zmm0.d)
    
    if (cond:3_1)
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    float zmm0_1 = logf(temp0_2.d) f* data_143cda910 * 0.5f
    int32_t rax_16 = int.d(zmm0_1 + zmm0_1 - 0.5f) s>> 1
    
    if (rax_16 s>= 0)
        rsi = r14_2
        
        if (rax_16 s< r14_2)
            rsi = rax_16
    
    lpCriticalSection = arg1 + 0x180
    EnterCriticalSection(lpCriticalSection)
    result = sub_141512660(arg1, arg2, &var_48, rsi)
    int32_t r9_3 = rsi + 1
    
    if (r9_3 u<= r14_2)
        result = sub_141512660(arg1, arg2, &var_48, r9_3)
else
    lpCriticalSection = arg1 + 0x180
    EnterCriticalSection(lpCriticalSection)
    result = sub_141512660(arg1, arg2, &var_48, arg5)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
