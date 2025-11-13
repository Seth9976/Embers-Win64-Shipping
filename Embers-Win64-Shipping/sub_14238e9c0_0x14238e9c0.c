// 函数: sub_14238e9c0
// 地址: 0x14238e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x150)
int64_t r13 = sx.q(arg2)
int32_t rbp = *(*(arg1 + 0x108) + 8)
int64_t* r14_1 = r13 * 0x430 + r8[2]
int64_t r9 = sx.q(arg4)
void* rax_2 = *(*r8 + (r13 << 3))
void* r8_1 = rax_2 + 0x10
void* rax_3 = *(rax_2 + 0x28)

if (rax_3 != 0)
    r8_1 = rax_3

void* r13_2 = (r13 << 7) + *(arg1 + 0x160)
void* rcx = r8_1 + r9 * 0x18
void* rax_5 = *(r13_2 + 0x40)
void* rcx_1 = r13_2 + 0x30

if (rax_5 != 0)
    rcx_1 = rax_5

int64_t* r15 = *(rcx_1 + r9 * 0x10)
int64_t* rax_7 = (*(*r15 + 0x280))(r15)
int64_t var_58 = 0
int64_t r9_2 = *rax_7
int64_t* rax_8 = (*(r9_2 + 0x40))(rax_7, zx.q(rbp), &var_58, r9_2)
void* rsi = arg8
void* rcx_4 = *(arg8 + 0x68)

if (rcx_4 != 0)
    rsi = rcx_4

if (*(r13_2 + 0x50) == 0)
    *(rsi + 0x28) = r14_1[0x40]
else
    r14_1 = &r14_1[0x42]
    *(rsi + 0x28) = *(r13_2 + 0x58)
    int64_t rax_9 = *(r13_2 + 0x50)
    *(rsi + 0x64) |= 0x100
    *(rsi + 0x20) = rax_9

if (arg6 != 0)
    r15.b = 0
else if (sub_1423b4730(r15, (*(*r14_1 + 0x40))(r14_1), rbp) == 0)
    r15.b = 0
else
    r15.b = 1

char rax_16

if (data_143a2ff91 != 0 && (*(arg1 + 0x35) & 1) != 0 && (*(rax_2 + 0x44) & 4) != 0 && r15.b == 0)
    rax_16 = (*(*rax_8 + 0x28))(rax_8)

if (data_143a2ff91 == 0 || (*(arg1 + 0x35) & 1) == 0 || (*(rax_2 + 0x44) & 4) == 0 || r15.b != 0
        || rax_16 != 0)
    rbp.b = 0
else
    rbp.b = 1

char rax_19

if (*(arg1 + 0x32) - 1 u> 1)
    rax_19 = (*(*rax_8 + 0x30))(rax_8)

int64_t* r12

if (*(arg1 + 0x32) - 1 u<= 1 || rax_19 == 0)
    r12.b = 0
else
    r12.b = 1

int32_t result

if (sub_142397cc0(arg1, arg2, arg4, 0, r15.b, rbp.b, arg7, r14_1, arg8) == 0)
    result.b = 0
else
    *(arg8 + 0x9b) = arg4.b
    *(arg8 + 0x9a) = arg2.b
    int32_t rax_21
    int32_t rcx_11
    
    if ((*(arg1 + 0x628) & 2) != 0)
        if (rbp.b != 0)
            rcx_11 = 0
            rax_21 = 0
        else
            rax_21 = 1
            rcx_11 = 0
    else if ((*(arg1 + 0x35) & 1) == 0 || rbp.b != 0)
        rcx_11 = 0
        rax_21 = 0
    else
        rax_21 = 1
        rcx_11 = 0
    
    int32_t rdx_5 = (*(arg8 + 0x9c) & 0xfffffffe) | rax_21
    *(arg8 + 0x9c) = rdx_5
    
    if ((*(arg1 + 0x628) & 1) != 0 && *(rcx + 0x15) != 0)
        rcx_11 = 4
    
    int32_t rdx_7 = (rdx_5 & 0xfffffffb) | rcx_11
    *(arg8 + 0x88) = r13_2
    *(arg8 + 0x80) = rax_7
    *(arg8 + 0x9c) = ((rdx_7 & 4) << 0xb | (zx.d(arg5) & 7)) << 0xd | (rdx_7 & 0xfbff1fff)
    *(rsi + 0x50) = *(rcx + 0xc)
    *(rsi + 0x54) = *(rcx + 0x10)
    sub_142397f70(arg1, arg2, r12.b, arg8)
    result.b = 1

return result
