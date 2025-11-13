// 函数: sub_140bc2650
// 地址: 0x140bc2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 && sub_140d23dc0(arg3, 0x30) == 0)
    *(arg3 + 8) |= 0x3000

void* rdi = *(arg1 + 0x90)
EnterCriticalSection(rdi + 0x58)
int32_t arg_8

if (arg2 != *(rdi + 0x80))
    *(rdi + 0x80) = arg2
    sub_140865c40(rdi + 8, &arg_8, arg2)
    int64_t rax_2 = sx.q(arg_8)
    void* const rcx_3
    
    if (rax_2.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = *(rdi + 8) + rax_2 * 0x18
    
    int64_t* rax_4 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax_4 = nullptr
    
    if (rax_4 == 0)
        *(rdi + 0x88) = 0
    else
        *(rdi + 0x88) = *rax_4

int64_t rdi_1 = *(rdi + 0x88)

if (rdi != -0x58)
    LeaveCriticalSection(rdi + 0x58)

if (rdi_1 == 0)
    void* rdi_2 = *(arg1 + 0x90)
    EnterCriticalSection(rdi_2 + 0x58)
    *(rdi_2 + 0x80) = arg2
    *(rdi_2 + 0x88) = arg3
    
    if (arg3 != 0)
        int64_t* var_38 = rdi_2 + 0x80
        void** var_30_1 = rdi_2 + 0x88
        sub_140bbe6a0(rdi_2 + 8, &arg_8, &var_38, nullptr)
    else
        EnterCriticalSection(rdi_2 + 0x58)
        *(rdi_2 + 0x80) = arg2
        *(rdi_2 + 0x88) = nullptr
        sub_140868c90(rdi_2 + 8, arg2)
        
        if (rdi_2 != -0x58)
            LeaveCriticalSection(rdi_2 + 0x58)
    
    if (rdi_2 != -0x58)
        LeaveCriticalSection(rdi_2 + 0x58)

int64_t rdi_3 = sx.q(*(arg1 + 0xd0))
int32_t rax_6 = (rdi_3 + 1).d
*(arg1 + 0xd0) = rax_6

if (rax_6 s> *(arg1 + 0xd4))
    sub_1405a4d70(arg1 + 0xc8)

int64_t result = *(arg1 + 0xc8)
*(result + (rdi_3 << 3)) = arg2
return result
