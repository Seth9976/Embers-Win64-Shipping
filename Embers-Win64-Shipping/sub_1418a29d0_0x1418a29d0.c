// 函数: sub_1418a29d0
// 地址: 0x1418a29d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf8)
int32_t r9 = *(arg1 + 0xe8)
int32_t r10 = *(arg1 + 0xe4)
int32_t rdx = *(arg1 + 0xec)
int32_t rcx_1 = *(arg1 + 0xe0)

if (((*(arg2 + 4) ^ r10) | (arg2[1].d ^ r9) | (*(arg2 + 0xc) ^ rdx) | (rcx_1 ^ *arg2)) != 0)
    int32_t arg_8
    
    if (*(arg1 + 0xf0) != 0 && (rcx_1 | r10 | r9 | rdx) != 0
            && *sub_140cba0f0(arg1 + 0x10, &arg_8, arg1 + 0xe0) == 0xffffffff)
        arg_8.q = *(arg1 + 0xf0)
        *(arg1 + 0xf0) = 0
        sub_1418a87e0(arg1, arg1 + 0xe0, &arg_8, 0)
    
    *(arg1 + 0xe8) = 0
    *(arg1 + 0xe0) = 0
    int64_t* rcx_7 = *(arg1 + 0xf0)
    
    if (rcx_7 != 0)
        *(arg1 + 0xf0) = 0
        (**rcx_7)(rcx_7, 1)
    
    if (*sub_140cba0f0(arg1 + 0x10, &arg_8, arg2) == 0xffffffff)
        int64_t* rcx_16 = *(arg1 + 0x68)
        
        if (rcx_16 != 0)
            int64_t* rax_14 = (*(*rcx_16 + 0x18))(rcx_16, &arg_8, arg2)
            
            if (arg1 + 0xf0 != rax_14)
                int64_t* rcx_17 = *(arg1 + 0xf0)
                *(arg1 + 0xf0) = *rax_14
                *rax_14 = 0
                
                if (rcx_17 != 0)
                    (**rcx_17)(rcx_17, 1)
            
            int64_t* rcx_18 = arg_8.q
            
            if (rcx_18 != 0)
                (**rcx_18)(rcx_18, 1)
            
            if (*(arg1 + 0xf0) != 0)
                int64_t* rcx_19 = *(arg1 + 0x70)
                (*(*rcx_19 + 8))(rcx_19, arg2)
                sub_1418ad410(arg1)
    else
        sub_140cba0f0(arg1 + 0x10, &arg_8, arg2)
        int64_t rax_10 = sx.q(arg_8)
        void* const rcx_12
        
        if (rax_10.d == 0xffffffff)
            rcx_12 = nullptr
        else
            rcx_12 = (rax_10 << 5) + *(arg1 + 0x10)
        
        if (arg1 + 0xf0 != rcx_12 + 0x10)
            int64_t* r8_9 = *(arg1 + 0xf0)
            *(arg1 + 0xf0) = *(rcx_12 + 0x10)
            *(rcx_12 + 0x10) = 0
            
            if (r8_9 != 0)
                (**r8_9)(r8_9, 1)
        
        sub_1418aa6e0(arg1 + 0x10, arg2)
    
    if (*(arg1 + 0xf0) != 0)
        *(arg1 + 0xe0) = *arg2

int64_t result = *(arg1 + 0xf0)

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

return result
