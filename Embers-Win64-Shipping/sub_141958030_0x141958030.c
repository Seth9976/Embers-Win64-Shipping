// 函数: sub_141958030
// 地址: 0x141958030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg1 + 0x60)
int64_t r9 = sx.q(*(arg1 + 0x68))
void* r13 = arg1
int64_t* r8 = r10
void* rdx = &r10[r9]

if (r10 != rdx)
    do
        if (*r8 == arg2)
            int32_t r8_2 = ((r8 - r10) s>> 3).d
            
            if (r8_2 != 0xffffffff)
                void* rcx = &r10[sx.q(r8_2)]
                memmove(rcx, rcx + 8, (r9.d - r8_2 - 1) << 3)
                *(r13 + 0x68) -= 1
            
            break
        
        r8 = &r8[1]
    while (r8 != rdx)

CRITICAL_SECTION* lpCriticalSection_2 = *(r13 + 0x78)
*(r13 + 0x70) = 1
EnterCriticalSection(lpCriticalSection_2)
HDC param0_2 = wglGetCurrentDC()
HGLRC param1_4 = wglGetCurrentContext()
HDC param0 = arg2[1]
HGLRC param1_3 = param1_4
HGLRC param1 = arg2[2]
uint64_t r15
r15.b = param0_2 == param0
char arg_10

if (param1_4 != param1 || r15.b == 0)
    arg_10 = 0
    
    if (wglMakeCurrent(param0, param1) == 0)
        wglMakeCurrent(nullptr, nullptr)
else
    arg_10 = 1

CRITICAL_SECTION* lpCriticalSection_1 = data_143f01c30
int64_t r12 = arg2[2]

if (lpCriticalSection_1 == 0)
    CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(zx.q((&lpCriticalSection_1[1]).d))
    lpCriticalSection_1 = lpCriticalSection
    
    if (lpCriticalSection == 0)
        lpCriticalSection_1 = nullptr
    else
        InitializeCriticalSection(lpCriticalSection)
        SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
    
    data_143f01c30 = lpCriticalSection_1

EnterCriticalSection(lpCriticalSection_1)
int32_t rcx_6 = data_143f01c28
int32_t rbp = 0

if (rcx_6 s> 0)
    int64_t rax_3 = data_143f01c20
    int64_t* r14 = nullptr
    
    do
        if (*(r14 + rax_3) == r12)
            int64_t r15_2 = sx.q(rbp) << 4
            data_143effca0(1, rax_3 + 8 + r15_2)
            int32_t rax_4 = data_143f01c28
            int32_t rcx_9 = rax_4 - rbp - 1
            
            if (rcx_9 s>= 1)
                rcx_9 = 1
            
            if (rcx_9 != 0)
                int64_t rax_6 = data_143f01c20
                memcpy(r15_2 + rax_6, (sx.q(rax_4 - rcx_9) << 4) + rax_6, rcx_9 << 4)
                rax_4 = data_143f01c28
            
            data_143f01c28 = rax_4 - 1
            sub_1405a5010(&data_143f01c20)
            rcx_6 = data_143f01c28
            rbp -= 1
            rax_3 = data_143f01c20
            r14 -= 0x10
        
        rbp += 1
        r14 = &r14[2]
    while (rbp s< rcx_6)
    
    r13 = arg1
    param1_3 = param1_4
    r15 = zx.q(r15.b)

if (lpCriticalSection_1 != 0)
    LeaveCriticalSection(lpCriticalSection_1)

data_143f001a8(0)
data_143f001a0(1, arg2 + 0x24)

if (arg2[4].d != 0)
    data_143f00100(1, &arg2[4])
    arg2[4].d = 0

if (arg_10 == 0)
    HDC param0_1
    HGLRC param1_1
    
    if (param1_3 == 0)
        param1_1 = nullptr
        param0_1 = nullptr
    else
        param0_1 = param0_2
        param1_1 = param1_3
    
    if (wglMakeCurrent(param0_1, param1_1) == 0)
        wglMakeCurrent(nullptr, nullptr)

wglDeleteContext(arg2[2])
arg2[2] = 0

if (lpCriticalSection_2 != 0)
    LeaveCriticalSection(lpCriticalSection_2)

if (arg_10 != 0)
    wglMakeCurrent(nullptr, nullptr)

ReleaseDC(*arg2, arg2[1])
arg2[1] = 0
HGLRC result = wglGetCurrentContext()
HGLRC param1_2 = *(r13 + 0x40)

if (result == param1_2 && r15.b != 0)
    result = wglMakeCurrent(*(r13 + 0x38), param1_2)
    
    if (result.d == 0)
        result = wglMakeCurrent(nullptr, nullptr)

if (arg2[3].b != 0)
    result = DestroyWindow(*arg2)

*arg2 = 0
return result
