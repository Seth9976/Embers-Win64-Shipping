// 函数: sub_14105a0a0
// 地址: 0x14105a0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0 = sub_14105b290(arg1 + 0x70, arg2, arg3)
EnterCriticalSection(arg1 + 0x38)
int64_t* rdi = *(arg1 + 0x60)
int64_t rsi = 0
uint64_t result = &rdi[sx.q(*(arg1 + 0x68))]
uint64_t r14_1 = sx.q(*(arg1 + 0x68)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        result = *rdi
        void* const rcx_2 = result - 0x88
        
        if (result == 0)
            rcx_2 = nullptr
        
        if (*(rcx_2 + 0xc) == 0)
            result = nullptr
            
            if (0 == *(rcx_2 + 8))
                *(rcx_2 + 8) = 0
            else
                result = zx.q(*(rcx_2 + 8))
            
            if (result.d s> 0)
                uint64_t r9_1 = zx.q(*(rcx_2 + 0xa4))
                
                if (*(rcx_2 + 0x64) == 1)
                    *(rcx_2 + 0x70) = divu.dp.q(0:(*(arg1 + 0xc0)), r9_1)
                
                result, zmm0 = sub_141025d40(rcx_2, rcx_2 + 0x60, arg1 + 0x70, r9_1.d, 0)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

if (arg1 != -0x38)
    result = LeaveCriticalSection(arg1 + 0x38)

if (data_1439c7a34 u> 1)
    for (void* i = *(arg1 + 0xe0); i != 0; i = *(i + 0xe0))
        int64_t rbx_1 = *(i + 0x30)
        sub_141059a80(i + 0x70, zmm0)
        *(i + 0x78) = 0
        __builtin_memset(i + 0x80, 0, 0x50)
        *(i + 0xd1) = 0xff
        zmm0 = memmove(i + 0x70, arg1 + 0x70, 0x68)
        *(i + 0x78) = 6
        *(i + 0x70) = rbx_1
        void* rax_3 = *(arg1 + 0x80)
        *(rax_3 + 8) += 1
        EnterCriticalSection(i + 0x38)
        int64_t rdi_1 = 0
        uint64_t* rsi_1 = *(i + 0x60)
        result = &rsi_1[sx.q(*(i + 0x68))]
        uint64_t r15_2 = sx.q(*(i + 0x68)) << 3 u>> 3
        
        if (rsi_1 u> result)
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                result = *rsi_1
                void* rcx_7 = result - 0x88
                
                if (result == 0)
                    rcx_7 = nullptr
                
                if (*(rcx_7 + 0xc) == 0)
                    result = 0
                    
                    if (0 == *(rcx_7 + 8))
                        *(rcx_7 + 8) = 0
                    else
                        result = zx.q(*(rcx_7 + 8))
                    
                    if (result.d s> 0)
                        uint64_t r9_2 = zx.q(*(rcx_7 + 0xa4))
                        
                        if (*(rcx_7 + 0x64) == 1)
                            *(rcx_7 + 0x70) = divu.dp.q(0:(*(i + 0xc0)), r9_2)
                        
                        result, zmm0 = sub_141025d40(rcx_7, rcx_7 + 0x60, i + 0x70, r9_2.d, 0)
                
                rsi_1 = &rsi_1[1]
                rdi_1 += 1
            while (rdi_1 != r15_2)
        
        if (i != -0x38)
            result = LeaveCriticalSection(i + 0x38)

return result
