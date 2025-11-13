// 函数: sub_141fab4a0
// 地址: 0x141fab4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** result = arg2

if (*(arg1 + 0x98) s> 0)
    void* rcx = **(arg1 + 0x90)
    
    if (rcx != 0 && *(rcx + 0x134) != 1 && *(arg1 + 0xe28) != 0)
        int32_t rbp = *(sub_141fb3410(arg1, arg3) + 0x10)
        int64_t* rsi = **(arg1 + 0x90)
        int64_t* rax_4 = j_sub_140a82f30(0x18)
        
        if (rax_4 == 0)
            *result = nullptr
            return result
        
        *rax_4 = rsi
        void* const rdx_1 = 0x1a40
        rax_4[2].d = rbp + 1
        
        if (rsi[0x2a1].b == 0)
            rdx_1 = 0x1a30
        
        rax_4[1] = rdx_1 + rsi
        int64_t r8 = *rsi
        (*(r8 + 0x2a8))(rsi, 0, r8)
        void* rax_5 = rax_4[1]
        *result = rax_4
        *(rax_4 + 0x14) = *(rax_5 + 8)
        return result

*arg2 = 0
return result
