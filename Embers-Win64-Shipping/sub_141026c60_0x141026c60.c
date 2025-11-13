// 函数: sub_141026c60
// 地址: 0x141026c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 1 << (data_1439c7a34).b
int32_t i_1 = rbp - 1

if (rbp == 1)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t r14_1 = temp0_1
int32_t i

do
    void* rsi_1 = *(arg1 + (zx.q(r14_1) << 3) + 0x9d8)
    
    if (*(*(rsi_1 + 0x20) + 0x38) != 0)
        CRITICAL_SECTION* rax_2 = j_sub_140a82f30(0x128)
        CRITICAL_SECTION* rax_3
        
        if (rax_2 == 0)
            rax_3 = nullptr
        else
            rax_3 = sub_14100b830(rax_2, rsi_1)
        
        *(rsi_1 + 0xae8) = rax_3
        void** rax_4 = j_sub_140a82f30(0x48)
        void** rdi_1 = rax_4
        
        if (rax_4 == 0)
            rdi_1 = nullptr
        else
            *rax_4 = rsi_1
            InitializeCriticalSection(&rax_4[1])
            SetCriticalSectionSpinCount(&rdi_1[1], 0xfa0)
            __builtin_memset(&rdi_1[6], 0, 0x14)
        
        *(rsi_1 + 0xaf0) = rdi_1
        void**** rax_5 = j_sub_140a82f30(0x10)
        void**** rax_6
        
        if (rax_5 == 0)
            rax_6 = nullptr
        else
            rax_6 = sub_141009320(rax_5, rsi_1)
        
        *(rsi_1 + 0xae0) = rax_6
    
    int32_t rax_7 = 1 << r14_1.b
    r14_1 = 0x20
    i = not.d(rax_7) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        r14_1 = temp0_2
while (i != 0)
