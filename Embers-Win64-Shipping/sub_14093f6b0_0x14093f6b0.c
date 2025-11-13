// 函数: sub_14093f6b0
// 地址: 0x14093f6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

do
    int64_t* rdi_1 = nullptr
    EnterCriticalSection(arg1 + 0xc0)
    i = *(arg1 + 0xb8)
    
    if (i s> 0)
        int64_t* rcx_1 = *(arg1 + 0xb0)
        int32_t i_1 = i
        rdi_1 = *rcx_1
        
        if (i != 1)
            memmove(rcx_1, &rcx_1[1], (i - 1) << 3)
            i_1 = *(arg1 + 0xb8)
        
        *(arg1 + 0xb8) = i_1 - 1
        sub_1405c53d0(arg1 + 0xb0)
    
    if (arg1 != -0xc0)
        LeaveCriticalSection(arg1 + 0xc0)
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x10))(rdi_1)
        (*(*rdi_1 + 0x18))(rdi_1)
        (**rdi_1)(rdi_1, 1)
while (i s> 1)
EnterCriticalSection(arg1 + 0x50)
int32_t r15 = *(arg1 + 0x48)

if (arg1 != -0x50)
    LeaveCriticalSection(arg1 + 0x50)

int64_t result = EnterCriticalSection(arg1 + 0x18)
int64_t r14_1 = *(arg1 + 0x10)
int32_t rsi = r15 + 1

if (r14_1 == 0)
    rsi = r15

if (arg1 != -0x18)
    result = LeaveCriticalSection(arg1 + 0x18)

if (r14_1 != 0 || rsi s<= 0)
    return result

EnterCriticalSection(arg1 + 0x50)
int32_t rax_5 = *(arg1 + 0x48)
int64_t* rcx_12 = *(arg1 + 0x40)
int64_t* r14_2 = *rcx_12

if (rax_5 != 1)
    memmove(rcx_12, &rcx_12[1], (rax_5 - 1) << 3)
    rax_5 = *(arg1 + 0x48)

*(arg1 + 0x48) = rax_5 - 1
sub_1405c53d0(arg1 + 0x40)

if (arg1 != -0x50)
    LeaveCriticalSection(arg1 + 0x50)

(*(*r14_2 + 0x20))(r14_2)
EnterCriticalSection(arg1 + 0x18)
*(arg1 + 0x10) = r14_2

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

int64_t* rcx_18 = *(arg1 + 0xe8)
return (*(*rcx_18 + 0x10))(rcx_18)
