// 函数: sub_1408de520
// 地址: 0x1408de520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint32_t r9_1 = (arg2 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rdx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rdx_2) ^ r9_4 << 0x10
int32_t rdx_5 = (rdx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rdx_5) ^ r9_7 << 0xa
void* rax_14 = sub_1408d9760(arg1 + 0x18, (rdx_5 - r8_7 - r9_7) ^ r8_7 u>> 0xf, &arg_10)
void* rsi = rax_14

if (*rax_14 == 0)
    rax_14 = j_sub_140a82f30(0xf0)
    
    if (rax_14 != 0)
        *rax_14 = arg_10
        void* rcx_2 = rax_14 + 0x38
        __builtin_memset(rax_14 + 8, 0, 0x30)
        *(rcx_2 + 0x10) = 0
        *(rcx_2 + 0x18) = 0
        *(rcx_2 + 0x1c) = 0x80
        void* rax_15 = *(rcx_2 + 0x10)
        
        if (rax_15 != 0)
            rcx_2 = rax_15
        
        *rcx_2 = 0
        *(rcx_2 + 8) = 0
        *(rax_14 + 0x58) = 0xffffffff
        *(rax_14 + 0x5c) = 0
        *(rax_14 + 0x68) = 0
        *(rax_14 + 0x70) = 0
        __builtin_memset(rax_14 + 0x78, 0, 0x30)
        int64_t rax_16 = j_sub_140a82f30(0x18)
        
        if (rax_16 == 0)
            rax_16 = 0
        else
            __builtin_memset(rax_16, 0, 0x14)
        
        *(rax_14 + 0xb8) = rax_16
        *(rax_14 + 0xb0) = rax_16
        InitializeCriticalSection(rax_14 + 0xc0)
        int64_t rax_17 = SetCriticalSectionSpinCount(rax_14 + 0xc0, 0xfa0)
        *rsi = rax_14
        return rax_17
    
    *rsi = 0

return rax_14
